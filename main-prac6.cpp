//
//  main-prac6.cpp
//  
//
//  Created by Ngo Linh on 30/4/22.
//

 
#include"Individual.h"
#include"Mutator.h"
#include"BitFlip.h"
#include"BitFlipProb.h"
#include"Rearrange.h"
#include<iostream>
#include<string>
using namespace std;

Individual* execute(Individual* indPtr,Mutator* mPtr,int  k){
mPtr->mutate(indPtr,k);
return indPtr;
}


int main(){
    string human1;
    cin>>human1;
    int k1;
    cin>>k1;
    string human2;
    cin>>human2;
    int k2;
    cin>>k2;


    BitFlip A;
    Rearrange B;
    Individual Hannah(human1);
    Individual Linh(human2);
    Individual *Hannah_1=execute(&Hannah,&A,k1);
    Individual *Linh_1=execute(&Linh,&B,k2);
    cout<<Hannah_1->getString()<<" "<<Linh_1->getString()<<" "<<Linh_1->getMaxOnes();

}
