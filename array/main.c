#include <stdio.h>
#include "array.h"

int main() {
    int position;
    int value;

    CArray *carray = getArray(10);
    insertAt(carray, 0, 1);
    insertAt(carray, 1, 2);
    insertAt(carray, 2, 3);
    insertAt(carray, 3, 4);

    printf("Enter the position of value:");
    scanf("%d", &position);
    printf("This is what you want: %d\n", carray->array[position]);

    deleteAt(carray, 0);

    updateAt(carray, 1, 8);

    printf("Enter the value you find:");
    scanf("%d", &value);
    printf("The index of the value: %d\n", indexOf(carray, value));


    for (int i = 0; i < 10; ++i) {
        printf("%d\n", carray->array[i]);
    }

    return 0;
}