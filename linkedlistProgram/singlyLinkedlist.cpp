#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;

};
struct node* head=NULL;
struct node*createnode(int value){
    struct node* newnode= (struct node*) malloc(sizeof(struct node));
    if(newnode==NULL){
       printf("memory allocation failed");
       exit(1);

    }
    newnode->data=value;
    newnode->next=NULL;
    return newnode;
}
void insertAtBeggi(int value){
    struct node *newnode =createnode(value);
    newnode->next=head;
    head=newnode;
    
}
void insertatend(int value){
 struct node *newnode =createnode(value);
 if(head==  NULL){
    head= newnode;
    return;
 }
 struct node* temp=head;
 while(temp->next!=NULL){
    temp=temp->next;
 }
 temp->next=newnode;
}
void display(struct node* head)
{struct node* temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }

}
int main(){
insertAtBeggi(3);
insertAtBeggi(4);
insertAtBeggi(6);
insertatend(8);
display(head);
    return 0;
}

