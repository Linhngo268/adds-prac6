//
//  Mutator.h
//  
//
//  Created by Ngo Linh on 30/4/22.
//

#ifndef Mutator_h
#define Mutator_h

 
#include <string>
#include"Individual.h"
class Mutator{
    public:
    //The Mutator class has a function mutate that takes in an Individual and an integer index k as parameter
    virtual void mutate(Individual *human,int k)=0;
};
#endif /* Mutator_h*/
