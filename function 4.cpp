#include <iostream>
using namespace std;
int arr[20];
void random(){
    for(int i=0;i<20;i++){
        arr[i]=rand()%20;
    }
}
void read(){
    for(int i=0;i<20;i++){
        cout<<"enter the values "<<endl;
        cin>>arr[i];
    }
}
void print(){
    for(int i=0;i<20;i++){
        cout<<arr[i];
    }
}
int main(void){
    print();
    read();
    random();    
}