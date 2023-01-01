/*
     Name: - V D Panduranga Sai Guptha 
     sec: -  B
     assignment: -04B
     Experiment topic: - Priority queue singly linked list.
*/
#include <stdio.h>
#include <stdlib.h>// header file 
// priority Node
typedef struct node {
   int data;
   int priority;  //priority file 
   struct node* next;
} Node;
Node* newNode(int d, int p) {  //function to link new noder o the priority linked list 
   Node* temp = (Node*)malloc(sizeof(Node));// Temp node 
   temp->data = d;
   temp->priority = p; //temp node family members 
   temp->next = NULL;
   return temp;  //returningthe temp node tho the function 
}
int peek(Node** head) { //function to check the first element in the priority linked list 
   return (*head)->data;
}
void pop(Node** head) {
   Node* temp = *head;
   (*head) = (*head)->next;  //condition for making the priority linked list 
   free(temp);  //free the the memory in the heap location 
}
void push(Node** head, int d, int p) { //function to push the element into the linke list 
   Node* start = (*head);
   Node* temp = newNode(d, p);
   if ((*head)->priority > p) {// condtion to add rhe element to the singly priority linked list 
      temp->next = *head;
      (*head) = temp;
   } else {
      while (start->next != NULL &&
      start->next->priority < p) {
         start = start->next;
      }
      // Either at the ends of the list
      // or at required position
      temp->next = start->next;
      start->next = temp;
   }
}
// Function to check the queue is empty
int isEmpty(Node** head) {
   return (*head) == NULL;
}
// main function
int main() {
   Node* pq = newNode(7, 1);
   push(&pq, 1, 2);
   push(&pq, 3, 3);  //calling thre function 
   push(&pq, 2, 0);   //callintg the function 
   while (!isEmpty(&pq)) {
      printf("%d ", peek(&pq));
      pop(&pq);
   }
   return 0; //returning program to 0
}