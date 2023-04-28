//
// Created by 24195 on 2023/4/18.
//

#include "MyDoubleList.h"
#include <iostream>

DoubleNode * MyDoubleList::CreateList(int n){
    DoubleNode *head, *temp, *node;
    head = temp = nullptr;

    for (int i=0; i<n; i++){
        node = new DoubleNode;
        node->data = i + 1;
        if (head == nullptr){
            head = node;
            head->front = nullptr;
        }
        else{
            temp->next = node;
            node->front = temp;
        }
        temp = node;
        temp->next = nullptr;
    }
    return head;
}

int MyDoubleList::size(DoubleNode *head){
    DoubleNode *cur;
    cur = head;
    int i = 0;
    while (cur != nullptr){
        i++;
        cur = cur->next;
    }
    return i;
}

DoubleNode* MyDoubleList::FindList(DoubleNode *head, int pos, bool direction=false){
    DoubleNode *cur;
    cur = head;
    if (!direction){
        int i = 0;
        while (i < pos and pos < this->size(head)){
            cur = cur->next;
            i++;
        }
        return cur;
    }
    else{
        int i = 0;
        while (i < this->size(head) - pos - 1){
            cur = cur->next;
            i++;
        }
        return cur;
    }

}

DoubleNode* MyDoubleList::DeleteList(DoubleNode *head, int pos, bool direction) {
    DoubleNode *cur, *prev;
    cur = head;
    int i = 0;
    if (direction){
        pos = this->size(head) - pos - 1;
    }
    while (i < pos){
        cur = cur->next;
        i++;
        if (pos - 1 == i){
            prev = cur;
        }
    }

    prev->next = cur->next;
    cur->next->front = prev;
    delete cur;
    return head;
}

DoubleNode* MyDoubleList::AddList(DoubleNode *head, int pos, DoubleNode *node, bool direction){
    DoubleNode *cur, *prev;
    cur = head;
    if (direction){
        pos = this->size(head) - pos - 1;
    }

    int i = 0;
    while (i < pos){
        cur = cur->next;
        i++;
        if (i == pos - 1){
            prev = cur;
        }
    }
    prev->next = node;
    node->next = cur;
    cur->front = node;
    node->front = prev;
    return head;

}

void MyDoubleList::PrintList(DoubleNode *head, bool direction){
    DoubleNode *cur = head;
    DoubleNode *prev;

    while (cur != nullptr){
        std::cout << cur->data << " ";
        prev = cur;
        cur = cur->next;
    }
    std::cout << std::endl;

    if (direction){
        while (prev != nullptr){
            std::cout << prev->data << " ";
            prev = prev->front;
        }
        std::cout << std::endl;
    }

}
