#include <stdio.h>
#include "array.h"

int main() {
    CArray *carray = getArray(10);

    for (int i = 0; i < 10; ++i) {
        printf("%d", carray->array[i]);
    }

    return 0;
}