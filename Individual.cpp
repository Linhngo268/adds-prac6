//
//  Individual.cpp
//  
//
//  Created by Ngo Linh on 29/4/22.
//

#include "Individual.h"
#include <string>
using namespace std;

Individual::Individual(std::string inputString) //A constructor that takes in a binary string and creates a new Individual with an identical list. Note that this involves creating a new copy of the list.
{
    binaryString = inputString;
}

string Individual::getString()// The function outputs a binary string representation of the bitstring list (e.g.“01010100”)
{
    return binaryString;
}

int Individual::getBit(int pos)//The function returns the bit value at position pos. It should return -1 if pos is out of bound..
{
    if(pos<binaryString.length()&&pos>0)
        return binaryString[pos-1];
    else
        return -1;
}

void Individual::flipBit(int pos)//The function takes in the position of the certain bit and flip the bit value.
//if the binary bit is 0 it will flip to 1 and vice vesa
{
    if (binaryString[pos-1]=='1')
        binaryString[pos-1]='0';
    else if(binaryString[pos-1]=='0')
        binaryString[pos-1]='1';
}

int Individual::getMaxOnes() // The function returns the longest consecutive sequence of ‘1’ digits in the list (e.g. calling the function on “1001110” will obtain 3).
{
    int max = 0; //1 digit
    int min = 0;//0 digit
    for (int i=0; i<binaryString.length(); i++)
    {
        if (binaryString[i]=='1')
        {
            min++; // if current character is 1
            if(min > max)
            {
                max = min;
            }
        }else
        {
            min = 0; // if current character is 0
        }
    }
    return max;
}

int Individual::getLength()  //length of the list
{
    return binaryString.length();
}
