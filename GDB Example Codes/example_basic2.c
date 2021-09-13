#include<stdio.h>
#include<stdlib.h>

int* cumulative_sum_array(int n){

    int* csum_array = (int*)(malloc(n* sizeof(int)));
    for(int i=0; i<n; i++){
        csum_array[i] = i;
    }

    for(int i=1; i<n; i++){
        csum_array[i]+= csum_array[i-1]; 
    }

    return csum_array;
}

int main(int argc , char** argv){

    int n;
    scanf("%d",&n);
    int* arr = cumulative_sum_array(n);

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");
    
    return 0;
}