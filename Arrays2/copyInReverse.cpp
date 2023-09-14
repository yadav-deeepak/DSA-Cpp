#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a,int size){
    for(int i=0;i<=size-1;i++){ 
        cout<<a[i]<<" ";
}cout<<endl;
}
int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(6);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(7);
     v1.push_back(4);
     int size =v1.size();
     display(v1,size);
     vector<int> v2(size);
     for(int i=0;i<v2.size();i++){
        //i+j=size-1
        int j=size-1-i;
        v2[i]=v1[j];
     }
     display(v2,size);
     //
}