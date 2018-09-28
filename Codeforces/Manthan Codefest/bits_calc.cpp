#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

const int siz = 1e5 + 10;
const ll modu = 1e9 + 7;

int main() {
	int n;
	scanf("%d", &n);
	int x=ceil(log2(n));
	if(pow(2,x)==n)
	cout<<x+1;
	else
		cout<<x;
	return 0;
}