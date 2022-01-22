#include <iostream>
using namespace std;
class Distance
{
        private:
                int feet;
                float inch;
        public:
        Distance();
        Distance(int a,float b);
        void setDistance();
        int getFeet();
        float getInch();
        void distanceSum(Distance d);
};
int main()
{
        Distance D1,D2;
        D1.setDistance();
        D2.setDistance();
        D1.distanceSum(D2);
        return 0;
}
/*Function Definitions*/
Distance::Distance()
{
        inch=feet=0;
}
Distance::Distance(int a,float b)
{
        feet=a;
        inch=b; 
}
void Distance::setDistance()
{
        cout<<"Enter distance in feet:";
        cin>>feet;
        cout<<endl<<"Enter inches:";
        cin>>inch;
}
int Distance::getFeet()
{
        return feet;
}
float Distance::getInch()
{
        return inch;
}
void Distance::distanceSum(Distance d)
{
        cout<<"feet="<<d.feet+feet<<endl;
        cout<<"inches="<<d.inch+inch<<endl;
}
