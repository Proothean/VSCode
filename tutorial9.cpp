#include <iostream>
#include <vector>
#include <array>

int main()
{
    int data[] = {1,2,3,4,5,6};
    
    for(int n : data)// range based loop
    {
        std::cout << n << "\t";
    }

 /*
    for(int i = 0; i<6;i++)
    {
        std::cout << data[i] << "\t";
    }
    std::cout << "\n";
*/
}