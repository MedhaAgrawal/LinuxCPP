#include <iostream>
#include "include/list.h"
#include "include/database.h"
using namespace std;

/* Extra arguments in Debug mode
  argv[0]: C:\Users\ADMIN\OneDrive\Desktop\LinuxC++/LinuxC++.exe
  argv[1]: Medha
  argv[2]: 2>CON //Extra
  argv[3]: 1>CON //Extra
  argv[4]: <CON //Extra
*/

int main(int argc, char* argv[]){
     string name;

    if(argc > 1){
        name = argv[1];
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

    Database db;
    db.writeFile();
    db.readFile();

    return 0;
}