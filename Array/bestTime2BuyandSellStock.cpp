#include<bits/stdc++.h>
using namespace std;

    int brute(vector<int>&a,int n){
        int profit=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[j]>a[i])
                profit=max(profit,a[j]-a[i]);
            }
        }
        return profit;
    }
    int proftInStock(vector<int>&a,int n){
        int profit=0;
        int cost=a[0];
        for(int i=1;i<n;i++)
        {
            profit=max(profit,a[i]-cost);
            cost=min(cost,a[i]);
        }
        return profit;
    }

int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    vector<int>a(n);
    cout<<"enter the array element"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // int ans=proftInStock(a,n);
    int ans=brute(a,n);

    cout<<"maximum profit in buying and selling stock is "<<ans;
    return 0;

}