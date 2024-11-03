//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    /* Returns count of pairs with difference k  */
    int countPairsWithDiffK(vector<int>& arr, int k) {
        // code here
        // set<pair<int, int> >st;
        
        // for(int i=0; i<nums.size()-1; i++) {
        //     for(int j=i+1; j<nums.size(); j++) {
        //         pair<int, int> p;
        //         if(abs(nums[i]-nums[j]) == k) {
        //             p.first = nums[i];
        //             p.second = nums[j];
        //             st.insert(p);
        //         }
        //     }
        // }
        // // return st.size();
        // int count =0;
        // for(int i =0 ; i<= arr.size()-1; i++){
        //     for(int j =0 ; j<= arr.size()-1; j++){
            
        //     if(arr[i]- arr[j] == k){
        //         count++;
        //     }
            
        // } 
        // }
        // return count;
         map<long long,long long>mp;

        for(auto it: arr)mp[it]++;

        int cnt=0;

        for(auto it:arr) cnt+=mp[it+k];

        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        auto ans = ob.countPairsWithDiffK(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends