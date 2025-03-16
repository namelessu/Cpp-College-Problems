/*a c++ program that add 2 matrices*/
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void){
    int mat_1[3][5],mat_2[3][5],i,j;
    int mat_3[3][5];
    cout<<"enter the elements of the first matrix"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            cin>>mat_1[i][j];
        }
    cout<<endl;
    }
    cout<<"enter the elements of the second matrix"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            cin>>mat_2[i][j];
        }
        cout<<endl;
    }

    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            mat_3[i][j]=mat_1[i][j]+mat_2[i][j];
        }
        cout<<endl;
    }
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            cout<<mat_3[i][j]<<'\t';
        }
        cout<<endl;
    }
}
