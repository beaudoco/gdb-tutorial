#include "unknown_lib.h"

void yet_another_function(int *i){
    this_function_crash(i);
    *i = 10; 
}

void this_function_crash(int *i){
    *i = 1;
}

void fun(int *i){
    int *j = i;
    j = some_function_from_unknown_lib(i);
    j = another_function_from_unknown_lib(j);
    yet_another_function(j); 
}

int main(int argc, char** argv){

    int i;
    fun(&i);
    return 0;
}