#include<bits/stdc++.h>
using namespace std;

vector<int>arr={1,3,4,2,3};

int main(){
    set<int>st;

    for(int it : arr){
        if(st.count(it)){
            cout<<it;
            break;
        }else{
            st.insert(it);
        }
    }

    
}
