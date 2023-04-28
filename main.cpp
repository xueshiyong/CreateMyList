//
// Created by 24195 on 2023/4/17.
//
#include <iostream>
#include <vector>
#include "MyList.h"
#include "MyDoubleList.h"
using namespace std;

int main(){
    MyList *mylist = new MyList();
    Node *head = mylist->CreateList(11);
    mylist->PrintList(head);
    head = mylist->ReverseList(head);
    mylist->PrintList(head);
    head = mylist->ChangeNeighbor(head);
    mylist->PrintList(head);

    cout << "hello world!" << endl;

}