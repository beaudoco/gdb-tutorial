#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void basicFunction(int* arr, int len){

    for(int i=0; i< len; i++){
      printf("%d ", arr[i]);
    }
    printf("\n");
}

struct basicStructure{
  int first_field;
  char * second_field;
};

int main(int argc, char** argv){
  
  printf("Program started\n");
  int x,y, z, a, b, c;
  int arr[10] = {0,1,2,3,4,5,6,7,8,9};
  
  x = 1;
  y = 2;
  z = 3;

  x = x - 1;
  y = y - 1;
  z = z - 1;

  struct basicStructure helloStructure;
  helloStructure.first_field = 0;
  helloStructure.second_field = "Hello Structure";

  for(int i=0; i<argc; i++){
    printf("%s\n", argv[i]);
  }

  basicFunction(arr, 10);

  a = x + y;
  b = y + z;
  c = z + x; 

  printf("Program ended\n");

   return 0;
}
