#include<stdlib.h>
#include<stdio.h>

struct node{
  int info;
  struct node *link;    
};

void display(){
  struct node *ptr, *first;
  ptr = first;
  while(ptr != NULL){
    printf("%d",ptr->info);
    ptr = ptr->link;
  }
}

void insert_beg(){
  struct node *ptr, *first;
  ptr = (struct node *)malloc(sizeof(struct node));
  scanf("%d",&ptr->info);
  ptr->link = first;
  first = ptr;
}

void insert_end(){
  struct node *ptr, *cpt, *first;
  cpt = first;
  ptr = (struct node *)malloc(sizeof(struct node));
  scanf("%d",&ptr->info);
  while(cpt->link != NULL){
    cpt = cpt->link;
    cpt->link = ptr;
    ptr->link = NULL;
  }
}

void insert_specific(){
  struct node *ptr, *cpt, *first;
  cpt = first;
  ptr = (struct node *)malloc(sizeof(struct node));
  int data;
  scanf("%d",&data);
  while(cpt->link->info != data){
    cpt = cpt->link;
    ptr->link = cpt->link;
    cpt->link = ptr;
  }
}

void delete_node(){
  struct node *cpt, *ptr, *first;
  ptr = first;
  while(ptr->link != NULL){
    ptr = ptr->link;
    cpt = ptr;
  }
  free(ptr);
  cpt->link = NULL;  
}

int main(){
  struct node *first = NULL;
  insert_beg();
  insert_end();
  insert_end();
  insert_end();
  insert_specific();
  delete_node();
  display();
 return 0;
}
