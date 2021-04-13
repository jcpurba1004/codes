#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector <int> height(N);

    for (int i = 0; i < N; ++i) {
        cin >> height[i];
    }

    int mx = *max_element(height.begin(), height.end());
    while (mx > 0) {
        int mn = mx;
        int cuts = 0;

        for (int i = 0; i < (int)N; ++i) {
            if (height[i] > 0)
                mn = min(mn, height[i]);
        }
        for (int i = 0; i < (int)N; ++i) {
            if (height[i] > 0) {
                cuts++;
                height[i] -= mn;
            }
        }

        cout << cuts << "\n";
        mx = *max_element(height.begin(), height.end());
    }

    return 0;
}