#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxEle=-1;
    for(int i=0;i<n;i++){
        if(maxEle<arr[i]){
            maxEle=arr[i];
        }
    }
    int minEle=INT_MAX;
    for(int i=0;i<n;i++){
        if(minEle>arr[i]){
            minEle=arr[i];
        }
    }

    int secMax=-1;
    for(int i=0;i<n;i++){
        if(secMax<arr[i] && arr[i]<maxEle){
            secMax=arr[i];
        }
    }

    int secMin=INT_MAX;
     for(int i=0;i<n;i++){
        if(secMin>arr[i] && arr[i]>minEle){
            secMin=arr[i];
        }
    }
    if(secMax==-1){
    cout<<"-1 ";
    }else{
    cout<<secMax<<" ";
    }
  
    if(secMin==INT_MAX){
        cout<<"-1";
    }else{
        cout<<secMin;
    }

   


    
    
}