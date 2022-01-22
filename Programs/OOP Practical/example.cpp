//Write a C++ program to interchange the values of 2 integers to float and to character  constant using function overloading 
#include<iostream>
using namespace std;
void swap(int, int);
void swap(float, float);
void swap(char, char);
int main()
{
            int a,b;
            char i,e;
            float c,d;
            cout<<"\n Enter two numbers:";
            cin>>a>>b;
            cout<<"a="<<a<<endl;
            cout<<"b="<<b<<endl;
            swap(a,b);
            cout<<"\n Enter two numbers:";
            cin>>c>>d;
            cout<<"c="<<c<<endl;
            cout<<"d="<<d<<endl;
            swap(c,d);
            cout<<"\n Enter two characters:";
            cin>>i>>e;
            cout<<"i="<<i<<endl;
            cout<<"e="<<e<<endl;
            swap(i,e);    
}
void swap(int a, int b)
{
            int c;
            c=a;
            a=b;
            b=c;
            cout<<"a="<<a<<endl;
            cout<<"b="<<b<<endl;
}

void swap(float p, float q)
{
            float temp;
            temp=p;
            p=q;
            q=temp;
            cout<<"c="<<p<<endl;
            cout<<"d="<<q<<endl;
}

void swap(char x, char p)
{
            char c;
            c=x;
            x=p;
            p=c;
            cout<<"i="<<x<<endl;
            cout<<"e="<<p<<endl;
}