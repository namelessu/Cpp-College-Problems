#include <iostream>
using namespace std;
int main(){
    float i,n;
    float sum=0;
    cout<<"enter the limit "<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
    sum=sum+(1/i);
    }
    cout<<"the total sum is equal to"<<'\t'<<sum;
}