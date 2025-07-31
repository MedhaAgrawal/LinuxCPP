#include <iostream>
#include <fstream>
#include "include/database.h"
using namespace std;

Database::Database(){

}

Database::~Database(){

}

void Database::writeFile(){
    fstream db("db/list.txt", ios::out);
    if(db.is_open()){
        db << "New List";
    }

    db.close();
}

void Database::readFile(){
    fstream db("db/list.txt", ios::in);
    string line;
    if(db.is_open()){
        while(getline(db,line,'\n')){
            cout<<line<<endl;
        }
    }

    db.close();
}