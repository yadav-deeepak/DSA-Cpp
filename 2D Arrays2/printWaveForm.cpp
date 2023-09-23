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
       for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<a[i][j]<<" ";
            }
        }
       }
}
