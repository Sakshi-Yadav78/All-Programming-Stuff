#include <iostream>
using namespace std;
class sample
{
private:    
        int a, b;
public:
        sample(int x, int y)
        {
        a=x;
        b=y;
        }
        void display()
        {
        cout << " Value of A: " << a << endl;
        cout << " Value of B: " << b << endl;
        }
        void operator ++()
        {
        a++;
        b++;
        }
   
        void operator --()
        {
        a--;
        b--;
        }
};
int main()
{
sample s1(10, 20);
s1.display();
++s1;
 cout << "Values of a and b after increment " ;
s1.display();
--s1;
 cout << "Values of a and b after decrement " ;
s1.display();
return 0;
}