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
     for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
     }cout<<endl;
    
     //store transpose
     int trans[n][m];
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            trans[i][j]=arr[j][i];
        }
     }

         for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<trans[i][j]<<" ";
        }cout<<endl;
     }

}