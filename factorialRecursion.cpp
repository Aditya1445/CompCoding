// https://www.pepcoding.com/resources/online-java-foundation/introduction-to-recursion/factorial-official/ojquestion

#include <bits/stdc++.h>
using namespace std;

int fact(int n) {
	if (n == 1)
		return 1;

	int f = n * fact(n - 1);
	return f;
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	cout << fact(5);

	return 0;
}
