#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

vector<vector<int>>threesum(vector<int>& nums,int target){

}





int main(){
    int target=0;
    vector<int>nums={-1,0,1,2,-1,-4};
vector<vector<int>>brute_threesum=threesum(nums,target);
for(auto & i:brute_threesum){
    for(auto & j:i){
        cout<<j<<" ,";
    }
    cout<<" "<<" ";
}






return 0; 
}