#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

void addFirst(struct Node **head, int data) {
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = (*head);
  (*head) = newNode;
}

void add_atIndex(struct Node *head, int index, int data) {
  struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
  struct Node *ptr = head;

  temp->data = data;
  temp->next = NULL;

  index--;
  while (index != 1) {
    ptr = ptr->next;
    index--;
  }

  temp->next = ptr->next;
  ptr->next = temp;
}

void addLast(struct Node *head, int data) {
  struct Node *ptr, *temp;
  ptr = head;
  temp = (struct Node *)malloc(sizeof(struct Node));
  temp->data = data;
  temp->next = NULL;

  while (ptr->next != NULL) {
    ptr = ptr->next;
  }

  ptr->next = temp;
}

int sizeLL(struct Node *head){
  struct Node *tmp = head;
  int size = 0;
  while(tmp != NULL)
  {
    size++;
    tmp = tmp->next; 
  }
  return size;
}

void printLL(struct Node *head){
  struct Node *tmp = head;
  while(tmp != NULL){
    printf("%d --> ", tmp->data);
    if(tmp->next == NULL){
      printf("%s", "NULL\n");
    }
    tmp = tmp->next;
  }
}

int main(void) {
  struct Node *node1 = NULL;

  addFirst(&node1, 5);
  addFirst(&node1, 10);
  
  // testing
  addLast(node1, 200);

  add_atIndex(node1, 2, 3);

  add_atIndex(node1, 2, 2);
  addLast(node1, 300);
  printLL(node1);
  printf("Size of Linked list : %d\n", sizeLL(node1));
  
  return 0;
}