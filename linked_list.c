 
// void count_of_notes(struct node *head)
// {
//
// int count=0;
// if (head==NULL);
// printf("linked list is empty");
// struct node *ptr=NULL;
// ptr=head;
// while(ptr!=NULL)
// {
//     count++;
//     ptr=ptr->link;
// }
// printf("%d",count);
// }



#include<stdio.h>
 #include<stdlib.h>
 struct node{
     int data;
     struct node *link;
 };
 void count_of_nodes(struct node *head){

  if(head==NULL)
  {
    
  printf("linked list is empty\n");
}
  struct node *ptr=NULL;
  ptr=head;
    int count=0;
  while(ptr!=NULL)
  {
     
     ptr=ptr->link;
     count++;
     printf(" %d\n",ptr->data);
     
  }
  printf(" node count=%d\n",count);
 }
 int main()
 {
     struct node * head;
     struct node * ptr;
     struct node * ptr1;
      struct node * ptr2;
       struct node * ptr3;
       struct node * ptr4;
       
       
        ptr4=(struct node*)malloc(sizeof(struct node));
  ptr4->data =200;
  ptr4->link=NULL;
  ptr4->link=ptr4;
   printf("%d\n",ptr4->data);
//     head->link->link=ptr;
   
   
     head=(struct node*)malloc(sizeof(struct node));
 head->data=45;
  head->link=NULL;
  ptr=(struct node*)malloc(sizeof(struct node));
  ptr->data=36;
  ptr->link=NULL;
  head->link=ptr;
  ptr1=(struct node*)malloc(sizeof(struct node));
  ptr1->data =66;
  ptr1->link=NULL;
  head->link->link=ptr1;
  ptr2=(struct node*)malloc(sizeof(struct node));
  ptr2->data =26;
  ptr2->link=NULL;
  head->link->link->link=ptr2;
  ptr3=(struct node*)malloc(sizeof(struct node));
  ptr3->data =10;
  ptr3->link=NULL;
  head->link->link->link->link=ptr3;
// printf("%d\n",head->data);
// printf("%d\n",ptr->data);
// printf("%d\n",ptr1->data);
// printf("%d\n",ptr2->data);
// printf("%d\n",ptr3->data);
// count_of_notes(head);

 

    count_of_nodes(head);
     return 0;
 }






//  #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node *link;
// };
// int main(){
//     struct node *head,*current;
//   head=(struct node *)malloc(sizeof(struct node));
//   head->data=23;
//   head->link=NULL;
//   current=(struct node *)malloc(sizeof(struct node));
// current->data=44;
// current->link=NULL;
// head->link=current;
// current=malloc(sizeof(struct node));
// current->data=10;
// current->link=NULL;
// head->link->link=current;
//
//     return 0;
// }








/*
#include<stdio.h>
#include<stdlib.h>
struct node{
	
	int data;
	struct node *next;
};

struct node *fun(int data){

struct node *head=(struct node*)malloc (sizeof(struct node));	
head->data=data;
head->next=NULL;
printf("%d\n",head->data);
}
int main(){
fun(23);
fun(33);
fun(39);
fun(3);
return 0;
	
}*/












