#include <stdlib.h>
#include "lib1/lib.h"
#include "average/average.h"

int main()
{
    printf("Main Function Calling");
    printf("\n AVERAGE : %d" , average(2,5));
    lib_print();
}