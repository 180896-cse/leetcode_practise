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



                                        //    BETTER-APPROACH SOLUTION--TIME:O(n) AND SPACE:O(n)


vector<int>twoSum_better(vector<int>& nums, int target) {
     unordered_map<int,int>mp;
     vector<int>ans;
     for(int i=0;i<nums.size();i++){
         int a=target-nums[i];
         auto itr=mp.find(a);
         if(itr==mp.end()){
             mp.insert(make_pair(nums[i],i));
         }
         else if (itr!=mp.end())
         {
             ans.push_back(mp[a]);
             ans.push_back(i);
         }
         
         
     }

return ans;

    }












int main(){
vector<int>nums={2,11,7,15};
int target=9;
vector<int>brute_force=twoSum(nums,target);
for(auto & i:brute_force){
    cout<<i<<" ";
}
cout<<"\n";
vector<int>better_app=twoSum_better(nums,target);
for(auto & i:better_app){
    cout<<i<<" ";
}




return 0;
}