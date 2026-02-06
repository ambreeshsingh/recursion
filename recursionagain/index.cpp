// #include<iostream>
// using namespace std;
// int fact(int n){
//     int ans=1;
//     if(n==0){
//       return ans;
//     }
//      ans= n*fact(n-1);
// return ans;
// }
// int main(){
//     int n=3;
//     cout<<fact(n);
// }

// Question2

// #include<iostream>
// using namespace std;
// void printno(int n){
//     if(n==0){
//         return ;
//     }
  
//     printno(n-1);
//     cout<<n<<" ";

// }
// int main(){
//     printno(10);
// }

// Question 3

#include<iostream>
using namespace std;
void printno(int arr[],int n){
    if(n==0){
        return;

    }
    cout<<arr[0]<<" ";
    printno(arr+1,n-1);



}
int main(){
    int arr[]={5,9,0,8,7,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    printno(arr,n);

    return 0;
}