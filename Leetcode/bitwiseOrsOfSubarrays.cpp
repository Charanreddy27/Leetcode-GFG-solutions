class Solution {
public:
    int subarrayBitwiseORs(vector<int>& A) {
  vector<int> c;
  for (auto i = 0, st = 0, en = 0; i < A.size(); ++i, st = en, en = c.size()) {
    c.push_back(A[i]);
    for (auto j = st; j < en; ++j)
      if (c.back() != (c[j] | A[i])) c.push_back(c[j] | A[i]);
  }
  return unordered_set<int>(begin(c), end(c)).size();
}
};