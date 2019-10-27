#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main(){
  struct node *bunch;
  printf("Printing empty list: \n");
  print_list(bunch);
  prinf("\n");
  printf("Adding number 0 to 9 to list");
  int i;
  for (i = 0; i < 10; i++){
    insert_front(bunch, i);
  }
  printf("Printing result: \n")
  print_list(bunch);
}
