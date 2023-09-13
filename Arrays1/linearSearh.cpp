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
    cout<<"Enter the value to search :";
    cin>>x;
    //search
    //checkmark
    bool flag = false;//false ->not present
    for(int i=0 ; i<=n-1 ; i++){
        if(a[i]==x)
        flag=true;
    }
    if(flag==true)cout<<"Present";
    else cout<<"404 Not found";
}