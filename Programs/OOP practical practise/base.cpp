# include <iostream>
using namespace std;
class base
{  public:void display ()
{          cout << "In base class:"<< endl;
}
};
class derived1: public base
{  public:void display ()
{          cout << "In derived1 class:" << endl;
}
};
int main()
{          base *ptr;         // pointer to base class
            base b1;           // create object of base class
            ptr = &b1;        // ptr points to base class object b1
            b1.display () ;  // invokes base  class display()
            derived1 d1;      // create object of derived class
            ptr = & d1;       // ptr now points to derived class object d1 . will work
            ptr -> display ();           // Invokes base class display();
}