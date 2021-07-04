#include<string>
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs.at(0);
        for (auto i = strs.begin(); i != strs.end(); ++i){
            // cout << *i << " ";
            while(prefix != ""){
                // size_t found = (*i).find(prefix);
                // if (found != string::npos)
                if(prefix == (*i).substr(0, prefix.length()))
                    break;
                else{
                    prefix.pop_back();
                }    
            }
        }
        return prefix;
    }
};