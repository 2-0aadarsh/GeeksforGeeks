//{ Driver Code Starts
// C++ program to check if two strings are isomorphic

#include <bits/stdc++.h>

using namespace std;
#define MAX_CHARS 256


// } Driver Code Ends
class Solution {
  public:
    // Function to check if two strings are isomorphic.
    bool areIsomorphic(string &str1, string &str2) {

        // Your code here
        if(str1.length() != str2.length()) return false;
        
        vector<int> s1(26,0);
        vector<int> s2(26,0);
        for(int i=0; i<str1.size(); i++) {
            int index = int(str1[i]) - 'a';
            
            s1[index]++;
        }
        
        int countChar1 = 0;
        for(int i=0; i<s1.size(); i++){
            if(s1[i] >0) countChar1++;
            
        }
        
        // for str2
        for(int i=0; i<str2.size(); i++) {
            int index = int(str2[i]) - 'a';
            
            s2[index]++;
        }
        
        int countChar2 = 0;
        for(int i=0; i<s2.size(); i++){
            if(s2[i] >0) countChar2++;
            
        }
        
        if(countChar1 != countChar2) {
            return false;
        } 
        
        else{
           
            if(str1.length() != str2.length()) return false;

        vector<int> arr(150, INT_MAX);
        // in str1 pov 
        for (int i = 0; i < str1.length(); i++)
        {
            int index = int(str1[i]);
            if(arr[index] == INT_MAX) {
                arr[index] = str1[i]-str2[i];
            } 
            else if(arr[index] != str1[i]-str2[i]) return false;
        }

        // in str2 pov
        for (int i = 0; i < 150; i++) arr[i] = INT_MAX;

        for (int i = 0; i < str2.length(); i++)
        {
            int index = int(str2[i]);

            if(arr[index] == INT_MAX) arr[index] = str2[i]-str1[i];
            else if(arr[index] != str2[i]-str1[i]) return false;
        }
        
        return true;   
           
        }
    }
};

//{ Driver Code Starts.

// Driver program
int main() {
    int t;
    cin >> t;
    string s1, s2;
    while (t--) {
        cin >> s1;
        cin >> s2;
        Solution obj;
        int r = obj.areIsomorphic(s1, s2);
        if (r) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends