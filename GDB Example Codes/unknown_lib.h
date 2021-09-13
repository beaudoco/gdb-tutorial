#ifndef UNKNOWN_LIB
#define UNKNOWN_LIB


int* some_function_from_unknown_lib(int* param){

    *param = *param * 10 - 2 + 135;
    return param;
}

int* another_function_from_unknown_lib(int* param){

    return 0;
}


int unknown(int* n){ 
    *n = -68;
    return -68; 
}

#endif