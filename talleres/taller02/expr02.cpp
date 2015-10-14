#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a, b, c, mx, mi;
	cin >> a >> b >> c;
	mx = max(a, max(b, c));
	mi = min(a, min(b, c));
	cout << mi << " " << (a+b+c)-(mx+mi) << " " << mx;
	return 0;
}
