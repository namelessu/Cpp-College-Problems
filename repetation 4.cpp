/*nested loops**/
#include <iostream>
using namespace std;
int main(void){
    int i,j;
    for(i=1;i<=4;i++){
        cout<<i<<'\t'<<"|"<<'\t';
        for(j=1;j<4;j++){
            cout<<i*j<<'\t';
        }
        cout<<endl;
    }
}