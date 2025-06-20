#include<iostream>
using namespace std;
int maxele(int a[],int n){
   int maxi=a[0];
   for(int i=1;i<n;i++)
   {
    if(a[i]>maxi)
    {
        maxi=a[i];
    }
}
return maxi;
}
int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the element"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=maxele(a,n);
    cout<<"max element is "<<ans;
    return 0;
}