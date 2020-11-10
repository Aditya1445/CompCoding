#include<bits/stdc++.h>
using namespace std;

void printPermutations(string ques, string ans) {
	if (ques.size() == 0) {
		cout << ans << endl;
		return;
	}

	for (int i = 0; i < ques.size(); i++) {
		string ch = ques.substr(i, 1);

		string lqpart = ques.substr(0, i);
		string rqpart = ques.substr(i + 1);

		string roq = lqpart + rqpart;

		printPermutations(roq, ans + ch);
	}

}


int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
	string str;
	getline(cin, str);

	printPermutations(str, "");


	return 0;
}