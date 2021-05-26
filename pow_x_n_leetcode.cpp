#include<iostream>
#include<bits/stdc++.h>
using namespace std;



                        // Brute-force Approach-O(n)


void Brute_pow(double x, int n){
 double y=1;
 if(n<0){
 while(n++){
     y*=1/x;
     
 }
 cout<<y;
 }else{
  while(n--){
     y*=x;
     
 }
 cout<<y;
 }
 

}


                            // Optimal-Way approach--(O(logn))


void optimal_pow(double x, int n){
    cout<<pow(x,n);
}










int main(){
    double x= 2;
    int n= 2;
 Brute_pow(x,n);

cout<<"\n";


optimal_pow(x,n);





return 0;
}