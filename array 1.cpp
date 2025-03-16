/*a c++ program that prints the minimum value and the minimum index of an array*/
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void){
    int array[5]={5,6,7,4,1},min,min_index; 
    min_index=0; 
    min=array[min_index]; 
    for(int i=0;i<=5;i++){
        if(array[i]<min){
            min_index=i;
            min=array[min_index];
        }
    }
cout<<"minimum index "<<min_index<<" "<<"minimum value is "<<min;
}








