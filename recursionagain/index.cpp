#include<iostream>
using namespace std;
int fact(int n){
    int ans=1;
    if(n==0){
      return ans;
    }
     ans= n*fact(n-1);
return ans;
}
int main(){
    int n=3;
    cout<<fact(n);
}