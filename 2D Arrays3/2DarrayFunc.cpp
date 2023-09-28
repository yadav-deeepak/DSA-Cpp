#include<iostream>
#include<vector>
using namespace std;
void changeVal(int a[]){
    a[1]=10;
}
void change2d(int arr[3][3]){ //Here we have to pass the size otherwise it will show error
    arr[0][1]=20;
}
int main(){
    int a[]={1,2,3,4,5};
    cout<<a[1]<<endl;
    changeVal(a);
    cout<<a[1];

    int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<arr[0][1]<<endl;
    change2d(arr);
    cout<<arr[0][1];

}
