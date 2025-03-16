/*a c++ program that finds the maximum and minimum of an n element array*/
#include <iostream>
using namespace std;
int main(void){   
    int array[100],min_index,max_index,min,max,n;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter the value "<<endl;
        cin>>array[i];
    }
    min_index=0;
    max_index=0;
    min=array[min_index];
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
    cout<<"maximum index "<<'\t'<<max_index<<endl;
    cout<<"minimum index "<<'\t'<<min_index<<endl;
    cout<<"maximum value"<<'\t'<<max<<endl;
    cout<<"minimum value "<<'\t'<<min<<endl;
    }