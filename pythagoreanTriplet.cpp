#include<iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif


	int a, b, c;
	cin >> a >> b >> c;
	int max = a;
	bool flag = false;
	if (b > max) {
		max = b;

		if ((a * a) + (c * c) == b * b) {
			flag = true;
		}

	} if (c > max) {
		max = c;
		if (a * a + b * b == c * c) {
			flag = true;

		}
	} if (a == max) {
		if (c * c + b * b == a * a) {
			flag = true;

		}
	}

	cout << boolalpha << flag;



	return 0;
}
