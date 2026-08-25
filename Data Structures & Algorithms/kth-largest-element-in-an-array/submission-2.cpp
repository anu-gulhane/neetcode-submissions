class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> min_heap;

        int s=0;
        for(int i:nums){
            s++;
            min_heap.push(i);
            if(s>k)min_heap.pop();
        }
        return min_heap.top();
    }
};
