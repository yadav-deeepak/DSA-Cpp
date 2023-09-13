#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<&arr[0]<<endl; //0x62aefffc70
    cout<<&arr[1]<<endl; //0x62aefffc74 
    cout<<&arr[2]<<endl; //0x62aefffc78
    cout<<&arr[3]<<endl; //0x62aefffc7c
    cout<<&arr[4]<<endl; //0x62aefffc80
    cout<<&arr;//array name store the addres of its 1st element.
   
}