#include<bits/stdc++.h>
using namespace std;


int main() {
    vector<int>v{1, 8, 5, -4, 0};
    
    int arr[v.size()];
    int arr2[v.size()];
    
    // copy vector to array
    copy(v.begin(), v.end(), arr);
    
    // copy array to array 
    copy(arr, arr+(v.size()), arr2);
    
    
    for(int val:arr) cout<<val<<" ";
    cout<<"\n";
    
    for(int val:arr2) cout<<val<<" ";
    cout<<"\n";
    
    return 0;
}
