//
// Created by 24195 on 2023/4/17.
//

#ifndef CREATEMYLIST_MYLIST_H
#define CREATEMYLIST_MYLIST_H
struct Node{
    int data;
    Node *next;
};

class MyList {

public:
    MyList(){}
    Node *CreateList(int n);
    Node *CreateList();
    Node *DeleteList(Node *head, int pos);
    void AddList(Node *head, Node *newnode, int pos);
    void PrintList(Node *head);
    Node *ChangeList(Node *head, Node *node, int pos);
    int FindList(Node *head, int pos);
    Node *ReverseList(Node *head);
    Node *ChangeNeighbor(Node *head);

    int size(Node *head);

};


#endif //CREATEMYLIST_MYLIST_H
