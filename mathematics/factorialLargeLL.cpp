#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *prev;
    Node(int n){
        data = n;
        prev = NULL;
    }
};

void Multiply(Node *tail, int x){
    int carry = 0;
    Node *temp= tail, *prevNode = tail;
    while(temp!=NULL){
        int data = temp->data * x + carry;
        temp->data = data%10;
        carry = data/10;
        prevNode = temp;
        temp = temp->prev;
    }
    while(carry!=0){
        prevNode->prev = new Node( (int)(carry%10));
        carry = carry/10;
        prevNode = prevNode->prev;
    }
}

void print(Node *tail){
    int count=0;
   while(tail != NULL){
       count++;
       tail = tail->prev;
   }
   cout<<count;
}

int main(void){
    int n = 6;
    Node tail(1);
    for(int x=2; x<=n; x++){
        Multiply(&tail, x);
    }
    int count = 0;
    print(&tail);
    return 0;
}