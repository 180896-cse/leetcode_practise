#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

                                         // BRUTE-FORCE APPROACH---O(n^2);


void Brute_majority(vector<int>v){
int s=(v.size()+1)/2;
auto itr=max_element(v.begin(),v.end());
multimap<int,int>mp;
multimap<int,int>::iterator it;
for(int i=0;i<v.size();i++){
    int cnt=count(v.begin(),v.end(),v[i]);
    mp.insert(make_pair(cnt,v[i]));
}
for(auto & elm:mp){
    if(elm.first>=s){
        cout<<elm.second;
        break;
    }
}







 
    
}









int main(){
vector<int>v={-1,2,2,1,2,1};

Brute_majority(v);

cout<<"\n";



    return 0;
}