#include<bits/stdc++.h>
using namespace std;

vector<int> brute(vector<int>&a,int n,int target){
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==target)
            return{i,j};
        

        }
    }
    return {-1,-1};
}




vector<int>better(vector<int>&a,int n,int target){
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int more=target-a[i];
        if(mp.find(more)!=mp.end())
        return {mp[a[i]],i};
        mp[a[i]]=i;
    }
    return {-1,-1};
    
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
    // vector<int> ans=brute(a,n,target);
    vector<int> ans=better(a,n,target);
    cout<<"index of pair of element "<<ans[0]<<" "<<ans[1]<<endl;
}