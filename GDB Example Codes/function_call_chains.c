#include<stdio.h>

void first_function(){
    int x = 5;
    int y = 5;
    printf("entered first function");
    second_function();
}
void second_function(){
    int x = 1;
    int y = 2;
    printf("entered second function");
    third_function();
}
void third_function(){
    int x = 3;
    int y = 4;
    printf("entered third function");
    fourth_function();
}
void fourth_function(){
    int x = -1;
    int y = 0;
    printf("entered fourth function");
}

int main(void){
    first_function();
    printf("in main, after first function");
    return 0;
}