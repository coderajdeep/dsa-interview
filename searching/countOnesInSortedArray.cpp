#include<bits/stdc++.h>
using namespace std;

// Array is in non-decreasing order
int firstOccurr(int arr[], int n) {
	int low = 0, high = n-1, mid;
	while(low<=high) {
		mid = low + ((high - low) / 2);
		if(arr[mid]<1)
			low = mid + 1;
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
int lastOccurr(int arr[], int n) {
	int low = 0, high = n-1, mid;
	while(low<=high) {
		mid = low + ((high - low) / 2);
		if(arr[mid]<1) 
			low = mid + 1;
		else {
			//  || (arr[mid+1]!=arr[mid]) - this portion is not required in if condition
			if(mid==(n-1))
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

		
		int l = upper_bound(arr, arr+n, 1) - arr;
		int f = lower_bound(arr, arr+n, 1) - arr;

		//cout<<l<<" "<<f<<"\n";

		int ans = (upper_bound(arr, arr+n, 1) - lower_bound(arr, arr+n, 1));
		int first = firstOccurr(arr, n);
		if(first==-1){
			cout<<0<<" "<<ans<<" "<<(l-f)<<"\n";
			break;
		}
		int last = lastOccurr(arr, n);
		cout<<(last - first + 1)<<" "<<ans<<" "<<(l-f)<<"\n";
	}
	return 0;
}


/**

input
3
7 1
0 0 0 0 1 1 1
5 1
1 1 1 1 1
5 1
0 0 0 0 0

output
3 3 3
5 5 5
0 0 0

**/
