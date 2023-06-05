#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	  vector <int> rows, columns;

        int n = matrix[0].size();

        for(int i = 0; i< matrix.size(); i++){
            for(int j = 0; j<n; j++){
                if(matrix[i][j] == 0){
                    rows.push_back(i);
                    columns.push_back(j);
                }
            }
        }

        for(int i = 0; i< rows.size(); i++){
            int r = rows[i];
            
            for(int j=0; j<n; j++ ){
                matrix[r][j] = 0;
            }
        }

        for(int i = 0; i< columns.size(); i++){
            int c = columns[i];
            
            for(int j=0; j<matrix.size(); j++ ){
                matrix[j][c] = 0;
            }
        }

}
