#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="Move#To#Front#";
    string s1="";
    string s2="";

    for(char c : s){
        if(c=='#'){
            s1=s1+c;
        }else{
            s2=s2+c;
        }
    }

   

    string res=s1+s2;

    cout<<res;


    // int pos=0;

    // for(int i=0;i<s.size();i++){
    //     if(s[i]=='#'){
    //         swap(s[i],s[pos]);
    //         pos++;
    //     }
    // }
    // cout<<s;
    
}