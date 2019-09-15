#include <iostream>
#include <fstream>
int main()
{
    std::ofstream file;
    file.open("hello.txt");
    file.close();
}