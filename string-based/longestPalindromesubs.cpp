#include<bits/stdc++.h>
using namespace std;

int expand(string s,int left,int right){

    while(left>=0 && right<s.size() && s[left]==s[right]){
        left--;
        right++;
    }

    return right-left-1;
}

int main(){

    string s="babad";

    int start=0;
    int maxLen=0;

    for(int i=0;i<s.size();i++){

        int odd=expand(s,i,i);
        int even=expand(s,i,i+1);

        int len=max(odd,even);

        if(len>maxLen){
            maxLen=len;
            start=i-(len-1)/2;
        }
    }

    cout<<s.substr(start,maxLen);
}