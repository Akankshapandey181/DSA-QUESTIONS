#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    int level=0;
    int valley=0;

    for(char c: s){
        if(c=='U'){
            level++;
            if(level==0){
                valley++;
            }
        
    
    }else{
        level--;
    }
}
cout<<valley;
}
