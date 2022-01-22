#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    std::ofstream txt_file;
    txt_file.open("Introduction.md", std::ios::out);
    txt_file << "# Welcome to Vidyalankar Polytechnic\n\n";
    txt_file << "## Have a look at the courses we provide\n\n";
    txt_file << "1. Information Technology\n";
    txt_file << "2. Computer Engineering\n";
    txt_file << "3. Electronics and Telecommunication Engineering\n";
    return 0;
}