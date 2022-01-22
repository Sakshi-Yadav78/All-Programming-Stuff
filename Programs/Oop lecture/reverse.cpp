#include <iostream> 
#include <algorithm>  
using namespace std;
 
int main() {
   string str = "And still, I rise.";
   reverse(str.begin(), str.end());
   cout << str << endl;
}