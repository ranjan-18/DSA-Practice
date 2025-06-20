#include<bits/stdc++.h>
using namespace std;

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
    
     int first=a[0];
     for(int i=1;i<n;i++)
     {
        a[i-1]=a[i];
     }
     a[n-1]=first;
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}