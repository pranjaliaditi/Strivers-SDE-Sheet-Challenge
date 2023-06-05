#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
 vector<vector <long long int>> pascal(n);

        pascal[0].push_back(1);

        if(n >= 2){
             pascal[1].push_back(1);
             pascal[1].push_back(1);
        }
       
        int i;

        for(i=2;i<n;i++){

            pascal[i].push_back(1);

            for(int j = 1; j < i; j++){
                long long int num = pascal[i-1][j] + pascal[i-1][j-1];
                pascal[i].push_back(num);
            }
            pascal[i].push_back(1);
        }

        return pascal;
}
