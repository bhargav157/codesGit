#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)cin>>arr[i];

    int lo=0;
    int hi=n-1;
    int target;
    cin>>target;

    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(arr[mid]==target && arr[mid-1]!=target){
            cout<<mid<<" ";
            break;
        }
        
        else if(arr[mid]>=target)hi=mid-1;
        else if(arr[mid]<target)lo=mid+1;
        
    }

return 0;
}