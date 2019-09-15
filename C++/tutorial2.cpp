#include <iostream>
#include <climits>
using std::cout;

int main(){
    
    short a;
    int b;
    long c;
    long long d;
    unsigned short aa;
    unsigned int bb;
    unsigned long cc;
    unsigned long long dd;

    cout << sizeof(long long) 
                /*SHRT_MAX*/
                /*SHRT_MIN*/
                 <<std::endl;

char x= 'A';
cout << (int) x << std::endl;
}