#include<bits/stdc++.h>
using namespace std;

int getLargest(int arr[], int l, int r) {
	if(l==r)
		return arr[l];
	return max(arr[l], getLargest(arr, l+1, r));
}

int get_largest(int arr[], int n) {
	if(n==1)
		return arr[0];
	return max(get_largest(arr, n-1), arr[n-1]);
}

int getLargestElement(int arr[], int n) {
	if(n==1)
		return arr[0];
	return max(arr[0], getLargestElement(arr+1, n-1));
}


int main() {
	int arr[] = {6, -9, 68, 4, 0, 124, -9, 123, 1, 123};
	int n = sizeof(arr)/sizeof(arr[0]);
	vector<int>vec(arr, arr+n);
	cout<<getLargest(arr, 0, n-1)<<endl;
	cout<<get_largest(arr, n)<<endl;
	cout<<getLargestElement(arr, n)<<endl;
	cout<<*max_element(arr, arr + n)<<endl;
	cout<<*max_element(vec.begin(), vec.end())<<endl;
}
