#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1, Node* next1 = nullptr) {
        data = data1;
        next = next1;
    }
};

// Function to convert array to linked list
Node* Array2LL(vector<int>& a) {
    int n = a.size();
    if (n == 0) return nullptr;

    Node* head = new Node(a[0]);
    Node* temp = head;

    for (int i = 1; i < n; i++) {
        Node* temp1 = new Node(a[i]);
        temp->next = temp1;
        temp = temp1;
    }

    return head;
}

// Function to find length linked list
int length(Node* head) {
    Node* temp=head;
    int cnt=0;
    while (temp) {
        cnt++;
        temp=temp->next;
}
return cnt;
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

    Node* head = Array2LL(a);

    int l=length(head);
    cout << "Length of Linked List: "<<l;

    return 0;
}
