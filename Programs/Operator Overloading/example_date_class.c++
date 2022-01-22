#include <iostream> 
#include <conio.h>   
using namespace std;
 
class Date 
{ 
 friend ostream & operator<<(ostream &, const Date &); 
public: 
 Date(int=1, int=1, int=1900); 
 void set(int, int, int); 
 const Date & operator++(); 
 const Date operator++(int); 
 const Date & operator +=(int); 
private: 
 int day; 
 int month; 
 int year; 
 char dd;
 static const int days[13]; 
 bool leap(); 
 const int checkDay1(); 
 void increment(); 
}; 
 
const int Date::days[] = 
{0,31,28,31,30,31,30,31,31,30,31,30,31}; 
 
Date::Date(int d, int m, int y) 
{ set(d, m, y); } 
 
void Date::set(int d, int m, int y) 
{ 
  day = d; 
 month = m; 
 year = y; 
 
 if(checkDay1()<0 || month<=0 || month>12) 
 { 
 cout << "Wrong Date format! Date is set to be 1/1/1900.\n"; 
 day = 1; 
 month = 1; 
 year = 1900; 
 } 
} 
 
const Date & Date::operator ++() 
{ 
 increment(); 
 return *this; 
} 
 
const Date Date::operator ++(int) 
{ 
 Date temp = *this; // default memberwise copy 
 increment(); 
 return temp; 
} 
 
const Date & Date::operator +=(int dd1) 
{ 
 for(int i=1; i<=dd; i++) 
 increment(); 
 return *this; 
} 
 
bool Date::leap() 
{ 
 if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 
0)) 
 return true; 
 else 
 return false; 
} 
 
const int Date::checkDay1() 
{ 
 if(month == 2 && leap()) 
 return 29 - day; 
 else 
 return days[month] - day; 
} 
 
void Date::increment() 
{ 
 if( checkDay1()>0 ) 
 day ++; 
 else 
 { 
 day = 1; 
 if (month < 12) 
 month ++; 
 else 
 { 
 month = 1; 
 year ++; 
 } 
 } 
} 
 
ostream & operator<<(ostream & output, const Date & obj) 
{ 
 output << "Date: " << obj.day << "/" << obj.month << "/" 
<< obj.year << endl; 
 return output; 
} 
 
int main() 
{ 
 Date d1(31,12,1999), d2(31,1,1999), d3(23,2,2000), 
 d4(23,2,4444), d5(23,2,1999); 
 d4.set(23,2,1212); 
 ++d1; 
 cout << d1; 
 d2++; 
 cout << d2; 
 d3 += 6; 
 cout << d3; 
 d4 += 7; 
 cout << d4; 
 d5 += 6; 
 cout << d5 << "Press any key when ready..."; 
 getch(); 
} 