#include <iostream>
#include "../inc/Neuron.hpp"
#include <cmath>
#include <cstdlib>
using namespace std;

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

void Neuron:: derive()
{
    this->derivedVal = this->activatedVal * (1 - this->activatedVal);
}
