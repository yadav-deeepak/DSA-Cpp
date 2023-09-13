#include<iostream>
using namespace std;
int main(){
    int marks[6],n;
    cout<<"Enter number of students";
    cin>>n;
    //Input
    cout<<"Enter marks";
    for(int i=0;i<=n-1;i++){
        cin>>marks[i];

    }
    for(int i=0;i<=n-1;i++){
        if(marks[i]<35){
            cout<<i<<" ";
        }
    }
}