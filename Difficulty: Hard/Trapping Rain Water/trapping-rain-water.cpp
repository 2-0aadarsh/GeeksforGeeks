//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {

    // Function to find the trapped water between the blocks.
  public:
    vector<int> leftmax(vector<int>& arr) {
        vector<int> ans(arr.size());
        ans[0] = arr[0];
    
        for (int i = 1; i < arr.size(); i++)
        {
            ans[i] = max(ans[i-1],arr[i]);
        }
        return ans;
    }

    vector<int> rightmax(vector<int>& arr) {
        vector<int> ans(arr.size());
        ans[arr.size()-1] = arr[arr.size()-1];
    
        for (int i = arr.size()-2; i>=0; i--)
        {
            ans[i] = max(arr[i], ans[i+1]);
        }
        return ans;
    }
    
    long long trappingWater(vector<int> &arr) {
        // code here
        long long area = 0;
        vector<int> lmax = leftmax(arr);
        vector<int> rmax = rightmax(arr);
        
        for(int i=0; i<arr.size(); i++) {
            area += min(lmax[i], rmax[i])-arr[i];
        }
        return area;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        long long res = ob.trappingWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends