#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;


    Node(int data1,Node* next1=NULL){
        data=data1;
        next=next1;
    }
};

void Traversal(Node* head){
    Node*temp=head;
    while(temp){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

      if (n == 0) {
        cout << "List is empty." << endl;
        return 0;
    }

    Node* head = new Node(a[0]);
    Node* temp = head;

    for (int i = 1; i < n; i++) {
        temp->next = new Node(a[i]);
        temp = temp->next;
    }

    cout << "Linked List: ";
    Traversal(head);

    return 0;
}