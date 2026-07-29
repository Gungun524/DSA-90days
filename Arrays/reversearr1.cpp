//Problem: reverse the array with 
//Approach:using  extra space
//Time Complexity: O(n)
#include <iostream>
using namespace std ;
void reversearr(int *arr,int n){
     cout<<n<<"\n";
    int copyarr[n];
    for(int i =0;i<n;i++){
        int j = n-i-1;
        copyarr[j]=arr[i];
    }
    cout<< "reverse array:"<<"[";
    for(int i =0;i<n;i++){
        arr[i] = copyarr[i],
        cout<<arr[i]<<" ";
    }
    cout<<"]";
     
}
int main(){
   int marks[] ={5,4,3,9,2};
   int length=sizeof(marks)/sizeof(int);
   reversearr(marks,length);
    return 0;

}
