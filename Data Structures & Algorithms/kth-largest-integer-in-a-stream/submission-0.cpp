class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>>min_heap;
    int s=0,kk;
    KthLargest(int k, vector<int>& nums) {
        kk=k;
        for(int i:nums){
            s++;
            min_heap.push(i);
            if(s>k)min_heap.pop();
        }
    }
    
    int add(int val) {
        s++;
        min_heap.push(val);
        if(s>kk)min_heap.pop();
        return min_heap.top();

    }
};
