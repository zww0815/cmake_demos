#include "libdemo2.h"
#include "libdemo4.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("From exe [%s]: \n", argv[0]);
    demo2_print();
    demo4_print();
    return 0;
}
