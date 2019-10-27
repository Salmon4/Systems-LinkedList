#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main(){
  struct node *bunch;
  printf("Printing empty list: \n");
  print_list(bunch);

  printf("\n");

  printf("Adding number 0 to 9 to list:");
  int i;
  for (i = 0; i < 10; i++){
    bunch = insert_front(bunch, i);
  }
  printf("\nPrinting result: \n");
  print_list(bunch);

  printf("\n");

  printf("Removing 4: \n");
  bunch=remove_node(bunch,4);
  print_list(bunch);

  printf("\n");

  printf("Removing 1: \n");
  bunch = remove_node(bunch,1);
  print_list(bunch);

  printf("\n");

  printf("Removing 5: \n");
  bunch = remove_node(bunch,5);
  print_list(bunch);

  printf("\n");

  printf("Removing 9: \n");
  bunch = remove_node(bunch,9);
  print_list(bunch);

  printf("\n");

  printf("Removing 7: \n");
  bunch = remove_node(bunch,7);
  print_list(bunch);

  printf("\n");

  printf("Removing 0; \n");
  bunch = remove_node(bunch,0);
  print_list(bunch);

  printf("\n");

  printf("Freeing the list: \n");
  bunch=free_list(bunch);
  print_list(bunch);
  
}
