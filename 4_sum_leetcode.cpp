#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
int target=7;
vector<int>v={2,3,2,4,2,2,3,4,4,5,4,5,5,8,7,7,8,10,7,10};
map<int,int>ans;
sort(v.begin(),v.end());
int b,e;


for(int i=0;i<v.size();i++){
auto ptr=v.begin();
auto ptr2=v.end()-1;
b=*ptr;
e=*ptr2;
if(*ptr+*ptr2==target){
ans.insert(make_pair(*ptr,*ptr2));
ptr++;
ptr2--;
}
if(*ptr==*ptr-1){
    *ptr++;
}
if(*ptr2==*ptr+1){
    *ptr--;
}
if(ptr==ptr2 || ptr>ptr2){
    break;

}


}
for(auto & i:ans){
    cout<<i.first<<" "<<i.second<<" "<<" ";
}






return 0; 

}