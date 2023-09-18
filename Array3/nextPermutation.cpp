#include<iostream>
#include<vector>
using namespace std;
void reversePart(int i ,int j,vector<int>& v1){
    while(i<=j){
        int temp =v1[i];
        v1[i]=v1[j];
        v1[j]=temp;
        i++;
        j--;

    }
}
void nextPermutation(vector<int>& v){
    int n= v.size();
    int idx=-1;
    for( int i=n-2;i>0;i--){
        if(v[i]<v[i+1]){
            idx=i;
            break;
        }
    }
    if(idx==-1){
        reversePart(0,n-1,v);
        return;  
    }
    reversePart(idx+1,n-1,v);
    int j=-1;
    for(int i=idx+1;i<n;i++){
        if(v[i]>v[idx]){
            j=i;
            break;
        }
    }
    int temp=v[idx];
    v[idx]=v[j];
    v[j]=temp;
    return;
}
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    int n=v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    nextPermutation(v);
     for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;


}