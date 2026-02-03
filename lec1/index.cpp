//  #include<iostream>
//  #include <algorithm> 
// using namespace std;
// void printnums(int n){
//  if(n==1){
    // cout<<1;
    // return;
//  }

//  cout<<n<<" ";
//  printnums(n-1);



// }
// int main(){
    // printnums(56);
    // return 0;
// }


// .............................>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>.quetion 2 factorial
// #include<iostream>
// using namespace std;
// void factt(int n){
    // int fact=1;  
    // if(n==1){
        // cout<<fact;
    // }
    
  
    // fact=fact*n;
    // factt(n-1);

// }
// int main(){
//    factt(4);
// }


// #include<iostream>
// using namespace std;
// int sum(int n){
// if(n==1){
    // return 1;
// }

// return n+sum(n-1);



// }

// int main(){
    // int n=3;
    // cout<<sum(n);
    // return 0;
// }




// ..............................................>>>>>>>>>>>>>>>>>>>>.linear search

// bool ls(int arr[],int size,int key){
  
// if(size==0){
    // return false;
// }


//   if(arr[0]==key){
    // return true;
//   }
//   else{
    // bool leftarray=ls(arr+1,size-1,key);
    // return leftarray;
//   }

 

// }


// int main(){
//   int arr[]={3,5,1,2,6};
//  bool ans=ls(arr,5,6);
//  if(ans){
    // cout<<"found";
//  }
//  else{
    // cout<<"not found";
//  }
     
    //  return 0;
//  }


//.................................................>>>>>>>>>>>>>>>SUM

// int sum(int arr[],int n){
//    if(n==1){
    // return arr[0];
//    }
    // return arr[0]+sum(arr+1,n-1);

// }
// int main(){
    // int arr[]={1,2,3,4,5};
    // int n=5;
    // cout<<sum(arr,n);


// }


// ..................................................>>>>>>>>>>>LINEAR SEARCH
// bool ls(int arr[],int n,int k){
    // if(n==0){
        // return 0;

    // }
    // if(arr[0]==k){
        // return 1;
    // }
    // return ls(arr+1,n-1,k);
// }



//  int main(){
    // int arr[]={1,2,3,4,9};
    // int n=5;
    // cout<<ls(arr,n,5);


// }


//...................................................>>>>>>>>>>>>>>>BINARY SEARCH


// int print(vector<int>arr,int st,int end){
    // for(int i=st;i<=end;i++){
        // cout<<arr[i]<<" ";
    // }
    // cout<<endl;
// }


// bool bs(vector<int> arr,int n,int st,int end,int target){

    // print(arr,st,end);
   
//    if(st>end){
    // return false;
//    }

//    int mid=(st+end)/2;
//    if(target==arr[mid]){
    // cout<<"targetvfound "<<arr[mid]<<endl;
    // return true;

//    }
//    else if(target>arr[mid]){
       
        // return bs( arr, n, mid+1,end,target);
//    }
//    else{

    // return bs( arr, n, st, mid-1, target);
//    }

   
// }

//  int main(){
    // vector<int>arr={1,2,3,4,5};
    // int n=5;
    // int st=0;
    // int end=n-1;
    // int target=5;
    // cout<<bs(arr,n,st,end,target);


// }



// ...................................................>>>>>>>>>>>>>>>> SEARCH IN ROTATED SORTED ARRY

// int print(vector<int>arr,int st,int end){
    // for(int i=st;i<=end;i++){
        // cout<<arr[i]<<" ";
    // }
    // cout<<endl;
// }


// bool bs(vector<int>arr,int n ,int target,int st,int end){
    // print(arr,st,end);

//    if(st>end){
    // return false;
//    }

//    int mid=(st+end)/2;
//    if(arr[mid]==target){
    // return true;
//    }

//    if(arr[st]<=arr[mid]){
    //left sorted
    // if(target>=arr[st]&&target<=arr[mid]){
        // end=mid-1;
    // }
    // else{
    //   st=mid+1;
    // }

//    }
//    else{
    // if(target>=arr[mid]&&target<=arr[end]){
    //right sorted
    // st=mid+1;
    // }
    // else{
        // end=mid-1;
    // }
  
    
//    }
    // return  bs(arr,n,target,st,end);


// }


//  int main(){
    // vector<int>arr={3,4,5,6,7,0,1,2};
    // int n=8;
    // int st=0;
    // int end=n-1;
    // int target=5;
    // cout<<bs(arr,n,target,st,end);

//  }



// ...................................................>>>>>>>>>>>PEAK INDEX IN MOUNTAIN ARRAY

// int bs(vector<int> vec,int n,int st,int end){
// if (st>end){
    // return false;

// }
//OR if(vec.size()<3) return false;

// int mid=(st+end)/2;
// if( vec[mid]> vec[mid+1] &&vec[mid]>vec[mid-1]){
    //  return vec[mid];
// }
// if(vec[mid]<vec[mid+1]){
    // st=mid+1;
// }
// else if(vec[mid]<vec[mid-1]){
//    end=mid-1;
// }

// return bs(vec,n,st,end);



// }
//  int main(){
    // vector<int>arr={0,3,8,9,5,2};
    // int n=6;
    // int st=1;
    // int end=n-2;
    // cout<<bs(arr,n,st,end);

//  }


// ................................................>>>>>>>>>>  SINGLE IN SORTED..........>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// int bs(vector<int>vec,int m,int st,int end){
      


// }

//  int main(){
    // vector<int>arr={1,1,2,3,3,4,4,5,5};
    // int n=9;///
    // int st=1;
    // int end=n-2;
    // cout<<bs(arr,n,st,end);

//  }



 //.............................................................STRINGS................................................................

 //QUESTON=REVERSE USING RECURSION
 

// void rev(string &str,int i,int j){
//    cout<<"calll recieved for "<<str;
//    cout<<endl;
   
//    if(i>j){
    // return ;
//    }
//    swap(str[i],str[j]);
//    i++;
//    j--;
//   return rev(str,i,j);

// }

//  int main(){
    // string s="babbar";
    // int n=s.size();
    // int i=0;
    // int j=n-1;
//    rev(s,i ,j);
//    cout<<s;
   
//  }


// .....................................................REverse a string through loop


// bool checkpallindrome(string str,int i,int j){
    // while(i<=j){
        // if(str[i]!=str[j]){
            // return false;
        // }
        // i++;
        // j--;
    // }
    // return true;
// }

// int main()
// {
    // string str="abcagba";
    // bool result=checkpallindrome(str,0,str.size()-1);
    // if(result){
        // cout<<"yes it is"<<endl;
    // }
    // else{
        // cout<<"nope";
    // }
// }


// .....................................................REverse a string through .....>>>>>>>>RECURSION

// bool checkpallindrome(string str,int i,int j){
//     if(i>j){
//          return true ;
//     }
    
//    if(str[i]!=str[j]){
//          return false;
//    }
//    return checkpallindrome(str,i+1,j-1);
// }

// int main()
// {
//     string str="abcagba";
//     bool result=checkpallindrome(str,0,str.size()-1);
//     if(result){
//         cout<<"yes it is"<<endl;
//     }
//     else{
//         cout<<"nope";
//     }
// }



// ..........................................SORTING........TECHNIQUES.

// without uing recursion..............SELECTION SORT..........

//  void selection(int arr1[],int size){
//     for(int i=0;i<size-1;i++){
//         int minidx=i;
//         for(int j=i+1;j<size;j++){
//             if(arr1[j]<arr1[minidx]){
//                 minidx=j;
//             }
//         }
//         swap(arr1[minidx],arr1[i]);
//     }
// for(int i=0;i<size;i++){
//     cout<<arr1[i]<<" ";
// }

// }

// int main(){
//     int arr1[]={3,5,7,9,4,1};
//   int size=6;
//   selection(arr1,size);

// }


// without uing recursion..............BUBBLE SORT..........

// void bubble(int arr1[],int size){
//     for(int i=0;i<size-1;i++){
//         int istrue=true;
//         for(int j=0;j<size-1-i;j++){
//             if(arr1[j]>arr1[j+1]){
//                 swap(arr1[j],arr1[j+1]);
//                 istrue=false;
//             }
//         }
//         if(istrue){
//             break;
//         }
//     }

//     for(int i=0;i<size;i++){
//      cout<<arr1[i]<<" ";
//     }



// }

// int main(){
// int arr1[]={3,5,7,9,4,1};
// int size=6;
// bubble(arr1,size);

// }




// without uing recursion..............INSERTION SORT..........
// void insertion(int arr1[],int size){
//   for(int i=1;i<size;i++){
//     int temp=arr1[i];
//     int j=i-1;
//     while(j>=0 && arr1[j]>temp){
//             arr1[j+1]=arr1[j];
//             j--;
//     }
//     arr1[j+1]=temp;
//   }

//     for(int i=0;i<size;i++){
//      cout<<arr1[i]<<" ";
//     }


// }
// int main(){
// int arr1[]={3,5,7,9,4,1};
// int size=6;
// insertion(arr1,size);
// return 0;
// }




// NOW BY USING RECUSRION 
// bubble
// vector<int> bubble(vector<int>vec,int size){
//     if(size==1||size==0){
//         return vec;
//     }
//     for(int i=0;i<size-1;i++){
//         if(vec[i]>vec[i+1]){
//             swap(vec[i],vec[i+1]);
//         }
    
//     }
//    return  bubble(vec,size-1);



// }

// int main(){
//     vector<int>vec={4,8,1,3,0,7};
//     int size=6;
//     vector<int>vec2=bubble(vec,size);
     
// for(int i=0;i<size;i++){
//     cout<<vec2[i]<<" ";

// }
// return 0;
// }

// NOW BY USING RECUSRION 
// selection sort  by uing array
// void selection(int arr[],int size){
//     if(size==0||size==1){
//         return ;
//     }
//     int smallest=0;
//     for(int i=1;i<size;i++){
//         if(arr[i]<arr[smallest]){
//            smallest=i;
//         }
//     }
//     swap(arr[smallest],arr[0]);

//     return selection(arr+1,size-1);




// }
// int main(){
//     int arr[]={2,5,1,9,6,0};
//     int size=6;
//     selection(arr,size);
//     for(int i:arr){
//         cout<<i<<" ";
//     }
//     return 0;
// }

//selection sort by using vector

// void selection(vector<int>&vec,int size){
//     if(size==1){
//         return;

//     }
//     int largest=size-1;
//     for(int i=size-2;i>=0;i--){
//         if(vec[i]>vec[largest]){
//             largest=i;
//         }
//     }
//     swap(vec[largest],vec[size-1]);

// }


// int main(){
//     vector<int>vec={1,10,5,8,9,4};
//     int size=vec.size();
//     selection(vec,size);
//     for(int i:vec){
//         cout<<i<<" ";
//     }

// }



// INSERTION 
// BY RECURSION...........................................nahi hua
// void insertion(int arr,int size){
//     if(size==1){
//         return;
//     }
    

// }

// int main(){
//     int arr[]={2,5,1,9,6,0};
//     int size=6;
//     insertion(arr,size);
//     for(int i:arr){
//         cout<<i<<" ";
//     }
//     return 0;
// }



// //print subset
//  void ps(vector<int>&vec,vector<int>&ans,int i){
//     for(int x:ans){
//         cout<<x<<" ";
//     }
//     cout<<endl;

//     if(i==vec.size()){
        
//         return;
//     }
//     ans.push_back(vec[i]);
//     ps(vec,ans,i+1);

//     ans.pop_back();
//     ps(vec,ans,i+1);



// }
// int main(){
//     vector<int>vec={1,2,3};
//     vector<int>ans;
//     int i=0;
//     ps(vec,ans,i);
// }



// ...................................................................30 questions......................................
//... print no 1 to N

//  void printno(int n,int N){
//     if(n==N){
//         return;
//     }
//     cout<<n<<endl;
//     printno(n+1,N);

// }


// int main(){
//     printno(1,10);
//     return 0;
// }

//..print from N to 1
// void printno(int N){
//     if(N==1){
//         cout<<N;
//         return;
//     }
//     cout<<N<<endl;
//     printno(N-1);


// }

// int main(){
//     printno(5);
// }

// factorial
//  int result=1;
//  int fact(int n){
   
//     if(n==0){
//         return result;

//     }
//     result*=n;
//      return fact(n-1);

// }

// int main(){
//     cout<<fact(3);
// }

//sum of first n natural no.
// int sumkaro(int n,int sum){
//     if(n==0){
//       return sum;
//     }
//     sum+=n;
//     return sumkaro(n-1,sum);


// }
// int main(){
//     cout<<sumkaro(5,0);
// }

// .........................................................find the sum of digits of a number

// int sum(int num,int result){
//     if(num/10==0){
//         result+=num;
//          return result;
//     }
//     result+=num%10;
//     return sum(num/10,result);

// }

// int main(){
//     int num=5654;
//     int result=0;
//    cout<< sum(num,result);
// }


//............................................................counts digits of a number

// int count(int num,int coun){
//     if(num/10==0){
        
//         return coun+1;
//     }
//     coun++;
//     return count(num/10,coun);

// }
// int main(){
//     int num=346457;
//     cout<<count(num,0);
// }


//............................................................check string pallindrome or not
// bool ispallindrome(string s,int st,int end){
//     if(st>=end){
//           return true;
//     }
//     return ispallindrome(s,st+1,end-1);


// }

// int main(){
//     string s="heeh";
//     int n=s.size();
//     cout<<ispallindrome(s,0,n-1);
// }

// .................................INTERMEDIATE LEVEL...........
// ..................................................................print number in array

// void print(int arr[],int n){
//     if(n==0){
//         return;
//     }
//   cout<<arr[0];
//   cout<<endl;
//   print(arr+1,n-1);

// }

// int main(){
//     int arr[]={3,4,6,6,5,4,3,2};
//     print(arr,8);
// }

// ......................................................in vector

// void print(vector<int>vec,int index){
//   if(index==vec.size()){
//     return;
//   }
//  cout<<vec[index]<<endl;
//  print(vec,index+1);


// }

// int main(){
//     vector<int>vec={4,4,5,6,9};
//     print(vec,0);
// }

//..........................................................................find max and min
//  void maxmin(int arr[],int n,int &maxi,int &mini){
//     if(n==0){
//         return;
//     }
//     maxi=max(maxi,arr[0]);
//     mini=min(mini,arr[0]);
//     maxmin(arr+1,n-1,maxi,mini);
    
      
// }

// int main(){
//     int arr[]={3,5,9,1,4};
//     int maxi=0;
//     int mini=0;
//     maxmin(arr,5,maxi,mini);
// cout<<maxi<<endl;
//     cout<<mini;
    
// }


// ...........................................................................check if array is sorted

//  bool issorted(int arr[],int n){

//     if(n==1){
//         return true;

//     }
//     return arr[0]<=arr[1] && issorted(arr+1,n-1); 
    

//  }
// int main(){
//     int arr[]={1,3,5,6,7,8};
//     cout<<issorted(arr,6);
//     return 0;

//  }


//...................................................................check if vector issorted




// bool issorted(vector<int>vec,int index){
      
//       if(index==1){
//         return true;
//       }
//       return vec[index]>=vec[index-1]&& issorted(vec,index-1);

// }
// int main(){
//     vector<int>vec={2,3,4,5,6,7,8};
    
//    cout<< issorted(vec,vec.size()-1);
// }

//.....................................................................find the first and last ocuurence


// vector<int> occu(vector<int>vec,int key,vector<int>&vec2,int i){
//     if(i==vec.size()){
//         return vec2;
//     }
   
//    if(vec[i]==key){
//     vec2.push_back(i);
//    }
//    return occu(vec,key,vec2,i+1);

// } 

// int main(){
//     vector<int>vec={1,2,3,4,5,6,5};
//     vector<int>vec2;
//     occu(vec,5,vec2,0);
//     for(int x:vec2){
//         cout<<x<<endl;
//     }
//     return 0;
// }


//liner s
// bool ls(int arr[],int key,int n){
//    if(n==0){
//     return false;
//    }
//    return arr[0]==key || ls(arr+1,key,n-1);
// }
// int main(){
//     int arr[]={1,8,2,3,4,5,6};
//    cout<< ls(arr,6,7);
// }

//binary seRCH first and last pos..........................................gooooood t.c?

// vector<int> bs(vector<int>vec,vector<int>&vec2,int st,int end,int target){
//     if(st>end){
//           return vec2;
//     }
//       int mid=(st+end)/2;
//       if(vec[mid]==target){
//         vec2.push_back(mid);
//          bs(vec,vec2,mid+1,end,target);
//          bs(vec,vec2,st,mid-1,target);
        

//       }

//       else if(target>vec[mid]){
//         bs(vec,vec2,mid+1,end,target);
//       }
//       else{
//         bs(vec,vec2,st,mid-1,target);
//       }
//       return vec2;

// }
// int main(){
//     vector<int>vec={1,2,3,5,5,6};
//     vector<int>vec2;
//     int st=0;
//     int end=vec.size()-1;
//     bs(vec,vec2,st,end,5);
//     for(int x:vec2){
//         cout<<x;
//     }
// }


//reverse a string

//sum of array

//print all indices of target
// void print(int arr[],int i,int key){
//     if(i==6){
//         return;
//     }
//     if(arr[i]==key){
//         cout<<i;
//     }
//    return print(arr,i+1,key);

// }

// int main(){
//     int arr[]={1,2,3,6,5,6};
//     print(arr,0,6);
// }

//replace all ocurences


// string rep(string & s,char replacement ,char bythis,int i){
//     if(i==s.size()){
//         return s;
//     }
//     if(s[i]==replacement){
//         s[i]=bythis;
//     }
//     return rep(s,replacement,bythis,i+1);


// }
// int main(){
//     string s="mama";
//     rep(s,'m','l',0);
//     cout<<s;


// void sb(vector<int> vec, vector<int>& ans, int i) {
//     if(i == vec.size()){
//         for(int val: ans){
//             cout << val << " ";
//         }
//         cout << endl;
//         return;  // ✅ return after printing
//     }

//     // Include vec[i]
//     ans.push_back(vec[i]);
//     sb(vec, ans, i + 1);

//     // Exclude vec[i]
//     ans.pop_back();
//     sb(vec, ans, i + 1);
// }

// int main(){
//     vector<int> ans;
//     vector<int> vec = {1, 2, 3};
//     sb(vec, ans, 0);
// }















#include<iostream>
#include <algorithm> 
using namespace std;
int bs(int arr[],int st,int end,int key){
    if(st>end){
      return -1;
    }
    int mid=(st+end)/2;
    if(arr[mid]==key){
      return mid;
    }
    else if(arr[mid] < key){
        bs(arr,st,mid-1,key);
    }
    else{
        bs(arr,mid+1,end,key);
    }
   return mid;

}

int main(){
    int arr[]={1,23,4,5,6};
    int st=0;
    int end=4;
    int mid=2;
   cout<< bs(arr,st,end,4);
    return 0;
}