#include <iostream>
using namespace std;

// list.h
#ifndef LIST_H
#define LIST_H

class List{
    string m_strName;
public:
    int m_nAge;

    List(string name, int age);
    void printList();
};

#endif //LIST_H