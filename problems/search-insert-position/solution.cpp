class Solution {
    public:
    int searchInsert(vector<int>& nums, int target) {
        int N = nums.size();
        if (N < 1) return -1;

        int left = 0, right = N - 1;
        while (right >= left) {
            int mid = left + (right - left) / 2; 
            if (nums[mid] == target) return mid;
            else if (nums[mid] > target) right = mid - 1;
            else if (nums[mid] < target) left = mid + 1;
        }

        return left; 

    }
};
