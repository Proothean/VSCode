# include <iostream>
# include <cmath>
using std::cout;
using std::cin;
double  power (double base, int exponent){
    
    double result = 1;
    for(int i = 0; i < exponent; i++){
        result = result * base;
    }
    return result ;
    //return 0.0;
}
void print_pow(double base, int exponent){

    
    double myPower = power(base, exponent);
    cout <<base<<" raised to the "<< exponent <<" power is "<< myPower <<std::endl;
    //return 0;
}

int main()
{      
    double base;
    int  exponent;
    cout << "what is the base?: ";
    cin >> base;
    cout <<"what is the exponent?: ";
    cin >> exponent;
    /*
    cout << pow(base,exponent)<< "\n";
    int powerv = pow(base,exponent);
    cout << power<<"\n";
    std::cout << "Hello World";
    */
    print_pow(base,exponent);
}