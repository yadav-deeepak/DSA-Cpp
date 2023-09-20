#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    //rows-> 0 to 2
    //columns-> 0 to 2
    arr[0][0]=4; //Inittialization
    cout<<arr[0][0]<<endl;// 4
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}}; //Initialization
    cout<<a[2][2]<<endl; //9
    for(int i=0;i<3;i++){    //TRAVERSAL
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
    }

}