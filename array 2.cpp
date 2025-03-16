/*a c++ program that prints the maximum value of an array*/
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void){
   int array[100],max_index,min_index,n;
   float min,max;
   cout<<"enter the number of elements"<<'\t'<<endl;
   cin>>n;
   for(int i=0;i<n;i++){
    cout<<"enter the value "<<'\t'<<endl;
    cin>>array[i];
   }
   min_index=0;
   min=array[min_index];
   max_index=0;
   max=array[max_index];
   for(int i=0;i<n;i++){
    if(array[i]>max){
        max_index=i;
        max=array[max_index];
    }
   }
   for(int i=0;i<n;i++){
    if(array[i]<min){
        min_index=i;
        min=array[min_index];
    }
   }
   cout<<"minimum index "<<'\t'<<min_index<<'\t'<<"and the minimum value "<<'\t'<<min<<endl;
   cout<<"maximum index "<<'\t'<<max_index<<'\t'<<"and the maximum value "<<'\t'<<max<<endl;
}
