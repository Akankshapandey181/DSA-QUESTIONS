#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
        int smallest=INT_MAX;
        for(int i=0;i<n;i++){
            if(smallest>arr[i]){
                smallest=arr[i];
            }
            
        }
        int largest=INT_MIN;
        for(int i=0;i<n;i++){
            if(largest<arr[i]){
                largest=arr[i];
            }
        }
        int secondSmallest=INT_MAX;
        for(int i=0;i<n;i++){
            if(secondSmallest>arr[i] && smallest<arr[i]){
                secondSmallest=arr[i];
            }
        }
        int secondLargest=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>secondLargest && arr[i]<largest){
                secondLargest=arr[i];
            }
        }
        if(secondLargest==INT_MIN){
            cout<<"-1";
        }else{
            cout<<secondLargest<<" ";
        }

        if(secondSmallest==INT_MAX){
            cout<<"-1";
        }else{
            cout<<secondSmallest;
        }
    
}