#include <bits/stdc++.h>

using namespace std;

class node {
public:
    int data;
    node* next;
};

void printList(node* n){
    while(n != NULL){
        cout<<n -> data <<" ";
        n = n -> next;
    }
}



int main() {

    node* head = NULL;
    node* second = NULL;
    node* third = NULL;

    head = new node();
    second = new node();
    third = new node();

    head -> data = 3;
    head -> next = second;

    second -> data = 7;
    second -> next = third;

    third -> data = 9;
    third -> next = NULL;

    printList(head);


}
