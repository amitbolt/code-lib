class Solution {
public:
    std::string_view findDup(const string& S, size_t len) {
      std::unordered_set<std::string_view> set;
      for (size_t i = 0; i < S.size() - len + 1; i++) {
        const auto [it, inserted] = set.emplace(S.data() + i, len);
        if (!inserted) {
          return *it;
        }
      }
      return std::string_view{};
    }

    string longestDupSubstring(string S) {
      std::string_view ans;
      size_t lo = 1;
      size_t hi = S.size();
      while (lo < hi) {
        size_t mid = (lo + hi) / 2;
        auto sv = findDup(S, mid);
        if (sv.size() > 0) {
          lo = mid + 1;
          ans = sv;
        } else {
          hi = mid;
        }
      }
      return {ans.begin(), ans.end()};
    }
};