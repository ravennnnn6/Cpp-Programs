#include <iostream>
#include <vector>
#include <climits>
using namespace std;


// brute force approach
vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;
    int n= nums.size();

    for(int i = 0; i<n; i++){
        for(int j = i+1; j< n; j++){
            if(nums[i] + nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }

    return ans;
}


int main(){
    vector<int> nums = {2, 3, 41, 45 };
    int target = 44;

    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << " , " << ans[1] << endl;
    return 0;
}