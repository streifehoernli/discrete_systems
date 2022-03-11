#include "IIR_filter.h"

// constructors
IIR_filter::IIR_filter(float tau,float Ts)
{
    a0 = -tau/(tau + Ts);
    b0 = Ts/(tau + Ts);
}
IIR_filter::IIR_filter(float tau,float Ts,float K)
{


}

// Methods:

float IIR_filter::eval(float u)
{
    lastOutput = a0*lastOutput + b0*u;       // this has to be modified!!!
    return lastOutput;
}


// Deconstructor
IIR_filter::~IIR_filter() {} 