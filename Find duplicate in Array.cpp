#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.

	/* O(N logN)
	sort(arr.begin(), arr.end());

	for(int i =0; i<n-1; i++){
		if(arr[i] == arr[i+1]){
			return arr[i];
		}
	}*/

	// O(N)
	
	vector <int> cnt(n,0);

	for(int i =0; i<n; i++){
		cnt[arr[i]]++;

		if(cnt[arr[i]] >= 2)
		return arr[i];
	}

}
