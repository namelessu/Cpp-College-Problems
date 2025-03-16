/*a c++ program that read id(int), score(float),  and grade(char)  of  30  students  using arrays
The program will find and print i dof the student who get the highest score. */
#include <iostream>
using namespace std;
int main(void){
    int array[20],i,max_index,min_index,counter;
    float total_scores=0,average_score,max_score,min_score;
    for(i=0;i<30;i++){
        cout<<"enter the student score "<<endl;
        cin>>array[i];
        total_scores+=array[i];
    }
    average_score=total_scores/30;
    min_index=0;
    max_index=0;
    max_score=array[max_index];
    min_score=array[min_index];
    cout<<"average score "<<average_score;
    for(i=0;i<30;i++){ 
        if(array[i]<min_score){
            min_index=i;
            min_score=array[min_index];
            continue;
        }
        else if(array[i]>max_score){
            max_index=i;
            max_score=array[max_index];
            continue;
        }
        }
        for(i=0;i<30;i++){
            if(array[i]>average_score){
                counter++;
            }
        }
     cout<<"maximum score "<<max_score<<" "<<"maximum score student index "<<max_index<<" "<<"minimum score "<<min_score<<'\t'<<"minimum score student index "<<min_index<<" ";
     cout<<"total number of students who got scores greater than average score "<<'\t'<<counter;
    }