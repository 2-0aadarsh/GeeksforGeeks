//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    // Should return true if there exists a triplet in the
    // array arr[] which sums to x. Otherwise false
    
    void twoSum(vector<int>& nums, int target, int start, int end, vector<vector<int>>& ans) {
        while(start<end) {
            if(nums[start]+nums[end] > target) {
                end--;
            } 
            else if(nums[start]+nums[end] < target) {
                start++;
            } 
            else {
                while(start<end && nums[start] == nums[start+1]) start++;
                while(start<end && nums[end] == nums[end-1]) end--;

                ans.push_back({-target, nums[start], nums[end]});
                start++; end--;
            }
        }
    }
    
    bool find3Numbers(int arr[], int n, int x) {
        // Your Code Here
        if(n<3) {
            return false;
        }
        
        vector<vector<int>> ans;
        vector<int> nums;
        
        for(int i=0; i<n; i++) {
            nums.push_back(arr[i]);
        }
        
        sort(nums.begin(), nums.end());

        for(int i=0; i<(n-2); i++) {
            if(i>0 && nums[i] == nums[i-1]) {
                continue;
            } 
        
            int n1 = nums[i];
            int target = -n1+x;
            twoSum(nums, target, i+1, n-1, ans); 
        }
        
        if(ans.size()>0) {
            return true;
        } else {
            return false;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, X;
        cin >> n >> X;
        int i, A[n];
        for (i = 0; i < n; i++)
            cin >> A[i];
        Solution ob;
        cout << ob.find3Numbers(A, n, X) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends