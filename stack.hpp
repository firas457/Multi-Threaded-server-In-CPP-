
#include <iostream>
#include "imple.hpp"

using namespace std;


class stack{

public:

 struct Node{

     std::string data;

     struct Node * next;
    
 };

struct Node * top =(struct Node *)my_malloc(sizeof(Node));

 void push(std::string data){
     
     if(top==NULL){
        struct Node * new_node =(struct Node *) my_malloc(sizeof(Node));
         new_node->data=data;
         new_node->next=NULL;
         top=new_node;

     }

     else{

         struct Node * new_node =(struct Node *) my_malloc(sizeof(Node));
         new_node->data=data;
         new_node->next=top;
         top=new_node;   

     }

 }


std::string pop(){

if(top==NULL){
    return "stack is empty";
}
else{
     struct Node * temp_node =(struct Node *) my_malloc(sizeof(Node));
     temp_node=top;
     std::string st=temp_node->data;
     top=top->next;
     

    return st;
}

}



std::string peek(){

if(top==NULL){
    return "stack is empty";
}
else{   
     std::string st=top->data;
     return st;
}

}

};
