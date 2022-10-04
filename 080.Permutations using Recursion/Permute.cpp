
// A Permutation is a rearrangement of members of a sequence into a new sequence.
// problem: Given an array nums of distinct integers return all the possible permutations. You can return the answer in any order.

#include "bits/stdc++.h"
using namespace std;
vector<vector<int>> ans;

void permute(vector<int> &a, int idx) // recursive function
{
    if(idx == a.size()){
        ans.push_back(a);
        return;
    }
    for(int i= idx;i<a.size();i++){
        swap(a[i],a[idx]);
        permute(a,idx+1);
        swap(a[i],a[idx]);
    }
    return;
}

int32_t main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i : a) 
        cin>>i;
    permute(a,0); // calling recursive function. 
    for(auto v : ans)
    {
        for(auto i : v)
        cout<<i<<" ";
        cout<<"\n";
    }
    return 0;
}
