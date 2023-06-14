#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here

	pair <int,int> numbers;

	vector <int> cnt(n+1,0);

	for(int i =0; i<n; i++){
		cnt[arr[i]]++;

		if(cnt[arr[i]] >= 2)
		numbers.second = arr[i];
	}

	for(int i = 1; i<n+1; i++){

		if(cnt[i] == 0)
		numbers.first = i;
	}
	
	return numbers;
}
