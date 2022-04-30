#ifndef Individual_h
#define Individual_h

 
#include <string>
 
 
class Individual{
protected:
    std::string binaryString; //stores the value of genes

public:
    Individual(int length);

    Individual(std::string inputString);

    std::string getString();
   
    int getBit(int pos);
   
    void flipBit(int pos);
    int getMaxOnes();
    int getLength();  

};




#endif /* Individual_h */

