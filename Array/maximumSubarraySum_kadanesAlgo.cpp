#include<bits/stdc++.h>
using namespace std;




int maxSubarraySum(vector<int>&a,int n){
   int maxi=INT_MIN;
   int sum=0;
   for(int i=0;i<n;i++)
   {
    sum+=a[i];

    maxi=max(maxi,sum);
    
    if(sum<0)
    sum=0;
   }
   return maxi;
}





int better(vector<int>&a,int n)
{
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
         sum+=a[j];
         maxi=max(maxi,sum);   
        }
    }
    return maxi;
}






int brute(vector<int>&a,int n)
{
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum=0;
            for(int k=i;k<=j;k++)
            {
                sum+=a[k];
            }
            maxi=max(sum,maxi);
        }
    }
    return maxi;
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
    int ans=brute(a,n);
    cout<<"maximum subarray sum is "<<ans<<endl; 
}