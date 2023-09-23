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

    int p;
    cout<<"Enter row of 2nd Matrix :";
    cin>>p;
    int q;
    cout<<"Enter columns of 2nd Matrix :";
    cin>>q;

    if(n==p){
       int a[m][n];
       cout<<"Enter 1st Matrix :";
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
       }

        int b[p][q];
       cout<<"Enter 2nd Matrix :";
       for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>b[i][j];
        }
       }
       //MULTIPLICATION
       int res[m][q];
       for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            res[i][j]=0;
            for(int k=0;k<p;k++){
                res[i][j]+=a[i][k]*b[k][j];
            }
        }
       }cout<<endl;

       //PRINT
       for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cout<<res[i][j]<<" ";
        }cout<<endl;
       }
    }
    else{
        cout<<"Matrix cannot be multiplied";
    }    

}