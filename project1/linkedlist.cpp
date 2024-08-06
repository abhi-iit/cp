#include <iostream>
#include<vector>
#include <math.h>
using namespace std;

class node {

    public:

    int data;
    node* next;

    node(int data){

        this->data = data;
        this->next = NULL;
    }

};


     void  insertathead(node* & head, int data){

        node * temp = new node(data);
        temp->next = head;
        head = temp;

     }

    
      void  insertattail(node* & tail, int data){

         node * temp = new node(data);
        
         tail->next = temp;
         tail = temp;

    }

      void  insertatpoint(node* & head, node* &tail, int position, int data){

        if(position == 1){

            insertathead(head, data);

        }


        else {

         node * pos = head;
         int cnt = 1;
        
         while(cnt < position-1 ){

           pos = pos->next;
           cnt++;

        }


        if(pos->next == NULL){

         insertattail(tail , data);

       }

         node * temp = new node(data);
         temp->next = pos->next;
         pos->next = temp;

        }

    }

    void print(node* & head){

         node * temp = head;

         while(temp != NULL){

            cout<<temp->data <<" ";
            temp = temp->next;

        }

        
    }

int main(){


node * temp = new node(10);

// cout<<temp->data<<endl<<temp->next;

node* head = temp;
node* tail = temp;

insertathead(head, 15);
insertathead(head, 13);



insertattail(tail, 4);
insertattail(tail, 2);

insertatpoint(head, tail, 1, 5);


print(head);

cout<<endl;

cout<<"the head is - "<< head->data<<endl;
cout<<"the tail is - "<< tail->data<<endl;


}