#include <iostream>

using namespace std;

class Area

{

 public:

int area(int l, int b)

{

return (l*b);

}

};
class Perimeter

{

public:

int perimeter(int l, int b)

{

return(2*l + 2*b);

}

};class Rectangle : public Area, public Perimeter

{

private:

int length, breadth;

public:

void get_data()

{

cout<<"Enter length and breadth of Rectangle\n";

cin>>length>>breadth;

}

void display()

{

cout<<"Rectangle length: "<<length<<endl;

cout<<"Rectangle breadth: "<<breadth<<endl;

cout<<"Rectangle area: "<<area(length, breadth)<<endl;

cout<<"Rectangle perimeter: "<<perimeter(length, breadth)<<endl;

}

};

 int main()

{

Rectangle R;

R.get_data();

R.display();

return 0;

}