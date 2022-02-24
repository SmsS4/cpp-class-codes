#include<bits/stdc++.h>
using namespace std;

struct Node {
    int value;
    Node* next = NULL;

    void print() {
        cout << this << '\n'; /// pointer to caller
        Node* cur = this;
        while (cur != NULL) {
            cout << cur->value << ' ';
            cur = cur->next;
        }
        cout << '\n';
    }

    void push(int x) {
        Node* cur = this;
        while ((cur->next) != NULL) {
            cur = cur->next;
        }
        Node *node = (Node*) malloc(sizeof(Node));
        node->value = x;
        cur->next = node;
    }

    Node* find(int x) {
        Node* cur = this;
        while (cur != NULL && cur->value != x) {
            cur = cur->next;
        }
        return cur;
    }

    Node* recFind(int x) {
        if (this->value == x) return this;
        if (this->next == NULL) return NULL;
        return (*(this->next)).recFind(x);
    }

    void popNext() {
        if (this->next == NULL) {
            return ;
        }
        if (this->next->next == NULL) {
            this->next = NULL;
        }else{
            this->next = this->next->next;
        }
    }
};



int main() {
    Node head;
    head.value = 1;
    head.push(2);
    head.push(3);
    head.push(4);
    head.print();
    cout << (head.find(2)->value) << '\n';
    cout << (head.recFind(2)->value) << '\n';
    head.find(2)->popNext();
    head.print();
}
