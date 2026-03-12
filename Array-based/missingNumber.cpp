#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
        
    }
    int total=n*(n+1)/2;
    int missingElement=total-sum;

    cout<<missingElement;
}
