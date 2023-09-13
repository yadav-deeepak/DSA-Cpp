#include<iostream>
#include<climits>
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

    //int max=a[0];
    int max=INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(max < a[i])max =a[i];
    }
    //second max
    int smax=INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(a[i]!=max && smax<a[i]){
            smax = a[i];
        }
    }
    cout<<"Max number is :"<<max<<"Second max is :"<<smax;
}