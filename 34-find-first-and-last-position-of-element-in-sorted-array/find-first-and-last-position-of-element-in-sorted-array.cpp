class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2, -1); // Initialize with -1 for both first and second occurrences
        /*int l = 0, h = nums.size() - 1;
    while(l <= h) {
        if(nums[l] == target && nums[h] == target) {
            result[0] = l;
            result[1] = h;
            break;
        }
        if(nums[l] == target) 
            result[0] = l;
        if( nums[h] == target) 
            result[1] = h;
        if( nums[l] < target) 
            l++;
        if(nums[h] > target) 
            h--;
        
    }
    return result;*/
        // Find the first occurrence of target
        int l = 0, h = nums.size() - 1;
        int firstIndex = -1;

        while (l <= h) {
            int mid = l + (h - l) / 2;
            if (nums[mid] < target) {
                l = mid + 1;
            } else if (nums[mid] > target) {
                h = mid - 1;
            } else {
                firstIndex = mid;
                h = mid - 1; // Continue to search on the left side
            }
        }

        if (firstIndex != -1) {
            result[0] = firstIndex;
            
            // Find the second occurrence of target
            l = firstIndex + 1;
            h = nums.size() - 1;
            int secondIndex = -1;

            while (l <= h) {
                int mid = l + (h - l) / 2;
                if (nums[mid] < target) {
                    l = mid + 1;
                } else if (nums[mid] > target) {
                    h = mid - 1;
                } else {
                    secondIndex = mid;
                    l = mid + 1; // Continue to search on the right side
                }
            }

            // If the target occurs only once, the second index should be the same as the first
            result[1] = (secondIndex == -1 && result[0] != -1) ? result[0] : secondIndex;
        }

        return result;
    }
};