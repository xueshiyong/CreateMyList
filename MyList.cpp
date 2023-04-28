//
// Created by 24195 on 2023/4/17.
//

#include "MyList.h"
#include <iostream>

int MyList::size(Node *head){
    Node *cur = head;
    int i = 0;
    while (cur != nullptr){
        cur = cur->next;
        i++;
    }
    return i;
}

Node * MyList::CreateList(int n){
    Node *head, *temp, *node;
    head = temp = nullptr;

    for (int i=4; i<n; i++){
        node = new Node;
        node->data = i;
        if (head == nullptr){
            head = node;
        }
        else{
            temp->next = node;
        }
        temp = node;
        temp->next = nullptr;
    }

    return head;
}

Node * MyList::CreateList(){
    Node *head, *temp, *node;
    head = temp = nullptr;
    int num;

    while(std::cin >> num){
        node = new Node;
        node->data = num;
        if (head == nullptr){
            head = node;
        }
        else{
            temp->next = node;
        }
        temp = node;
        temp->next = nullptr;
    }

    return head;
}
void MyList::PrintList(Node *head) {
    Node *cur = head;
    while (cur != nullptr){
        std::cout << cur->data << " ";
        cur = cur->next;
    }
    std::cout << std::endl;
}

Node * MyList::DeleteList(Node *head, int pos) {
    Node *prev, *cur;
    cur = head;

    int i = 0;
    while (i < pos){
        cur = cur->next;
        i++;
        if (i == pos - 1){
            prev = cur;
        }
    }
    prev->next = cur->next;
    delete cur;
    return head;
}

void MyList::AddList(Node *head, Node *newnode, int pos) {
    Node *cur, *prev;
    cur = head;

    int i = 0;
    while (i < pos){
        cur = cur->next;
        i++;
        if (i == pos - 1){
            prev = cur;
        }
    }
    prev->next = newnode;
    newnode->next = cur;
}

int MyList::FindList(Node *head, int pos){
    Node *cur = head;
    if (pos == 0){
        return head->data;
    }

    int i = 0;
    while(i < pos){
        cur = cur->next;
        i++;
    }
    return cur->data;

}

Node* MyList::ChangeList(Node *head, Node *node, int pos){
    Node *cur, *prev, *last;
    int i = 0;
    if(pos == 0){
        head->data = node->data;
    }
    while (i < pos){
        cur = cur->next;
        i++;
        if (i == pos - 1){
            prev = cur;
        }
    }
    last = cur->next;
    prev->next = last->next;
    delete cur;
    return head;
}

Node *MyList::ReverseList(Node *head) {
    Node *prev;
    Node *cur = head;
    Node *temp;

    while (cur != nullptr){
        temp = cur->next;
        cur->next = prev;
        prev = cur;
        cur = temp;
    }
    return prev;
}

Node *MyList::ChangeNeighbor(Node *head){
    Node *dummyhead = new Node;
    dummyhead->data = 0;
    dummyhead->next = head;

    Node *cur = dummyhead;
    while (cur->next != nullptr and cur->next->next != nullptr){
        Node *temp = cur->next;
        Node *temp1 = cur->next->next->next;

        cur->next = cur->next->next;
        cur->next->next = temp;
        cur->next->next->next = temp1;

        cur = cur->next->next;
    }

    return dummyhead->next;

}