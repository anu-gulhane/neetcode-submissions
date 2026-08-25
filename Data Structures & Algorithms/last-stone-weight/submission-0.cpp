class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>max_heap;
        for(int i:stones)max_heap.push(i);
        while(max_heap.size()>1){
            int a=max_heap.top();
            max_heap.pop();
            int b=max_heap.top();
            max_heap.pop();
            int res=abs(a-b);
            max_heap.push(res);
        }
        return max_heap.top();
    }
};
