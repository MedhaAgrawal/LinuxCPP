#include <iostream>
#include "include/list.h"
using namespace std;

int main(int arg_count, char* args[]){
     string name;

    if(arg_count > 1){
        name = args[1];
    }
    else{
        cout<<"No argument provided to main()"<<endl;
        string nm;
        cout<<"Enter Username: "; 
        cin>>nm;
        name = nm;
    }

    List objList(name, 25);
    objList.printList();

    return 0;
}