#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter no of rows and columns";
    cin>>n>>m;

    int a[n][m];
    cout<<"Enter matrix";
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }cout<<endl;

     for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" " ;
        }cout<<endl;
    }
    int index=-1,maximum=INT_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum+=a[i][j];
        }
        if(maximum<sum){
            maximum=sum;
            index=i;
        }
    }
    cout<<"Row with maximum sum is :"<<index;
}