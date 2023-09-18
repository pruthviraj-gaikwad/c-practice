//{ Driver Code Starts
//Initial Template for C

#include<stdio.h>
#include<stdbool.h>


// } Driver Code Ends
//User function Template for C

int peakElement(int arr[], int n)
{
   // Your code here
   int max,q;
   int index;
   if(n==1) return 0;
   if(n<3)
   {
       if(arr[0]==arr[1]) return 0;
       if(arr[0]<arr[1])
       {
         q=arr[0];
         arr[0]=arr[1];
         arr[1]=q;
         if (arr[0]>arr[1]) return 1;
       }
       
       
   }
   if(n>=3)
   {
   max=arr[0];
   index=0;
   for(int i=0;i<n-1;i++){
       if(max<arr[i+1])
       {   
           index =i+1;
           max=arr[i+1];
       }
   }
   return index;
   }
}


//{ Driver Code Starts.

int main() {
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int a[n], tmp[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d", &a[i]);
			tmp[i] = a[i];
		}
		bool f=0;
		
		int A = peakElement(tmp,n);
		
		if(A<0 && A>=n)
		    printf("0\n");
		else
		{
    		if(n==1 && A==0)
    		    f=1;
    		else if(A==0 && a[0]>=a[1])
    		    f=1;
    		else if(A==n-1 && a[n-1]>=a[n-2])
    		    f=1;
    		else if(a[A]>=a[A+1] && a[A]>= a[A-1])
    		    f=1;
    		else
    		    f=0;
    		printf("%d\n", f);
		}
		
	}

	return 0;
}
// } Driver Code Ends