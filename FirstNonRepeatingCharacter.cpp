#include <bits/stdc++.h>
using namespace std;

int main() {
    string x;
    cin>>x;
    int len=x.length();
    for(int i=0;i<len;i++){
        int count=0;
        for(int j=0;j<len;j++){
            if(x[i]==x[j]){
                count++;
            }
        }
        if(count==1){
            cout<<x[i];
            return 0;
        }
    }
    cout<<"-1";
    return 0;
}