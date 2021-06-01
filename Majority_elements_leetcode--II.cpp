#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;


                                                // BRUTE--FORCE APPROACH---O(n^3) AND SPACE COMPLEXITY-- O(n^2);

vector<int>brute_majority(vector<int>nums){
    
vector<int>k;        
int knt=0;
        int s=(nums.size()/3);
            
        for(int i=0;i<nums.size();i++){
            int knt=count(nums.begin(),nums.end(),nums[i]);
            auto it= find(k.begin(),k.end(),nums[i]);
            if(knt>s && it==k.end()){
                 k.push_back(nums[i]);
            }
            
            
            
            
        }
return k;
}




                                    // BETTER-APPROACH SOLUTION --O(nLogn)-- SPACE COMLEXITY--(O(n));


vector<int>better_majority(vector<int>nums){
    int knt=0;
    int s=nums.size()/3;
    unordered_map<int,int>mp;
    unordered_map<int,int>::iterator it;
    for(int i=0;i<nums.size();i++){
        int knt=count (nums.begin(),nums.end(),nums[i]);
        mp.insert(make_pair(nums[i],knt));
    }
    vector<int>ans;
    if(s==0){
        
    }


}













int main(){
vector<int>nums={1,2};

vector<int>s=brute_majority(nums);
for(auto & i:s){
    cout<<i<<" ";
}




return 0; 
}