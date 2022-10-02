#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	vector<int> a(n);
	for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
	int pos = max_element(a.begin(), a.end()) - a.begin();
	bool res = true;
	for(int i = 0; i < pos; i++)
		res &= (a[i] < a[i + 1]);
	for(int i = pos; i < n - 1; i++)
		res &= (a[i] > a[i + 1]);

	if(res)
		puts("YES");
	else
		puts("NO");
}