#include<bits/stdc++.h>
using namespace std;

vector<int> brute(vector<int>&a,int n)
{
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        int flag=0;
        for(int j=i;j<n;j++)
        {
            if(a[i]>=a[j])
            flag=1;
        else{
            flag=0;
            break;
        }
        }
        if(flag)
        ans.push_back(a[i]);
    }
    return ans;
}



vector<int> leader(vector<int>&a,int n)
{
    vector<int>ans;
    int maxi=a[n-1];
    ans.push_back(a[n-1]);
    for(int i=n-2;i>=0;i--)
    {
       if(a[i]>=maxi)
       {
        ans.push_back(a[i]);
        maxi=a[i];
       }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main()
{
      int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    vector<int>a(n);
    cout<<"enter the array element"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // vector<int> ans=brute(a,n);
    vector<int> ans=leader(a,n);

    cout<<"leaders will be ";
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}