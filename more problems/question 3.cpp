#include <iostream>
using namespace std;
int main(void){
    int id[30],max_index;
    float max;
    char grade[30];
    float score[30];
    for(int i=0;i<30;i++){
        cout<<"enter the id of the student "<<endl;
        cin>>id[i];
        cout<<"enter the score of the student "<<endl;
        cin>>score[i];
        cout<<"enter the id of the student "<<endl;
        cin>>grade[i];
    }
    max_index=0;
    max=score[max_index];
    for(int i=0;i<30;i++){
        if(score[i]>max){
            max=score[i];
        }
    }
    cout<<"the maximum student score "<<'\t'<<score[max_index]<<"maximum student ID "<<'\t'<<id[max_index];

}