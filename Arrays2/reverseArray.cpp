#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a,int size){
    for(int i=0;i<=size-1;i++){ 
        cout<<a[i]<<" ";
}cout<<endl;
}
void reversePart(int i ,int j,vector<int>& v1){
    while(i<=j){
        int temp =v1[i];
        v1[i]=v1[j];
        v1[j]=temp;
        i++;
        j--;

    }
}
int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(6);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(7);
     v1.push_back(4);
     display(v1,v1.size());
    // for (int i=0,j=v1.size()-1;i<=j;i++,j--){//reverse of array using 2 pointers
    //    int temp =v1[i];
    //    v1[i]=v1[j];
    //    v1[j]=temp;
    // }
    reversePart(0,3,v1);
     display(v1,v1.size());
}