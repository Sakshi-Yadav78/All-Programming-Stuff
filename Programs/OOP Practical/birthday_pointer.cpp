#include <iostream>
using namespace std;
class birthday
{
private: 
    int d, m, y;
public:    
    void accept()
    {
    cout<<"Enter day:";
    cin>>d;
    cout<<"Enter month:";
    cin>>m;
    cout<<"Enter year:";
    cin>>y;
    }

    void display()
    {
    cout<<d<<"/"<<m<<"/"<<y<<endl;   
    }
};
 
int main()
{
birthday b[5];
birthday *ptr;
for(int i=0;i<5;i++)
{
ptr=&b[i];
ptr->accept();
}
for(int i=0;i<5;i++)
{
ptr=&b[i];
ptr->display();
}
return 0;
}