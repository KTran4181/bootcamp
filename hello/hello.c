#include <stdio.h>

int main(){
  /* code */
  float pi = 3.14159;
  int ipi = (int) pi;
  int x = 4/3;

  printf("%f, %f, %f \n", (float)(4/3), (float)(4%3), (float)(4.0/3)); //return 0

  printf("False = %d \n", (3==2) );//return 0
  printf("True = %d \n", (3==3) ); //return 1

  if (3 > 2) {
    /* code */
    printf("True\n");
  } else  {
    /* code */
    printf("False\n");
  }
  if (3 - (2 + 1)) {
    /* code */
    printf("True\n");
  }else {
    printf("False\n");
  }
  if ('d'){
    printf("True\n");
  }else{
    printf("False\n");
  }
  if (9 % 3) {
    printf("True\n");
  }else{
    printf("False\n");
  }
  if ((3>2)-1) {
    /* code */
    printf("True\n");
  }else{
    printf("False\n");
  }


  return 0;
}
