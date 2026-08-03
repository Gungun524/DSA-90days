#include <iostream>
#include <climits>
using namespace std;
 void print(int *arr,int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//Problem: sorting array.
//Approach: Counting Sort.
//Time complexity: O(n+k) where n is the number of elements in input array and k is the range of input.
void countingsort(int *arr,int n){
    int freq[100000];
    int minval=INT_MAX;
    int maxval=INT_MIN;
    for(int i =0;i<n;i++){
        minval = min(minval,arr[i]);
        maxval = max(maxval,arr[i]);

    }
    //1st step: frequency array.
    for(int i = 0;i<n;i++){
        freq[arr[i]]++;

    }
    //2nd step: sorting the array using frequenncy array.
    for(int i = minval,j = 0;i<=maxval;i++){
        while(freq[i]>0){
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }
    print(arr,n);
}
int main(){
    int array[] = {1,4,1,3,2,4,3,7};
    int length = sizeof(array)/sizeof(int);
    countingsort(array,length);
    return 0;
}