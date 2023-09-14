#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter target :";
    cin>>x;

    vector<int> v;
    int n;
    cout<<"Enter the array size :";
    cin>>n;

    cout<<"Enter the array elements :";
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);

    }
    
    for(int i=0 ; i<=v.size()-2 ; i++){
        for(int j=i+1 ; j<=v.size()-1 ; j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}