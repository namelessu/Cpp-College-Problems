// a program that adds bonus on sales based on certain conditions
#include <iostream>
#include <math.h>
using namespace std;
int main() {
 double value=0,bonus=0,value_after;
 cout<<"enter the value "<<endl;
 cin>>value;
 if(value >20000){
   bonus+=0.10;
   cout<<"the value assigned to bonus "<<"\t"<<bonus<<endl;
   value_after=value;
   value_after+=value*bonus;
   cout<<"the value after bonus "<<'\t'<<value_after;
 }
 else if(value >10000 && value<20000){
   bonus+=0.05;
   cout<<"the value assigned to bonus "<<"\t"<<bonus<<endl;
   value_after=value;
   value_after+=value*bonus;
   cout<<"the value after bonus "<<'\t'<<value_after;
    }
    else{
   cout<<"the value assigned to bonus "<<"\t"<<bonus<<endl;
   value_after=value;
   value_after+=value*bonus;
   cout<<"the value after bonus "<<'\t'<<value_after;
    }
}