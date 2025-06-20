#include<bits/stdc++.h>
using namespace std;


int ls(vector<int>&a,int n,int target){
    for(int i=0;i<n;i++)
    {
        if(a[i]==target)
        return i;
    }
    return -1;
}
int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    vector<int>a(n);
    cout<<"Enter the element"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    int target;
    cout<<"enter the target you want to achieve"<<endl;
    cin>>target;
    int ans=ls(a,n,target);
    cout<<"element fount at index "<<ans<<endl;

}