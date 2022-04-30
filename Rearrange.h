//
//  Rearrange.hpp
//  
//
//  Created by Ngo Linh on 30/4/22.
//

#ifndef Rearrange_h
#define Rearrange_h

#include <string>
#include"Mutator.h"
//class inherit from Mutator.h
//In this class, the mutate function rearranges the list. The function will select the kth digit in the bitstring (again, counting in circles). This digit and all digits after it (all the way to the tail) will be moved to the start of the list. For example, if you were rearranging the list (a,b,c,d,e) and k= 3, the function would return an Individual with the list (c,d,e,a,b).
class Rearrange:public Mutator{
 
public:
    void mutate(Individual *human, int k);
};
 

#endif /* Rearrange_hpp */
