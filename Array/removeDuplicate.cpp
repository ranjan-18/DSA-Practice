#include<bits/stdc++.h>
using namespace std;
// array is sorted

vector<int> BruteRemoveDuplicate(vector<int>&a,int n){
    vector<int>ans;
    ans.push_back(a[0]);

    for(int i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
        ans.push_back(a[i]);
    }
    return ans;
}


vector<int> OptimalRemoveDuplicate(vector<int>&a,int n){
    int j=0;
    for(int i=1;i<n;i++)
{
    if(a[i]!=a[j])
    {
        j++;
        a[j]=a[i];
    }
}
}
 


int main(){
 int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    vector<int>a(n);
    cout<<"enter the element"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
  vector<int>temp=BruteRemoveDuplicate(a,n);
    cout<<"sorted array is ";

    for(auto i:temp)
    {
        cout<<i;
    }
}