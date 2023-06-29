#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	// Write your code here.

	int res=1;
	long long xx = x;
	while(n!=0){
		if(n%2==1){
			res = ((res%m)*(xx%m))%m;
		}
		xx = ((xx%m)*(xx%m))%m;
		n/=2;
	}
	return res;



}
