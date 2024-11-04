//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            // code here
            string res;
            set<char> uniqueChars;
            
            // Check characters in A not in B
            for (char a : A) {
                if (B.find(a) == std::string::npos) {
                    uniqueChars.insert(a);
                }
            }
        
            // Check characters in B not in A
            for (char b : B) {
                if (A.find(b) == std::string::npos) {
                    uniqueChars.insert(b);
                }
            }
        
            // Convert set to string
            for (char ch : uniqueChars) {
                res += ch;
            }
            
            sort(res.begin(), res.end());
            return res.empty() ? "-1" : res;
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends