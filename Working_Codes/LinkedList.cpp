#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};

node* createNode(int val){
    node* temp = new node();
    temp->data = val;
    return temp;
}

node* inputLL(int n){
    node* head = new node();
    node* tail = new node();
    for (int i = 0; i < n; i++){
        int val;
        cin >> val;
        if (i == 0){
            node* temp = createNode(val);
            head = temp;
            tail = temp;
        }
        else{
            node* temp = createNode(val);
            tail->next = temp;
            tail = temp;
        }
    }
    return head;
}

void printLL(node* tobe){
    if (tobe == NULL){
        cout << "Empty node.";
        return;
    }
    node* temp = tobe;
    while (temp != NULL){
        cout << temp->data << "-> ";
        temp = temp->next;
    }
    cout << "NULL";
}

int main(){
    int a;
    cin >> a;
    node* head=inputLL(a);
    printLL(head);
    return 0;
}
