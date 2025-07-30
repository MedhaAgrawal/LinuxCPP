#include <iostream>
#include "include/list.h"
using namespace std;

List::List(string name, int age): m_strName(name), m_nAge(age){}

void List::printList(){
    cout<<"Username: "<<m_strName<<endl;
    cout<<"Age: "<<m_nAge<<endl;
}