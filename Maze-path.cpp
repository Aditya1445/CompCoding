#include <bits/stdc++.h>
using namespace std;
typedef vector<string> vs;

vs MazePath(int sr, int sc, int dr, int dc)
{
	if (sr == dr && sc == dc)
	{
		vs bres;
		bres.push_back("");
		return bres;
	}
	vs hpath;
	vs vpath;
	if (sr < dr)
	{
		vpath = MazePath(sr + 1, sc, dr, dc);
	}
	if (sc < dc)
	{
		hpath = MazePath(sr, sc + 1, dr, dc);
	}
	vs p;
	for (string h : hpath)
	{
		p.push_back("h" + h);
	}
	for (string v : vpath)
	{
		p.push_back("v" + v);
	}
	return p;

}

int main()
{
	
	int n;
	cin >> n;
	int m;
	cin >> m;
	vs paths = MazePath(1, 1, n, m);
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
