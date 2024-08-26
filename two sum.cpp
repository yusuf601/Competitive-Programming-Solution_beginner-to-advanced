#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> numToIndex;

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numToIndex.count(complement)) {
            return {numToIndex[complement], i};
        }
        numToIndex[nums[i]] = i;
    }

    return {}; // Jika tidak ditemukan pasangan
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);
    if (!result.empty()) {
        cout << "Index dari dua angka yang jumlahnya " << target << " adalah: [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "Tidak ditemukan pasangan angka yang jumlahnya " << target << endl;
    }

    return 0;
}