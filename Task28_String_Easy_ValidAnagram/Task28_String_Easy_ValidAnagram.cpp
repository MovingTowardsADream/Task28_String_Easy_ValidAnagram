#include <iostream>
#include <unordered_map>

class Solution {
public:
    static bool isAnagram(std::string s, std::string t) {
        if (s.size() != t.size())
            return 0;
        std::unordered_map<char, int> maps;
        for (int i = 0;i < s.size();i++)
            maps[s[i]]++;
        for (int i = 0;i < t.size();i++) {
            maps[t[i]]--;
            if (maps[t[i]] < 0) {
                return 0;
            }
        }
        return 1;
    }
};

int main()
{
    std::cout << Solution::isAnagram("anagram", "nagaram");
}
