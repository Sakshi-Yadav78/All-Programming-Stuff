#include<iostream>
using namespace std;
class birthday{
    public:
    int day,year,month;
    void get()
    {
        cout<<"Enter the Birth date , Day,Month,Year respectivaly\n";
        cin>>day>>month>>year;

    }
    void display()
    {
        cout<<"Birtdate Entering by you\n"
        <<day
        <<"/"
        <<month
        <<"/"
        <<year
        <<"\n";

    }
};
int main()
{ birthday a,*b[2];
    *b=&a;
    for (int i = 0; i < 2; i++)
    {
        b[i]->get();
    }
       for (int i = 0; i < 2; i++)
    {
        b[i]->display();
    }
}