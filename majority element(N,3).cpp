#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.

	sort(arr.begin(), arr.end());
    int n = arr.size();
    vector <int> ans;
	int cnt = 0;
	int i,j;

	for( i =0; i<n;){

		for( j = i; j<n; j++){
			if(arr[i] == arr[j])
			cnt++;

			else
			break;
		}

                if (cnt > floor(n / 3)) {
                  ans.push_back(arr[i]);
                }

                cnt = 0;
                i = j;
    }
    return ans;
}
