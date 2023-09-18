#include <stdio.h>

struct pair {
    long long int min;
    long long int max;
};

struct pair getMinMax(long long int arr[], long long int n) ;

int main() {
    long long int t, n, a[100002], i;
    struct pair minmax;

    scanf("%lld", &t);
    while (t--) {
        scanf("%lld", &n);

        for (i = 0; i < n; i++) scanf("%lld", &a[i]);
        minmax = getMinMax(a, n);
        printf("%lld %lld\n", minmax.min, minmax.max);
    }
    return 0;
}

struct pair getMinMax(long long int arr[], long long int n) {
    struct pair p;
    p.min=arr[0];
    p.max=arr[0];
   /* if(n<2)
    {
    if(p.max<arr[1]) 
    {
        p.max=arr[1];
        p.min=arr[0];
    }
    else 
    {
        p.max=arr[0];
        p.min=arr[1];
    }
    }*/
    //if(n>=2)
   // {
    for(int i=1;i<n;i++)
    {
        if(p.min>arr[i])
        {
            p.min=arr[i];
        }
        if(p.max<arr[i])
        {
            p.max=arr[i];
        }
    }
  //  }
    return (p);
}