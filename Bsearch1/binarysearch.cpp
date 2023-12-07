#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,5,9,15,18,21};
    int target=18;
    int lo=0;
    int n=8;
    int hi=n-1;
    while(lo<=hi){
        int mid=(hi+lo)/2;
        if(arr[mid]==target){cout<<mid;
        break;}
        else if(arr[mid]>target)hi=mid-1;
        else lo=mid+1;

    }
    
    return -1;


}