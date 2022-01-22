#include <iostream>
using namespace std;

class box
{
private: 
    int h, w, b;
public:    
    void accept()
    {
    cout<<"Enter height:";
    cin>>h;
    cout<<"Enter width:";
    cin>>w;
    cout<<"Enter breadth:";
    cin>>b;
    }

    void display()
    {
    int area;
    int volume;

    area=((2*h*w)+(2*h*b)+(2*b*w));
    cout<<"Area of box="<<area<<endl;

    //volume=h*w*b;
    cout<<"Volume of box="<<volume<<endl;

    }
};
 
int main()
{
box b1;
box *ptr;
ptr=&b1;
ptr->accept();
ptr->display();
return 0;
}