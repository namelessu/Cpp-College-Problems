/*finding total average of a set of numbers given by the user*/
#include <iostream>
using namespace std;
int main(void){
float n,x,avg,sum=0;
cout<<"enter the total numbers you want to find its average "<<endl;
cin>>n;
for(int i=0;i<n;i++){
    cout<<"enter the number: "<<'\t';
    cin>>x;
    sum+=x;
}
avg=sum/n;
cout<<"the total average "<<avg;
}