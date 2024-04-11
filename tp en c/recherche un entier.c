#include <stdio.h>
#include <stdlib.h>

typedef struct node {
 int data;
 struct node* next;
 } node;

 int rechercheelement(node* head, int element){
 node* current = head;

  while (current != NULL){
  if (current->data == element){
    return 1;
    }
    current = current->next;
    }
    return 0;
    }

int main(){
node* head =malloc(sizeof(node));
head->data = 1;
head->next = malloc (sizeof(node));
head->next->data = 2;
head->next->next = malloc(sizeof(node));
head->next->next->data = 3;
head->next->next->next =NULL;

int element = 2;
if (rechercheelement(head, element)){
    printf ("l'entier %d est pas present dans la liste chainee.\n", element);
    } else{
        printf("l'entier %d n'est pas present dans la liste chainee. \n", element);
}
   free (head->next->next);
   free(head->next);
   free(head);

    return ;
}
