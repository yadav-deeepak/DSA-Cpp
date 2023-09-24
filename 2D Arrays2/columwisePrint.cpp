#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"Enter row of 1st Matrix :";
    cin>>m;
    int n;
    cout<<"Enter columns of 1st Matrix :";
    cin>>n;

    int a[m][n];
       cout<<"Enter Matrix :";
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
       }
      
      for(int j=0;j<n;j++){
        if(j%2==0){
        for(int i=0;i<m;i++){
            cout<<a[i][j]<<" ";
        }
      }else{
        for(int i=n-1;i>=0;i--){
            cout<<a[i][j]<<" ";
        }
      }
     }
}