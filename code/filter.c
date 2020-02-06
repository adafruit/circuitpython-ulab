/*
 * This file is part of the micropython-ulab project,
 *
 * https://github.com/v923z/micropython-ulab
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2020 Jeff Epler for Adafruit Industries
*/

#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "py/obj.h"
#include "py/runtime.h"
#include "compat.h"
#include "filter.h"

mp_obj_t filter_convolve(size_t n_args, const mp_obj_t *pos_args, mp_map_t *kw_args) {
    static const mp_arg_t allowed_args[] = {
        { MP_QSTR_a, MP_ARG_REQUIRED | MP_ARG_OBJ, {.u_rom_obj = MP_ROM_NONE } },
        { MP_QSTR_v, MP_ARG_REQUIRED | MP_ARG_OBJ, {.u_rom_obj = MP_ROM_NONE } },
    };

    mp_arg_val_t args[MP_ARRAY_SIZE(allowed_args)];
    mp_arg_parse_all(2, pos_args, kw_args, MP_ARRAY_SIZE(allowed_args), allowed_args, args);

    if(!mp_obj_is_type(args[0].u_obj, &ulab_ndarray_type) || !mp_obj_is_type(args[1].u_obj, &ulab_ndarray_type)) {
        mp_raise_TypeError(translate("convolve arguments must be ndarrays"));
    }

    ndarray_obj_t *a = MP_OBJ_TO_PTR(args[0].u_obj);
    ndarray_obj_t *c = MP_OBJ_TO_PTR(args[1].u_obj);
    int len_a = a->array->len;
    int len_c = c->array->len;
    if(len_a == 0 || len_c == 0) {
        mp_raise_TypeError(translate("convolve arguments must not be empty"));
    }

    int len = len_a + len_c - 1; // convolve mode "full"
    ndarray_obj_t *out = create_new_ndarray(1, len, NDARRAY_FLOAT);
    mp_float_t *outptr = out->array->items;
    int off = len_c-1;
    for(int k=-off; k<len-off; k++) {
        mp_float_t accum = (mp_float_t)0;
        int top_n = MIN(len_c, len_a - k);
        int bot_n = MAX(-k, 0);
        for(int n=bot_n; n<top_n; n++) {
            int idx_c = len_c - n - 1;
            int idx_a = n+k;
            mp_float_t ai = idx_a >= 0 && idx_a < len_a ? ndarray_get_float_value(a->array->items, c->array->typecode, idx_a) : (mp_float_t)0;
            mp_float_t ci = idx_c >= 0 && idx_c < len_c ? ndarray_get_float_value(c->array->items, c->array->typecode, idx_c) : (mp_float_t)0;
            accum += ai * ci;
        }
        *outptr++ = accum;
    }

    return out;
}
