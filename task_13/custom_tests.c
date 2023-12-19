/*
 * Copyright (c) 2023, ETH Zurich.
 * All rights reserved.
 *
 * Custom (candidate-written) tests for CodeExpert C questions
 */
#include <stdio.h>


// THIS IS NOT PART OF THE ORIGINAL FILE!!!
#include "ll.h"
struct node {
  int value;
  unsigned int frequency;
  struct node* next;
};
void print_list(struct node* head) {
  if(head==NULL)
    printf("EMPTY\n");
  while(head!=NULL) {
    if(head->frequency==0) {
      printf("SHIIIIIIITTTT!!!!\n");
      return;
    }
    printf("%d - %d\n", head->value, head->frequency);
    head = head->next;
  }
}

// THIS HAS BEEN BY ME FOR QUICKER TESTING
void custom_tests(void)
{
    /*
     * Feel free to fill in your own tests here - they will be run
     * when you select 'test' in CodeExpert.
     */

    printf("Running custom tests...\n");
    struct node* head = insert_value(NULL, 3);
    head = insert_value(head, 8);
    head = insert_value(head, 3);
    head = insert_value(head, 2);
    head = insert_value(head, 4);
    head = insert_value(head, 3);
    head = insert_value(head, 234);
    head = insert_value(head, 3);
    head = delete_value(head, 3);
    print_list(head);
}
