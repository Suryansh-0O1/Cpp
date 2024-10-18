#include <iostream>
#include <cstring>
#include "MyString.h"

MyString::MyString()
    :str{nullptr}{
        this->str = new char[1];
        *str = '\0';
}

MyString::MyString(const char *s)
    :str{nullptr}{
        if (s==nullptr){
            this->str = new char[1];
            *str = '\0';
        }else{
            this->str = new char[std::strlen(s)+1];
            std::strcpy(this->str,s);
        }
}

MyString::MyString(const MyString &s)
    :str{nullptr}{
        if (s.str==nullptr){
            this->str = new char[1];
            *str = '\0';
        }else{
            this->str = new char[std::strlen(s.str)+1];
            std::strcpy(this->str,s.str);
        }
}

MyString::~MyString(){}

MyString::MyString operator - (){
    
}


