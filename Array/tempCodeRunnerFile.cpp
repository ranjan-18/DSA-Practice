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