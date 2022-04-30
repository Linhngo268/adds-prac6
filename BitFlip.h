//
//  BitFlip.h
//  
//
//  Created by Ngo Linh on 30/4/22.
//

#ifndef BitFlip_h
#define BitFlip_h

 
#include "Mutator.h"
#include <string>
//class inherit from mutator
class BitFlip: public Mutator{
public:
    void mutate(Individual* human, int k);
};
#endif /* BitFlip_h*/
