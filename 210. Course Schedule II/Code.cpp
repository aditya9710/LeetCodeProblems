class Solution {
private:
    bool dfs(int course, unordered_map<int, vector<int>>& prereq_list, unordered_set<int> &visited, unordered_set<int> &cycle, vector<int>& result) {
        if (cycle.find(course) != cycle.end()) return false;
        if (visited.find(course) != visited.end()) return true;
        cycle.insert(course);
        for (int i = 0; i < prereq_list[course].size(); ++i) {
            int next_course = prereq_list[course][i];
            if (!dfs(next_course, prereq_list, visited, cycle, result)) return false;
        }

        cycle.erase(course);
        visited.insert(course);
        result.push_back(course);
        return true;
    }
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int, vector<int>> prereq_list;
        for (int i = 0; i < prerequisites.size(); ++i) {
            prereq_list[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }

        unordered_set<int> visited;
        unordered_set<int> cycle;
        vector<int> result;

        for (int course = 0; course < numCourses; ++course) {
            if (!(dfs(course, prereq_list, visited, cycle, result))) return {};
        }

        return result;
    }
};
