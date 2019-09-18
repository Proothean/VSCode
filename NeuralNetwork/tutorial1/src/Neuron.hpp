#ifndef _NEURON_HPP_
#define _NEURON_HPP_

#include <iostream>
using namespace std;

class Neuron
{
    public:
        Neuron(double val);
        // Fast Sigmoid Function
        //f(x) = x / (1+|x|) 
        void activate();


        // Derivative for fast sigmoid function
        //f'(x) = f(x) * (1 - f(x))
        void derive();

        double  getVal() { return this->val; }

        double getActivatedVal() {return this->activatedVal; }
        double getDerivedVal() { return this->derivedVal;}


    private:
        //1.5
        double val;
        //0-1
        double activatedVal;

        double derivedVal;
};

//Constructor

Neuron::Neuron(double val) 
{
    this->val = val;
    activate();
    derive();
}

void Neuron::activate() 
{
    this->activatedVal = this->val / (1+ abs(this->val));
}

void Neuron::derive()
{
    this->derivedVal = this->activatedVal * (1 - this->activatedVal);
}

#endif