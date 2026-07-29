#include <iostream>
#include <climits>
using namespace std;
//Problem: find maxsubarraysum. 
//Approach a: Brute Force Algorithm.
//Time complexity: O(n^3).
void maxSubarraySum(int *arr,int n){
     int maxsum = INT_MIN;
    for(int  start = 0;start<n;start++){
        for(int end = start;end<n;end++){
            int currsum = 0 ;
            for(int i = start; i<=end;i++){
                currsum += arr[i];
            }
            cout<<currsum<<" ";
            maxsum = max(maxsum,currsum);
        }
        cout<<endl;
        
    }
    cout<<"maxsum using approach a :"<<maxsum<<endl;
}
//Approach b: Slightly Optimized .
//Time Complexity: O(n^2).
void maxSubarraySum2(int *arr,int n){
    int maxsum = INT_MIN;
    for(int start =0; start<n;start++){
        int currsum=0;
        for(int  end = start; end<n;end++){
            currsum += arr[end];
            maxsum = max(maxsum,currsum);
        }
    }
    cout<<"maxsum  using approach b :"<<maxsum<<endl;
}
//Approach c: Kadanes Algorithm .
//Time Complexity: O(n).
void maxSubarraySum3(int *arr,int n){
    int currsum=0;
    int maxsum = INT_MIN;
    for(int i =0;i<n;i++){
        currsum +=arr[i];
        maxsum = max(maxsum,currsum);
        if(currsum<0){
            currsum=0;
        }
    }
    cout<<"maxsum using approch c :"<<maxsum<<endl;

}
int main(){
     int array[]={2,-3,6,-5,4,2};
     int length = sizeof(array)/sizeof(int);
     maxSubarraySum(array,length);
      maxSubarraySum2(array,length);
       maxSubarraySum3(array,length);

}

