#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    
    for(int i=0;i<n-1;i++){
        bool flag=false;
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                j++;
                flag=true;

            }
        }
        if(flag==false && i==1){
            cout<<"yes";
            break;
        }
        
    }
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    
    

return 0;
}