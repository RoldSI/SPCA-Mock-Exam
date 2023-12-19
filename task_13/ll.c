#include "ll.h"

#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;
  unsigned int frequency;
  struct node* next;
};

/*
 * This function takes two arguments:
 * 
 * - `head`: pointer to the start of the sorted linked list
 * - `value`: value to insert into the list
 *
 * The function inserts the value into the list by adding a new node
 * with frequency 1 if the value is not yet present in the list or 
 * or increasing the frequency of the value's node if it is already present.
 * 
 * The function returns a pointer to the head of the modified list.
 */
struct node* insert_value(struct node* head, int value){

    // Answer goes here

    return head;
}

/*
 * This function takes two arguments:
 * 
 * - `head`: pointer to the start of the sorted linked list
 * - `value`: value to delete into the list
 *
 * The function deletes the value from the list by removing the value's node
 * if the value had frequency 1 or decreasing the frequency if it was > 1.  
 * If the value is not present, the function should not modify the list.
 * 
 * The function returns a pointer to the head of the (modified) list.
 */
struct node* delete_value(struct node* head, int value){

    // Answer goes here

    return head;
}