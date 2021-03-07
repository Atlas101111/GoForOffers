/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        // 先对结果进行排序
        sort(nums.begin(), nums.end());
        auto left = nums.begin(), right = nums.end();
        left += (right - left) / 2;
        right -= (right - left) / 2;

        bool flag = false;
        while(!flag && (left != nums.begin() && right != nums.end()) ){
            int temp = *left + *right;
            if (temp == target && left != right){
                flag = true;
                break;
            }
            if (temp < target)
                ++right;
            else
                --left;
        }
        cout << *left << *right << endl;
        // iterator<vector<int> > mid = 
        return result;
    }
};

int main(){
    ifstream fin;
    vector<int> input;
    int caseNo, target;
    fin.open("input.txt");
    while(fin >> caseNo){
        int n;
        fin >> n;
        for(int i = 0;i < n;++i){
            int x;
            fin >> x;
            input.push_back(x);
        }
        fin >> target;
    }

    auto iter = input.begin();
    while(iter != input.end()){
        iter++;
        cout << *iter;
    }

    
    Solution x = Solution();
    // cout << x.twoSum();

}
// @lc code=end

