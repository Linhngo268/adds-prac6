//
//  BitFlipProb.h
//  
//
//  Created by Ngo Linh on 30/4/22.
//

#ifndef BitFlipProb_h
#define BitFlipProb_h

 
#include"Mutator.h"
//class inherit from Mutator.h
// The mutate function in this class goes through every digit in the binary string and “flips” each of the binary digit with probability p. The probability p is of type double and in the range of (0,1). p should be given as a parameter of the constructor.
class BitFlipProb:public Mutator{
 
public:
     
    void mutate(Individual* human, int k);
};
#endif /* BitFlipProb_h */
