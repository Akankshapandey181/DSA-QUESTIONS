#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={2,2,1,1,1,2,2};
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int count=1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            count ++;
        }else{
            count=1;
        }
        if(count>n/2){
        cout<<arr[i];
        break;
        }

    }

    

    
}