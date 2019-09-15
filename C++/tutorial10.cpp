#include <iostream>
#include <fstream>
#include <vector>
int main()
{
    std::ofstream file;
    //file.open("hello.txt");
    file.open("hello.txt",std::ios::app);
    if(file.is_open())
    {
    std::cout<<"hey"<<std::endl;
    }
    std::vector<std::string> names;
    names.push_back("Caleb");
    names.push_back("Amy");
    names.push_back("Susan");

    for(std::string name : names)
    {
        file<<name<<std::endl;
    }

    file.close();
}