#include<stdio.h>
#include<stdlib.h>

#include "unknown_lib.h"

void small(int* a){
    (*a)/=68;
}

int bar(int* p){
    (*p) *=3;
    return unknown(p);
}

void foo1(int* n){
    (*n)*= (*n)  - 20;
    (*n) = (*n) - bar(n);
}

void foo(int* z){
    *z = bar(z);
    foo1(z);
    unknown(z);
    small(z);
    *z++;
}

int main(void){

    int x;
    x = 10;

    foo(&x);

    if(x == -1){
        printf("Error! Unexpected result occured");
        return 3;
    }

    return 0;
}

