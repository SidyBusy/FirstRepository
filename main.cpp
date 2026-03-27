#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        vector<long long> arr;
        int n;
        cin >> n;
        for (int j = 0; j < n; j++) {
            long long num;
            cin >> num;
            arr.push_back(num);
        }

        int ans = 0;
        long long mn = arr[0];
        long long mx = arr[0];
        int cnt = 1;
        for (int j = 1; j < n; j++) {
            if (arr[j] > mn && arr[j] < mx) {
                cnt++;
            }
            else if (arr[j] == mx && arr[j - 1] == mx) {
                cnt++;
            }
            else if (arr[j] == mx + 1 && arr[j - 1] == mx) {
                mx = arr[j];
                cnt++;
            }
            else {
                ans++;
                mn = arr[j];
                mx = arr[j];
                cnt = 1;
            }
        }

        ans += 1;
        cout << ans << '\n';

    }

    
}
