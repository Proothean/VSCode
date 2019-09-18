#include <iostream>
#include <Neuron.hpp>
using namespace std;

//Constructor

Neuron::Neuron(double val) 
{
    this->val = val;
    activate();
    derive();
}


int main (int argc, char **argv)
{
    //Input
    Neuron *n1 = new Neuron(0.9);
    Neuron *n2 = new Neuron(0.5);
    Neuron *n2 = new Neuron(0.1);

    //Output
    Neuron *outputNeuron = new Neuron(0.0);
    // 90% confident that [0.9 . 0.5, 0.1 ] is a dog
    return 0;
}