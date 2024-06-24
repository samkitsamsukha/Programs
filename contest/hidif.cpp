#include<cmath>
#include<vector>
#include<iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        // n = length
        // k = max integer
        int nums[n];
        int original = 0;
        for(int i = 0; i<n; i++){
            cin >> nums[i];
        }
        for(int i = 0; i<n-1; i++){
            original = original + abs(nums[i]-nums[i+1]);
        }
        int maxi = INT_MIN;
        for(int i = 0; i<n; i++){
            for(int j = 1; j<=k; j++){
                int newsum = original;
                // if(i>0){
                //     newsum = newsum - abs(nums[i] - nums[i-1]);
                //     newsum = newsum + abs(j - nums[i-1]);
                // }
                // if(i<n-1){
                //     newsum = newsum - abs(nums[i] - nums[i+1]);
                //     newsum = newsum + abs(j - nums[i+1]);
                // }
                
                maxi = max(maxi, newsum);
            }
        }
        cout << maxi << endl;
    }
}
