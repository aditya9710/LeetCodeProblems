class Solution {
public:
    
    // void print_queue(queue<int> q)
    // {
    //   while (!q.empty())
    //   {
    //     std::cout << q.front() << " ";
    //     q.pop();
    //   }
    //   std::cout << std::endl;
    // }
    
    bool canReach(vector<int>& arr, int start) {
        queue<int> q;
        q.push(start);
        vector<int> visited(arr.size());
        
        while(!q.empty()) {
            if (arr[q.front()] == 0)
                return true;
            else {
                if(visited[q.front()] == 1)
                {
                    q.pop();
                    continue;
                }
                
                if (q.front() + arr[q.front()] < arr.size())
                    q.push(q.front() + arr[q.front()]);
                if (q.front() - arr[q.front()] < arr.size())
                    q.push(q.front() - arr[q.front()]);
                
                visited[q.front()] = 1;
                q.pop();
            }
            // cout<<"Step:\n";
            // print_queue(q);
        }
        return false;
    }
};
