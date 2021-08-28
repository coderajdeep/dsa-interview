#include<bits/stdc++.h>
using namespace std;

// Array is in non-decreasing order
int firstOccurr(int arr[], int n, int x) {
	int low = 0, high = n-1, mid;
	while(low<=high) {
		mid = low + ((high - low) / 2);
		if(arr[mid]>x) 
			low = mid + 1;
		else if(arr[mid]<x)
			high = mid - 1;
		else {
			if(mid==0 || (arr[mid-1]!=arr[mid]))
				return mid;
			else
				high = mid - 1;
		}
	}
	return -1;
}

// Array is in non-decreasing order
int lastOccurr(int arr[], int n, int x) {
	int low = 0, high = n-1, mid;
	while(low<=high) {
		mid = low + ((high - low) / 2);
		if(arr[mid]>x) 
			low = mid + 1;
		else if(arr[mid]<x)
			high = mid - 1;
		else {
			if(mid==(n-1) || (arr[mid+1]!=arr[mid]))
				return mid;
			else
				low = mid + 1;
		}
	}
	return -1;
}

int main() {
	int t;
	cin>>t;

	while(t--) {
		int n, x;
		cin>>n>>x;
		int arr[n];
		for(int i=0; i<n; ++i)
			cin>>arr[i];
		
		// Array is in non-increasing order
		// So using a compare function function
		int l = upper_bound(arr, arr+n, 1, greater<int>()) - arr;
		int f = lower_bound(arr, arr+n, 1, greater<int>()) - arr;

		//cout<<l<<" "<<f<<"\n";

		// Array is in non-increasing order
		// So using a compare function function
		int ans = (upper_bound(arr, arr+n, 1, greater<int>()) - lower_bound(arr, arr+n, 1, greater<int>()));
		int first = firstOccurr(arr, n, 1);
		if(first==-1){
			cout<<0<<" "<<ans<<" "<<(l-f)<<"\n";
			break;
		}
		int last = lastOccurr(arr, n, 1);
		cout<<(last - first + 1)<<" "<<ans<<" "<<(l-f)<<"\n";
	}
	return 0;
}


// Input

/**
3
7 1
1 1 1 0 0 0 0
5 1
1 1 1 1 1
5 1
0 0 0 0 0
**/

// Output

/**
3 3 3
5 5 5
0 0 0
**/
