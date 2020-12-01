//
// Created by 吴韩涛 on 2020-12-01.
//

#include "array.h"
#include <stdlib.h>


CArray *getArray(int size) {
    CArray *carray;
    int i;

    carray = malloc(sizeof(CArray));
    carray->array = malloc(sizeof(int) * size);
    carray->size = size;

    for(i = 0; i < size; i++) {
        carray->array[i] = 0;
    }

    return carray;
}
