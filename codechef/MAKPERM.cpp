#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        unordered_set<long long> st;
        long long x;
        for (int j = 0; j < n; j++) {
            cin >> x;
            st.insert(x);
        }
        long long count = 0;
        for (long long j = 1; j <= n; j++) {
            if (st.find(j) == st.end()) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}