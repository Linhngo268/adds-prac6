//
//  BitFlip.cpp
//  
//
//  Created by Ngo Linh on 30/4/22.
//

#include "BitFlip.h"
#include "Individual.h"
 
#include <string>
using namespace std;

void BitFlip::mutate(Individual* human, int k) //If k is greater than the length of the list, we will count in circles. For example, if the length of the list is 10 and k = 12, then the mutate function will flip the second digit.
{
    while (k > human->getLength())
        k = k- human->getLength();
    
   if(k> human->getLength())
   {
       human->flipBit(k - human->getLength());
   }else{
       human ->flipBit(k);
   }
}
