#include <stdio.h>
#include <stdlib.h>

int main(){

    // never use the size as integer like 8 or 16
    double *ptr = malloc(sizeof(int)); 

    // this will give a segmentation fault.
    // double *ptr;


    if(ptr == NULL){
        printf("Could not alocate memory.\n");
        return 1;
    }

    *ptr = 3.142;

    printf("&ptr = %p\n", &ptr);
    printf("ptr = %p\n", ptr);
    printf("*ptr = %d\n", *ptr);

    // Dynamically allocate array.
    double arr[10] = {0};
    double *arr1 = malloc(10 * sizeof(double));
    /* also they are allocated contegiously */
    // so we can easily use arr1[n] notation too.
        
} 