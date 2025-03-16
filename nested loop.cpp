/*nested loop pattern*/
#include <iostream>
using namespace std;
int main(void){ 
    int i,j,rows,space;
    cout<<"enter the number of rows "<<endl;
    cin>>rows;
for(i=rows;i>=1;i--){
    for(space=0;space<rows-i;space++){
        cout<<" ";
        for(j=1;j<=i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
}