class Solution {
private:
    bool dfs(int course, unordered_map<int, vector<int>>& prereq_list, unordered_set<int> visited) {
        if (visited.find(course) != visited.end()) return false;
        if (prereq_list[course].empty()) return true;
        visited.insert(course);
        for (int i = 0; i < prereq_list[course].size(); ++i) {
            int next_course = prereq_list[course][i];
            if (!dfs(next_course, prereq_list, visited)) return false;
        }
        prereq_list[course].clear();
        visited.erase(course);
        return true;
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int, vector<int>> prereq_list;
        for (int i = 0; i < prerequisites.size(); ++i) {
            prereq_list[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }

        unordered_set<int> visited;
        for (int course = 0; course < numCourses; ++course) {
            if (!(dfs(course, prereq_list, visited))) return false;
        }

        return true;
    }
};
