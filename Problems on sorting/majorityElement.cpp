#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(2);
    int n= nums.size();
    sort(nums.begin(),nums.end());
    cout<<"Majority Element :"<<nums[n/2];
}