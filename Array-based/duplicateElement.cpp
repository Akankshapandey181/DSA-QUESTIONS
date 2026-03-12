#include<bits/stdc++.h>
using namespace std;

vector<int>arr={1,3,4,2,3};

int main(){
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]==arr[i+1]){
            cout<<arr[i];
        }

    }

    
}
