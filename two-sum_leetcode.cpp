#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
    

                            // BRUTE-FORCE APPROACH ---O(n^2)  SPACE---O(1)

vector<int>twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }
        return ans;
    }












int main(){
vector<int>nums={3,2,4};
int target=6;
vector<int>two=twoSum(nums,target);
for(auto & i:two){
    cout<<i<<" ";
}





return 0; }