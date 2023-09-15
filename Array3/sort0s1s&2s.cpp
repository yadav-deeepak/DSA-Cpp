#include<iostream>
#include<vector>
using namespace std;
void sort012(vector<int>& v){
    int n=v.size();
    int noo=0; //Number of ones
    int noz=0; //Number of zeroes
    int notw=0;//Number of twos
    //Finding number of zeroes & ones
    for(int i=0;i<n;i++){
        if(v[i]==0)
        noz++;
        else if(v[i]==1)
        noo++;
        else
        notw++;
    }
    //Filling elements
    for(int i=0;i<n;i++){
        if(i<noz){
            v[i]=0;

        }else if(i<(noz+noo))
        v[i]=1;
        else
        v[i]=2;
    }
}
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    int n=v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    sort012(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;

}