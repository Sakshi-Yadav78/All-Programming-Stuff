#include <iostream >
#include <fstream>
int main()
{
    ofstream fout;
    fout.open("abc.txt",ios::out);
    cout<<"writing into the file:\n";
    fout<<"wecome to vp";
    fout<<"computer engineering\n";
    fout<<"information engineering\n";
    fout<<"Electronic engineering\n";
    fout.close();
    return 0;
}
