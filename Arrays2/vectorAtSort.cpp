#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    v.at(2)=34;
    int s=v.size();
   for(int i=0;i<s;i++){
    cout<<v[i]<<" ";
   }cout<<endl;
   //sort(v.begin(),v.end());
   for(int i=0;i<s;i++){
    cout<<v[i]<<" ";
   }



}