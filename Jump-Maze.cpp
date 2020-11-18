#include <bits/stdc++.h>
using namespace std;
typedef vector<string> vs;

vs JumpMazePath(int sr, int sc, int dr, int dc)
{
	if (sr == dr && sc == dc)
	{
		vs bres;
		bres.push_back("");
		return bres;
	}
	vs hpath;
	vs vpath;
	vs dpath;
	vs path;
	for (int s = 1; s <= dc - sc; s++) // Horizontal moves
	{
		hpath = JumpMazePath(sr, sc + s, dr, dc);
		for (string hp : hpath)
		{
			path.push_back("h" + to_string(s) + hp);
		}
	}
	for (int s = 1; s <= dr - sr; s++) // Vertical moves
	{
		vpath = JumpMazePath(sr + s, sc, dr, dc);
		for (string vp : vpath)
		{
			path.push_back("v" + to_string(s) + vp);
		}
	}
	for (int s = 1; s <= dr - sr && s <= dc - sc; s++) // Diagonal moves
	{
		dpath = JumpMazePath(sr + s, sc + s, dr, dc);
		for (string dp : dpath)
		{
			path.push_back("d" + to_string(s) + dp);
		}
	}
	return path;
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
	int m;
	cin >> m;
	vs paths = JumpMazePath(1, 1, n, m);
	int cnt = 0;

	cout << '[';
	for (string str : paths) {
		if (cnt != paths.size() - 1) {

			cout << str << ", ";
		}

		else
			cout << str;
		cnt++;
	}
	cout << ']';

	return 0;
}
