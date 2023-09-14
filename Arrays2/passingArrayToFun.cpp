#include<iostream>
using namespace std;
void display(int a[],int size){ //so arrays are passed as reference 
    for(int i=0;i<=size-1;i++){ //this function is working like this void display(int *a, int size)
        cout<<a[i]<<" ";
    }cout<<endl;
    return;
}

void change(int b[]){
    b[0]=100;
}
int main(){
    int arr[]={1,3,5,6,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of array is "<<size<<endl;
    //accessing the elements of arrays in another function
    //updation pass by value/pass bye reference?
    display(arr,size);
    change(arr);
    display(arr,size);

}