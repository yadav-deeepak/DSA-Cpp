#include<iostream>
using namespace std;
int main()
{
    int arr[7]; //Declaration 0 to 6 array indexes will be created
    arr[0] =7;//initialization
    cout<<arr[0]<<endl; //7
    int arr2[7]={1,2,4,5,6,7,8}; //Another way to initialize
    cout<<arr2[2]; //Prints the value of array at 3rd (2+1) position ie; 4

    //Taking input in an array using loop
    int arr3[7];

    cout<<"Enter array elements";
    for(int i=0;i<=7;i++){
    cin>>arr3[i];
    }
    for( int i=0;i<=6;i++){
        cout<<arr3[i];
    }

}
