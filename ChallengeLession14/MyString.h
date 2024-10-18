#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class MyString{

private:
    char *str;
public:
    MyString();
    MyString(const char *s);
    MyString(const MyString &c);
    ~MyString();

    MyString operator - ();
    MyString operator == (const MyString &rhs);
    MyString operator != (const MyString &rhs);
    MyString operator < (const MyString &rhs);
    MyString operator > (const MyString &rhs);
    MyString operator + (const MyString &rhs);
    MyString operator += (const MyString &rhs);
    MyString &operator * (const MyString &rhs , int n);

};

#endif // _MYSTRING_H_
