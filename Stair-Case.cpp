#include <bits/stdc++.h>
using namespace std;
typedef vector<string> vs;

vs StairPath(int n)
{
	if (n == 0)
	{
		vs bres;
		bres .push_back("");
		return bres;
	}
	else if (n < 0)
	{
		vs bres;
		return bres;
	}
	vs p1 = StairPath(n - 1);
	vs p2 = StairPath(n - 2);
	vs p3 = StairPath(n - 3);
	vs p;
	for (string path : p1)
	{
		p.push_back('1' + path);
	}
	for (string path : p2)
	{
		p.push_back('2' + path);
	}
	for (string path : p3)
	{
		p.push_back('3' + path);
	}
	return p;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	vs paths = StairPath(n);
	int cnt = 0;

	cout << '[';
	for (string str : paths) {
		if (cnt != paths.size() - 1)
			cout << str << ", ";
		else
			cout << str;
		cnt++;
	}
	cout << ']';

	return 0;
}
