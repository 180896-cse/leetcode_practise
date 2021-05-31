#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

                                         // BRUTE-FORCE APPROACH---O(n^2)  space---O(n);


void Brute_majority(multiset<int>ms){
int s=(ms.size()+1)/2;

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







                // OPTIMAL-WAY APPROACH---O(n), SPACECOMPLEX:---O(1)


void optimal_majority(vector<int>v){
int maj=0;
int count=0;
for(int i=0;i<v.size();i++){
if(i==0){
    maj=v[i];
    count++;
}else{
    if(v[i]!=maj){
        count--;
        if(count==0){
            maj=v[i];
            count++;
        }
    }else{
        count++;
        if(i==v.size()-1){
            cout<<maj;
            break;
        }
    }




}
if(i==v.size()-1){
            cout<<maj;
            break;
        }


}




}












int main(){
multiset<int>ms={-1,2,2,1,2,1};
vector<int>v={-1,2,2,1,2,1};

Brute_majority(ms);   //  IN BRUTE-FORCE APPPROACH I HAVE DONE IT WITH TAKING INPUT IN VECTOR BUT CAN DO IN VECTOR ALSO IN SAME MANNNER OR JUST TRANSFORM THE VECTOR FROM MULTISET 

cout<<"\n";

optimal_majority(v);



    return 0;
}