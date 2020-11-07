/**
 *  @file overloading_operator.cpp
 *  @author Miguel Saavedra (miguel.saavedra@uao.edu.co)
 *  @brief Operator Overloading
 *  @version 0.1
 *  @date 07-30-2020
 *
 *  task: Overload operators + and << for the class Complex
 *  + should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)ç
 *  << should print a complex number in the format "a+ib"
 */

#include<iostream>

using namespace std;

class Complex
{
public:
    int a,b;
    void input(string s)
    {
        int v1=0;
        int i=0;
        while(s[i]!='+')
        {
            v1=v1*10+s[i]-'0';
            i++;
        }
        while(s[i]==' ' || s[i]=='+'||s[i]=='i')
        {
            i++;
        }
        int v2=0;
        while(i<s.length())
        {
            v2=v2*10+s[i]-'0';
            i++;
        }
        a=v1;
        b=v2;
    }
};

ostream& operator<<(ostream& os, const Complex& c) {
    return os << c.a << (c.b > 0 ? '+' : '-') << 'i' << c.b;
}

Complex operator+(const Complex& a, const Complex& b) { 
    return { a.a + b.a, a.b + b.b };
}

int main()
{
    Complex x,y;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    x.input(s1);
    y.input(s2);
    Complex z=x+y;
    cout<<z<<endl;
}

