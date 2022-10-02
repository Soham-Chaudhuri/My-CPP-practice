#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 200 * 1000 + 13;

int ans[MAX_N];
map<int, vector<int>> indices;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		indices.clear();
		memset(ans, 0, n * sizeof(ans[0]));
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			if (indices[x].size() < k)
				indices[x].push_back(i);
		}
		int m = 0;
		for (auto e : indices) m += e.second.size();
		m -= m % k;
		int color = 0;
		for (auto e : indices)
			for (auto i : e.second)
			{
				ans[i] = ++color;
				color %= k;
				if (--m == 0) goto _output;
			}
	_output:
		for (int i = 0; i < n; i++)
			cout << ans[i] << ' ';
		cout << '\n';
	}

	return 0;
}