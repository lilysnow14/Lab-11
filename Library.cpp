//
// Created by 16033 on 11/28/2023.
//
//include headers and libraries

#include <iostream>
#include <string>
#include "Library.h"
using namespace std;
//implement class functions

Library::Library()
{
    string books[10];
    for( int i = 0; i < 10; i++)
        books[i] = "";
}

bool Library::addBook(string bookName)
{
    int i = 0;
    while (this-> books[i]!="" && i<10)
        i++;
    if( i ==  10){
        cout<<"Cannot add the book."<<endl;
        return 0;
    }
    else if(i < 10){
        this->    books[i] = bookName;
        return 1;
    }
}

bool Library::removeBook(string bookName)
{
    int i = 0;
    while(this->books[i]!= bookName && i<10)
        i++;
    if( i  == 10){
        cout<<"Cannot remove the book."<<endl;
        return 0;
    }
    else if(i < 10){
        this->    books[i] = "";
        return 1;
    }
}

void Library::print()
{
    cout<<"Library contents: "<<endl;
    for(int i = 0; i < 10; i++)
    {
        if(this->books[i]!= "")
            cout<<this->books[i]<<endl;
    }
}