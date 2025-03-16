/*a program that finds sum of even and odd numbers given by user*/
#include <iostream>
using namespace std;
int main(void){
int sum=0,even_count=0,odd_count=0,even_sum=0,odd_sum=0;
int x;
for(int i=1;i<20;i++){
    cout<<"enter the value "<<endl;
    cin>>x;
    if(x%2==0){
        even_sum+=x;
        even_count++;
        cout<<"even sum "<<'\t'<<even_sum<<endl;
    }
    else {
        odd_sum+=x;
        odd_count++;
        cout<<"odd sum "<<'\t'<<odd_sum<<endl;
    }
    sum+=even_sum+odd_sum;
}
    cout<<"even sum"<<'\t'<<even_sum;
    cout<<"odd sum"<<'\t'<<odd_sum;
    cout<<"total sum"<<'\t'<<sum;
    cout<<"total even numbers"<<even_count;
    cout<<"total odd numbers"<<odd_count;
}