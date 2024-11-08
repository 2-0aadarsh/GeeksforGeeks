//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        vector<int> pos;
        vector<int> neg;
        vector<int> ans;
        
        for(int i=0; i<arr.size(); i++) {
            if(arr[i]>=0) pos.push_back(arr[i]);
            if(arr[i]<0) neg.push_back(arr[i]);
        }
        
        int posSize = pos.size();
        int negSize = neg.size();
        
        int index = 0;
        for(index; index< min(posSize,negSize); index++) {
            ans.push_back(pos[index]);
            ans.push_back(neg[index]);
        }
        
         // Add remaining positive numbers
        for(int i = index; i < posSize; i++) {
            ans.push_back(pos[i]);
        }
    
        // Add remaining negative numbers
        for(int i = index; i < negSize; i++) {
            ans.push_back(neg[i]);
        }

        
        for(int i=0; i<ans.size(); i++){
            arr[i] = ans[i];
        }
        
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
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends