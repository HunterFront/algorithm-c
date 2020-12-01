//
// Created by 吴韩涛 on 2020-12-01.
//

#ifndef ARRAY_ARRAY_H
#define ARRAY_ARRAY_H

#include <stdbool.h>

typedef struct CArray {
    int *array;
    int size;
} CArray;

CArray *getArray(int size);

int get(int position);

void insertAt(CArray *carray, int position, int value);

void insertBefore(CArray *carray);

void insertAfter(CArray *carray);

void deleteAt(CArray *carray, int position);

void updateAt(CArray *carray, int position);

int indexOf(CArray *carray, int value);

bool contains(CArray *carray, int value);

int size(CArray *carray);



#endif //ARRAY_ARRAY_H
