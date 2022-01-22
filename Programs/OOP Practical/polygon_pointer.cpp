#include <iostream>
using namespace std;
class polygon
{
protected:
    int h, w;
public:
    void accept()
    {
    cout<<"Enter height and width:";
    cin>>h>>w;
    }
    void display()
    {
    cout<<"height="<<h<<endl;
    cout<<"width="<<w<<endl;
    }
};
class rectangle : public polygon
{
void display()
{
polygon :: accept();
int rec_area=h*w;
cout<<"area of rectangle="<<rec_area<<endl;
}
};
 
class triangle : public polygon
{
public :
    void display()
    {
    polygon :: accept();

int tri_area=0.5*h*w;
cout<<"area of triangle="<<tri_area<<endl;
 
    }
 
};
 
int main()
{
polygon p1;
polygon *ptr;
ptr->&p1;
ptr->accept();
ptr-> display();
 
rectangle r1;
ptr=&r1;
ptr->display();
 
triangle t1;
ptr=&r1;
ptr-> display();
return 0;
}