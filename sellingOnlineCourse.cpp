#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x;
    cin>>x;
    if(x==0){
        cout<<0;
        return 0;
    }
    long long minCourse=(500+x-1)/x;
    cout<<minCourse;
    return 0;
}