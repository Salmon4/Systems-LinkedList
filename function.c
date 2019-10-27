#include <stdio.h>
#include <stdlib.h>

struct node { int i; struct node *next; };

void print_list(struct node *linkedList){
  struct node *start = linkedList
  while (start != NULL){
    printf("%d", start->i);
    start = start->next;
  }
}


struct node * insert_front(struct node *linkedList, int newi){
  struct node *input = malloc(sizeof(struct node));
  input.i = newi;
  input.next = linkedList;
  return linkedList;
}

struct node * free_list(struct node * input){
  struct node * start = input;
  while (input->next != NULL){
    struct node * temp = input->next;
    input->next = NULL;
    input = temp;
  }
  return start;
}


int main(){
  return 0;
}
