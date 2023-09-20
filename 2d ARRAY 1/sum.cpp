#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter number of rows :";
    cin>>m;
    int n;
    cout<<"Enter number of columns :";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }
    int sum=0;
     for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
           sum=sum+arr[i][j];
        }
     }cout<<"Sum is :"<<sum;

}