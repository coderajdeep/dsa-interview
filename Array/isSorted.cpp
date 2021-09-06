// Recursive approach

bool arraySortedOrNot(int arr[], int n) {
    // code here
    if(n==0 or n==1)
        return true;
    return (arr[0]<=arr[1]) and arraySortedOrNot(arr+1, n-1);
}


// Recursive approach

bool arraySortedOrNot(int arr[], int n) {
    // code here
    if(n==0 or n==1)
        return true;
    // last pair is not sorted    
    if(arr[n-2] > arr[n-1])
        return false;
    // if execution reachs here that means last pair is sorted
    return arraySortedOrNot(arr, n-1);
}

// Recursive approach

bool arraySortedOrNot(int arr[], int n) {
    // code here
    if(n==0 or n==1)
        return true;
    return (arr[n-2]<=arr[n-1]) and arraySortedOrNot(arr, n-1);
}

// iterative approach

bool arraySortedOrNot(int arr[], int n) {
    // code here
    for(int i=0; i<n-1; ++i) {
        if(arr[i]>arr[i+1])
            return false;
    }
    return true;
}
