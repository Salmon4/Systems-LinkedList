#include <stdio.h>
#include <stdlib.h>
#include "header.h"


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
  while (start != NULL){
    start = start->next;
    free(temp);
    temp = start;
  }
  return start;
}

struct node * remove_node(struct node *front, int data){
  struct node *start = front;
  struct node *current = front;
  if (start == NULL){
    return front;
  }
  if (current->i == data){
    free(start);
    front = front->next;
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
