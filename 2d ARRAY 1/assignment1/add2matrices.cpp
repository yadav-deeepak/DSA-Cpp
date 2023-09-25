#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter no. of rows and columns :";
    cin>>n>>m;
    int a[n][m];
    cout<<"Enter first matrix :";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

     int b[n][m];
    cout<<"Enter second matrix :";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>b[i][j];
        }
    }

    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j]=a[i][j]+b[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           cout<<a[i][j]<<" ";
        }cout<<endl;
    }
}