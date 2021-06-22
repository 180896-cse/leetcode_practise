#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
vector<vector<int>>adjl;

vector<bool>vis;
string cycle(vector<vector<int>>v,int src,int parent){
    int cnt=0;
    stack<int>stk;
    stk.push(src);
    vis[src]=true;
    while(! stk.empty()){
    int nodes=stk.top();
    stk.pop();
    for( int i=0;i<v[nodes].size();i++){
        if(vis[v[nodes][i]] && parent!=v[nodes][i]){
            cnt++;
            return "cyclic graph";
        }
        if(!vis[v[nodes][i]]){
            if(i==0){
            stk.push(v[nodes][i]);
            vis[v[nodes][i]]=true;
            parent=nodes;
            }else{
            stk.push(v[nodes][i]);
            vis[v[nodes][i]]=true;
            }
        }
        
    }
    
    }
if(cnt==0){
    return "acyclic graph";
}
return "error";
}



int main(){
int nodes,edges;
cin>>nodes>>edges;
int x,y;
adjl.resize(nodes+1);
vis.resize(nodes+1);
for(int i=0;i<edges;i++){
    cin>>x>>y;
    adjl[x].push_back(y);
    adjl[y].push_back(x);
}
cout<<cycle(adjl,nodes,-1);




return 0; 
}
