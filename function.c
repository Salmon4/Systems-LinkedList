#include <stdio.h>
#include <stdlib.h>

struct node { int i; struct node *next; };

void print_list(struct node *linkedList){
  struct node *start = linkedList;
  printf("[ ");
  while (start != NULL){
    printf("%d ", start->i);
    start = start->next;
  }
  printf("]");
}


struct node * insert_front(struct node *linkedList, int newi){
  struct node *input = malloc(sizeof(struct node));
  input->i = newi;
  input->next = linkedList;
  return input;
}

struct node * free_list(struct node * input){
  struct node * start = input;
  struct node * temp = input;
  while (start->next != NULL){
    start = start->next;
    free(temp);
    temp = start;
  }
  return start;
}

struct node * remove_node(struct node *front, int data){
  struct node *start = front;
  struct node *current = start;
  if (start == NULL){
    return front;
  }
  if (current->i == data){
    start = start->next;
    free(start);
    front = start->next;
    return front;
  }
  while (start->i != data){
    current = start;
    start = start->next;
  }
  current->next = start->next;
  free(start);
  return front;
}

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

}
