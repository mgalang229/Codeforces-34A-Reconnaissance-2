#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; ++i)
		cin >> a[i];
	int id1=0, id2=0, tmp=INT_MAX;
	for(int i=0; i<n-1; ++i)
		if(abs(a[i]-a[i+1])<tmp) {
			tmp=abs(a[i]-a[i+1]);
			id1=i+1;
			id2=i+2;
		}
	if(abs(a[0]-a[n-1])<tmp)
		cout << n << " " << 1;
	else
		cout << id1 << " " << id2;
	cout << "\n";
}
