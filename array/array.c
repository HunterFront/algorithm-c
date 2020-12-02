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

    for (i = 0; i < size; i++) {
        carray->array[i] = 0;
    }

    return carray;
}

int get(CArray *carray, int position) {
    return carray->array[position];
}

void insertAt(CArray *carray, int position, int value) {
    carray->array[position] = value;
}

void deleteAt(CArray *carray, int position) {
    carray->array[position] = 0;
}

void updateAt(CArray *carray, int position, int value) {
    if (carray->array[position])
        carray->array[position] = value;
}

int indexOf(CArray *carray, int value) {
    for (int i = 0; i < carray->size; i++) {
        if(carray->array[i] == value)
            return i;
    }
    return -1;
}

bool contains(CArray *carray, int value) {
    return indexOf(carray, value) > -1;
}

