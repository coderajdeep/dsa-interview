#include<bits/stdc++.h>
using namespace std;

// Recursive approach
void reverseArray(int arr[], int n) {
    if(n==1 or n==0)
        return;
    swap(arr[0], arr[n-1]);
    reverse(arr+1, n-1);
}

void Swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

void Reverse(int arr[], int n) {
    int l = 0, r = (n - 1);
    while(l<r) {
        Swap(arr[l++], arr[r--]);
    }
}


int main() {
    int t;
    cin>>t;
    
    while(t--) {
        int n;
        cin>>n;
        int arr[n];
        int arr2[n];
        
        for(int i=0; i<n; ++i)
            cin>>arr[i];
        
        vector<int>arr3(arr, arr+n);
        copy(arr3.begin(), arr3.end(), arr2);
        
        cout<<"Before reverse : ";
        for(int val:arr) {
            cout<<val<<" ";
        }
        cout<<"\n";
        Reverse(arr, n);
        cout<<"After reverse : ";
        for(int val:arr) {
            cout<<val<<" ";
        }
        cout<<"\n\n";
        
        
        cout<<"Before reverse : ";
        for(int val:arr2) {
            cout<<val<<" ";
        }
        cout<<"\n";
        
        reverse(arr2, arr2+n);
        
        cout<<"After reverse : ";
        for(int val:arr2) {
            cout<<val<<" ";
        }
        cout<<"\n\n";
        
        cout<<"Before reverse : ";
        for(int val:arr3) {
            cout<<val<<" ";
        }
        cout<<"\n";
        
        reverse(arr3.begin(), arr3.end());
        
        cout<<"After reverse : ";
        for(int val:arr3) {
            cout<<val<<" ";
        }
        cout<<"\n\n";
    }
    return 0;
}
