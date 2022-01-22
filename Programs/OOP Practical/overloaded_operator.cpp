#include <iostream>
using namespace std;
class Complex{
    public:
    float a, b;
    Complex(): a(0), b(0) {}
    Complex(float x, float y): a(x), b(y){}
    void display(){
        cout<<this->a<<" + "<<this->b<<"i"<<endl;
    }
    friend Complex operator-(const Complex&, const Complex&);
};
Complex operator-(const Complex& com, const Complex& comp){
        float x = com.a + comp.a;
        float y = com.b + comp.b;
        return Complex(x, y);
    }
int main(){
    Complex a(3, 5), b(4, 7);
    cout<<"A = "; a.display();
    cout<<"B = "; b.display();
    cout<<"A + B = "; (a - b).display();
    cout<<"B + A = "; (b - a).display();
    return 0;
}