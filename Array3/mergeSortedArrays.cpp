#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>& v1,vector<int>& v2){
 int i=0,j=0,k=0;
 int n=v1.size();
 int m=v2.size();
 vector<int> res(n+m);
 while(i<n&&j<m){
    if(v1[i]<v2[j]){
        res[k]=v1[i];
        i++;
    }
    else{
        res[k]=v2[j];
        j++;
    }k++;
 }
 //For remaining part
 if(i==n){
    while(j<m){
        res[k]=v2[j];
        k++;
        j++;
    }
 }
 if(j==m){
    while(i<n){
        res[k]=v1[i];
        i++;
        k++;
    }
 }
 return res;
   
}
int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(8);
    int n=v1.size();
    for(int i=0;i<n;i++){
        cout<<v1[i]<<" ";
    }cout<<endl;

     vector<int> v2;
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(10);
    int m=v2.size();
    for(int i=0;i<m;i++){
        cout<<v2[i]<<" ";
    }cout<<endl;
    vector<int> v3=merge(v1,v2);
    for(int i=0;i<v3.size();i++){
        cout<<v3[i]<<" ";
    }cout<<endl;

}