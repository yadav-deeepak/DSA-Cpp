#include<iostream>
#include<vector>
using namespace std;
void moveNFPL(vector<int>& v){
    int n=v.size();
    int i=0,j=n-1;
    while(i<j){
        if(v[i]<0)i++;
        if(v[j]>0)j--;
        else if(v[i]>0&&v[j]<0){
            int temp;
            temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
    }

}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(-2);
    v.push_back(3);
    v.push_back(-4);
    v.push_back(-5);
    v.push_back(6);
    v.push_back(8);

    int n=v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    moveNFPL(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;

}