//
//  Rearrange.cpp
//  
//
//  Created by Ngo Linh on 30/4/22.
//

#include "Rearrange.h"
#include <string>

//In this class, the mutate function rearranges the list.
//The function will select the kth digit in the bitstring (again, counting in circles). This digit and all digits after it (all the way to the tail) will be moved to the start of the list.
//For example, if you were rearranging the list (a,b,c,d,e) and k= 3, the function would return an Individual with the list (c,d,e,a,b).
void Rearrange::mutate(Individual* human, int k)
{
    while(k> human->getLength())
    k = k - human->getLength();

    std::string humanstring= human->getString();
    std::string lastdigit = humanstring.substr(k-1);
    std::string new_string = lastdigit + humanstring.substr(0,k-1);
    Individual resultstring(new_string);
    *human = resultstring;
}
