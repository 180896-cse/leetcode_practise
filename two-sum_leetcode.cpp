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
      int indx1=0,indx2=0;
       unordered_map<int,int>mp;
       unordered_map<int,int>::iterator itr;
       for(int i=0;i<nums.size();i++){
           if(nums[i+1]==nums.size()){
               mp.insert(make_pair(nums[i],0));
           }
           mp.insert(make_pair(nums[i],nums[i+1]));
           
       }
       for(auto &i:mp){
           if((i.first)+(i.second)==target){
               indx1=i.first;
               indx2=i.second;
           }
       }
       auto it=find(nums.begin(),nums.end(),indx1);
       auto it2=find(nums.begin(),nums.end(),indx2);
       int a= it-nums.begin();
       int b= it2-nums.begin();
       cout<<a<<" "<<b;

    }












int main(){
vector<int>nums={3,2,4};
int target=6;
vector<int>brute_force=twoSum(nums,target);
for(auto & i:brute_force){
    cout<<i<<" ";
}
cout<<"\n";
twoSum_better(nums,target);




return 0; }