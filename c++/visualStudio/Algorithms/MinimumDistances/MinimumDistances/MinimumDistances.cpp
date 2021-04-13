#include <iostream>
using namespace std;

int n;
int a[1000 + 1];
#define inf 1000000000
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];

	int res = inf;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < i; j++)
			if (a[i] == a[j]) res = min(res, i - j);

	if (res == inf) res = -1;
	cout << res << endl;

	return 0;
}