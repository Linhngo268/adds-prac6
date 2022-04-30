//
//  BitFlipProb.cpp
//  
//
//  Created by Ngo Linh on 30/4/22.
//

#include "BitFlipProb.h"
#include <string>
using namespace std;
// The mutate function in this class goes through every digit in the binary string and “flips” each of the binary digit with probability p. The probability p is of type double and in the range of (0,1). p should be given as a parameter of the constructor.
void BitFlipProb::mutate(Individual* human, int k)
{
    k=human->getLength();
    for(int i=0; i<human->getLength(); i++)
    {
        double probability=rand() % 1;
        
        if(probability>0 && probability<1/k)
        {
            human->flipBit(probability);
        }
    }
    
}
