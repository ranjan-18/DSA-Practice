#include<bits/stdc++.h>
using namespace std;


bool optimal(vector<int>&a,int n,int target){
    sort(a.begin(),a.end());
    int l=0,r=n-1;
    while(l<r){
        if(a[l]+a[r]==target)
        return true;
        else if(a[l]+a[r]<target)
        l++;
        else
        r--;
    }
    return false;
}

bool better(vector<int>&a,int n,int target){
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int more=target-a[i];
        if(mp.find(more)!=mp.end())
        {
            return true;
        }
        mp[a[i]]=i;
    }
    return false;
}




bool brute(vector<int>&a,int n,int target){
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==target)
            return true;

        }
    }
    return false;
}


int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    vector<int>a(n);
    cout<<"enetr the elemnt in the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    int target;
    cout<<"enter target you want to achieve"<<endl;
    cin>>target;
    // bool ans=brute(a,n,target);
    // bool ans=better(a,n,target);
    bool ans=optimal(a,n,target);
    cout<<"2Sum is possible "<<ans<<endl;

}