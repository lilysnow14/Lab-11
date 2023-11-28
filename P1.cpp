//include headers and libraries
#include <string>
#include <iostream>
#include "Library.h"
using namespace std;
int main(){
    Library library;
    string command;
    string q("q");
    string p("p");
    string r("r");
    string a("a");
    cin>>command;
    while(command != q){
        if(command == p)
            library.print();
        if(command == a){
            cin>>command;
            library.addBook(command);
        }
        if (command == r){
            cin>>command;
            library.removeBook(command);
        }
        cin>>command;
    }
    cout<<"Exiting"<<endl;
    //ask for commands and execute

}

class Library {