#include<bits/stdc++.h>
using namespace std;
void toh(int n, char s,char h, char d){
    if(n==0)return;
    toh(n-1,s,d,h);
    cout<<s<<"->"<<d<<" ";
    toh(n-1,h,s,d);
}
int main(){
    int n;
    cin>>n;
    toh(n,'A','B','C');

return 0;
}