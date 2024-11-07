//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // Your code goes here
        int p = 0; int n = 0;
        
        vector<int> neg;
        for(int i=0; i<arr.size(); i++) {
            if(arr[i] < 0) {
                neg.push_back(arr[i]);
            }
        }
        
        while(p< arr.size()) {
            if(arr[p]<0) p++;
            else {
                swap(arr[p++], arr[n++]);
            }
        }
        int i=0;
        for(n; n<arr.size(); n++) {
            arr[n] = neg[i++];
        }
        
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        ob.segregateElements(nums);

        for (int x : nums)
            cout << x << " ";
        cout << "\n~\n";
    }
}
// } Driver Code Ends