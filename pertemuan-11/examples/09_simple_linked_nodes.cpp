#include <iostream>
using namespace std;
struct Node{int data; Node* next;};
int main(){ Node *a=new Node{10,nullptr}; Node *b=new Node{20,nullptr}; Node *c=new Node{30,nullptr}; a->next=b; b->next=c; for(Node* p=a;p;p=p->next) cout<<p->data<<(p->next?" -> ":"\n"); delete c; delete b; delete a; }