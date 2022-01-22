#include <iostream>
using namespace std;

int main(int argc, const char *argv[])
{
	int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	char text[30] = "Hello,World!";
	string str = "Hi there";

	str += "How are you?";

	cout << str << endl;

	return 0;
}