#include<iostream>
using namespace std;
#include<vector>



class Solution {
  public:
    int subarraySum(vector<int>& arr) {
        // code here
        int n = arr.size();
        long long total =0;
        
        for(int i =0; i<n; i++){
             total += (long long)arr[i] * (i + 1) * (n - i);
        }
        return total;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    Solution obj;
    cout << obj.subarraySum(arr) << endl;
    return 0;
}