#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of element :";
    cin>>n;
    int a[n];
    //Input
    cout<<"Enter array elements";
    for(int i=0; i<=n-1 ;i++){
        cin>>a[i];
    }
    int x;
    cout<<"Enter the number :";
    cin>>x;
    int count =0;
    for(int i=0 ; i<=n-1 ; i++){
        if(a[i]>x)count++;
    }cout<<"Number of elements gretaer than "<<x<<" are :"<<count;
}