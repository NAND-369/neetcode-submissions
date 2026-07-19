class Solution {
public:
    int findMax(vector<int>& piles) {
        int maxi = INT_MIN;
        for (int bananas : piles) {
            maxi = max(maxi, bananas);
        }
        return maxi;
    }

    long long calculateTotalHours(vector<int>& piles, int speed) {
        long long totalHours = 0;

        for (int bananas : piles) {
            totalHours += ceil((double)bananas / speed);
        }

        return totalHours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        int low = 1;
        int high = findMax(piles);

        while (low <= high) {
            int mid = low + (high - low) / 2;

            long long totalHours = calculateTotalHours(piles, mid);

            if (totalHours <= h) {
                high = mid - 1;  
            } else {
                low = mid + 1;   
            }
        }

        return low;
    }
};