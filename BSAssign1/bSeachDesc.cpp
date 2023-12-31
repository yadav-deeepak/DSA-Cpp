#include<iostream>
using namespace std;
int main(){
    int a[]={10,7,6,4,2,1};
    int n=6;
    int target=4;
    int lo=0;
    int hi=n-1;
    bool flag=false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(a[mid]==target){
            flag=true;
            break;
        }
        else if(a[mid]>target)
        lo=mid+1;
        else hi=mid-1;
    }
    if(flag)
    cout<<"Element exists"<<endl;
    else cout<<"Element does not exist";
}