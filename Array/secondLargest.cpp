    int print2largest(int arr[], int arr_size) {
    	//code here.
    	int maxOne = -((~0u)/2)-1;
    	int maxTwo = -((~0u)/2)-1;
    	
    	for(int i=0; i<arr_size; ++i) {
    	    if(arr[i]>maxOne) {
    	        maxTwo = maxOne;
    	        maxOne = arr[i];
    	    }
    	    
    	    /**
    	     * 
    	     * else if(arr[i]>maxTwo)
    	     * this condition will pass (arr[i]==maxOne) value
    	     * 
    	     **/ 
    	    
          // this condition is important
        
    	    else if(arr[i]>maxTwo and arr[i]<maxOne) {
    	        maxTwo = arr[i];
    	    }
    	}
    	
    	if(maxTwo == (-((~0u)/2)-1))
    	    return -1;
    	else
    	    return maxTwo;
    }
