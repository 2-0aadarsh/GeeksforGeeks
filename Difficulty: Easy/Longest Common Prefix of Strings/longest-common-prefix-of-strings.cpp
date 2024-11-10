//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> strs) {
        // your code here
        sort(strs.begin(), strs.end());
        string ans = "";
        int s = 0; int e = strs.size()-1;
        string first = strs[s];
        string last = strs[e];

        int firstSize = first.size();
        int lastSize = last.size();

        int index = 0;
        while(index < min(firstSize, lastSize) ){
            if(first[index] != last[index]) break;
            else {
                ans += first[index];
                index++;
            }
        }
        if(ans.size()>0) {
            return ans;
        } else {
           ans = "-1";
           return ans;
        }

    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends