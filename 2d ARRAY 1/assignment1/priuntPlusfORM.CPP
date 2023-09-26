#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of rows and columns";
    cin>>n;

    int a[n][n];
    cout<<"Enter matrix";
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }cout<<endl;

     for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" " ;
        }cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==n/2 ||j==n/2){
                cout<<a[i][j];
            }else cout<<" ";
        }cout<<endl;
    }

}