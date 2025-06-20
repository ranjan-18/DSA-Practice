#include<bits/stdc++.h>
using namespace std;


bool BruteisSorted(vector<int>&a,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            return false;
        }
    }
    return true;
} 


bool optimalisSorted(vector<int>&a,int n){
    for(int i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        return false;

    }
    return true;
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

    // bool ans=BruteisSorted(a,n);
     bool ans=optimalisSorted(a,n);
    cout<<"array is sorted "<<ans<<endl;
}