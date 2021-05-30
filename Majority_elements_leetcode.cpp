#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

                                         // BRUTE-FORCE APPROACH---O(n^2)  space---O(n);


void Brute_majority(multiset<int>ms){
int s=(ms.size()+1)/2;
auto itr=max_element(ms.begin(),ms.end());
multimap<int,int>mp;
multimap<int,int>::iterator it;
for(auto & val:ms){
    int cnt=ms.count(val);
    mp.insert(make_pair(cnt,val));
    
}
for(auto & elm:mp){
    if(elm.first>=s){
        cout<<elm.second;
        break;
    }
}







 
    
}









int main(){
multiset<int>ms={-1,2,2,1,2,1};

Brute_majority(ms);

cout<<"\n";



    return 0;
}