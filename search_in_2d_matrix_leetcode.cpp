#include<iostream>
#include<bits/stdc++.h>
using namespace std;


                    // BRUTE-FORCE APPROACH---O(n x m)


bool brute_f_search(vector<vector<int>>matrix,int target){

int incre=0;
for(int i=0;i<matrix.size();i++){
    if(incre>0){
        break;
    }
    for(int j=0;j<matrix[i].size();j++){
       if(matrix[i][j]==target){
           incre++;
           break;
       }
    }
    
    
}

if(incre>0){
    cout<<std::boolalpha;
    cout<<true;
}else{
    cout<<std::boolalpha;
    cout<<false;
}

}








                        // OPTIMISED-WAY APPROACH-----O()










int main(){
    
int target=13;
vector<vector<int>>matrix={{1,3,5,7},{10,11,16,20},{23,30,34,60}};

brute_f_search(matrix,target);







    return 0;
}