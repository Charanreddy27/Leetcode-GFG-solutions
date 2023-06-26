#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin >> t;
    while (t--) {
        char x = 'a';
        vector<char> alpha;
        vector<int> cost(26);
        for (int i = 1; i <= 25; i++) {
            alpha.push_back(x);
            x = x + 1;
        }
        alpha.push_back(x);
        for (int i = 0; i < 26; i++)
            cin >> cost[i];
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++) {
            for (int j = 0; j < 26; j++)
                if (s[i] == alpha[j] && alpha[j] != '0')
                    alpha[j] = '0';
        }
        int sum = 0;
        for (int i = 0; i < 26; i++) {
            if (alpha[i] != '0')
                sum += cost[i];
        }
        cout << sum << endl;
    }
	
	return 0;
}