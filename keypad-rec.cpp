#include<bits/stdc++.h>
using namespace std;
typedef vector<string> vs;
const string str []  = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};
vs getKPC(string s) {
	if (s.size() == 0)
	{
		vs bres;
		bres.push_back("");
		return bres;
	} 
	char ch = s.at(0);//5
	string ros = s.substr(1);//73
	vs rres = getKPC(ros);
	vs mres;
	string sk = str[ch - '0'];
	for (int i = 0; i < sk.size(); i++)
	{
		char chs = sk.at(i);
		for (string rstr : rres)
		{
			mres .push_back(chs + rstr);
		}
	}





	return mres;

}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	vs ans = getKPC(s);
	int cnt = 0;

	cout << '[';
	for (string str : ans) {
		if (cnt != ans.size() - 1)
			cout << str << ", ";
		else
			cout << str;
		cnt++;
	}
	cout << ']';
}
