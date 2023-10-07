//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> sortArr(vector<int> arr, int n)
    {
        // complete the function here
        for (int i = 1; i < n; i++)
        {
            int y = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > y)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = y;
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> s(n);
        for (int i = 0; i < n; i++)
            cin >> s[i];
        Solution ob;
        vector<int> v = ob.sortArr(s, n);
        for (auto i : v)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends