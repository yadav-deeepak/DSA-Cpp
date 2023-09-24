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
       }cout<<endl;
       int minr=0,minc=0;
       int maxr=m-1,maxc=n-1;
       while(minr<=maxr && minc<=maxc){
        //Right
        for(int j=minc;j<=maxc;j++){
            cout<<a[minr][j]<<" ";
        }minr++;
        //Down
        if(minr>maxr || minc>maxc) break;
            for(int i=minr;i<=maxr;i++){
                cout<<a[i][maxc]<<" ";
            }maxc--;
        //Left
        if(minr>maxr || minc>maxc) break;
            for(int j=maxc;j>=minc;j--){
                cout<<a[maxr][j]<<" ";
            }maxr--;

        //Up
        if(minr>maxr || minc>maxc) break;
            for(int i=maxr;i>=minr;i--){
                cout<<a[i][minc]<<" ";
            }minc++;
        
       }
      
}