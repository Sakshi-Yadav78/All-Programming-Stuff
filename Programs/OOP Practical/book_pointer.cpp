#include<iostream>
#include <conio.h>
using namespace std;
class book
{
    private:
        char b_name[30], author[30];
        float price;
    public:

        void getdata()
            {
                cout<<"Enter book name:"<<endl;
                cin>>b_name;
                cout<<"Enter author name:"<<endl;
                cin>>author;
                cout<<"Enter book price:"<<endl;
                cin>>price;
            }
        void showdata()
            {
                cout<<"Book name="<<b_name<<endl;
                cout<<"Book Author name="<<author<<endl;
                cout<<"Book price="<<price<<endl;
            }
};
int main()
{
    book b1;
    book *a;
    a=&b1;
    a->getdata();
    a->showdata();
    getch();
}