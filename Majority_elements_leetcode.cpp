#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

void Brute_majority(vector<int>v){
int s=(v.size()+1)/2;
auto itr=max_element(v.begin(),v.end());
map<int,int>mp;
map<int,int>::iterator im;
multimap<int,int>mtmp;
multimap<int,int>::iterator iy;

for(int i=0;i<v.size();i++){
    int cnt=count(v.begin(),v.end(),v[i]);
    auto it=mp.find(v[i]);
    if(it == mp.end()){
        mp.insert(make_pair(v[i],cnt));
        
        

    }
    
    }

for(im=mp.begin();im<mp.end();im++){
    
}

for(auto value:mtmp){
    cout<<value.first<<" "<<value.second<<" "<<" ";
}



 
    
}









int main(){
vector<int>v={-1,2,2,1,2,1};

Brute_majority(v);


    return 0;
}