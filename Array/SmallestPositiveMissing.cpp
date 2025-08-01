#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        // code here
        int n = arr.size();
        int result = 0;
         
         for( int i =0; i< n ; i++){
             while(arr[i] > 0 && arr[i] <= n  && arr[arr[i]-1] != arr[i]){
                 swap ( arr[i],arr[arr[i]-1]);
             }
             
         }
         for(int i=0; i<n; i++){
             if(arr[i] != i+1){
                 return i+1;
             }
         }
         return n+1;
        
    }
};


int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    Solution sol;
    cout << sol.missingNumber(arr) << endl;
    return 0;
}