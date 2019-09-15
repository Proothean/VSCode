#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main()
{
    std::ifstream file ("tacos.txt");
    std::vector<std::string> names;
    
    std::string input;
    std::string line;
    getline(file, line);
    std::cout<<line<<"\n";
    //char temp = file.get();
   /*
    while(file >>input )  //return file
    {
        names.push_back(input);
    }

    for (std::string name : names)
    {
        std::cout <<name<<std::endl;
    }

    if(file.is_open())
    {

    }
*/

return 0;
}