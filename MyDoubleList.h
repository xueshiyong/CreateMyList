//
// Created by 24195 on 2023/4/18.
//

#ifndef CREATEMYLIST_MYDOUBLELIST_H
#define CREATEMYLIST_MYDOUBLELIST_H

struct DoubleNode{
    int data;
    DoubleNode *front;
    DoubleNode *next;
};

class MyDoubleList {
public:
    DoubleNode *CreateList(int n);
    void PrintList(DoubleNode *head, bool direction=false);
    DoubleNode* FindList(DoubleNode *head, int pos, bool direction);
    int size(DoubleNode *head);
    DoubleNode* DeleteList(DoubleNode *head, int pos, bool direction);
    DoubleNode* AddList(DoubleNode *head, int pos, DoubleNode *node, bool direction);


};


#endif //CREATEMYLIST_MYDOUBLELIST_H
