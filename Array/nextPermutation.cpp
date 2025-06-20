#include<bits/stdc++.h>
using namespace std;

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
    vector<int> ans=nextPermutation(a,n);
    cout<<"next permutation will be ";
    for(int i=0;i<n;i++)
    {
        cout<<ans[i];
    }
    return 0;
}