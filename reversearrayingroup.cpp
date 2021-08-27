#include<iostream.h>

// reverse array in group

class solution{
public:
// function to reverse an array
	void reverseArray(vector<Long Long>&arr, int start, int end)
	{
	  while(start<end)
	  {
	    int temp = arr[start];
            arr[start]= arr[end];
	    arr[end] = temp;
	    start++;
	    end--;
	   }
	}
public:
//function to reverse every sub-array group of size k.
	void reverseInGroups(vector<Long Long>&arr, int n, int k)
	{
	 for(int i=0; i<n;i+=k)
	  {
		if(i+k<n)
		    reverse(arr, i, i+k-1);
		else
		    reverse(arr, i, n-1);
	}
	}
};