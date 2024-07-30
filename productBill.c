#include<stdio.h>
#include<stdlib.h>
//structure of a node
struct node{
   int data;
   struct node *next;
}*head,*temp;
//function for inserting nodes into a list
void insert(int val){
   struct node* newnode = (struct node*)malloc(sizeof(struct node));
   newnode->data = val;
   newnode->next = NULL;
   if(head == NULL){
      head = newnode;
      temp = head;
   } else {
      temp->next=newnode;
      temp=temp->next;
   }
}
//function for displaying a list
void display(){
   if(head==NULL)
      printf("no node ");
   else{
      temp=head;
      while(temp!=NULL){
         printf("%d ",temp->data);
         temp=temp->next;
      }
   }
}
//function for finding product
void product_nodes(){
   int product=1;
   temp=head;
   while(temp!=NULL){
      product=product * (temp->data);
      temp=temp->next;
   }
   printf("product of nodes is : %d" ,product);
}
int main(){
   //creating list
   struct node* head = NULL;
   //inserting elements into a list
   insert(1);
   insert(2);
   insert(3);
   insert(4);
   insert(5);
   insert(6);
   //displaying the list
   printf("linked list is : ");
   display();
   //calling function for finding prodouct
   void Product_nodes();
   return 0;
}