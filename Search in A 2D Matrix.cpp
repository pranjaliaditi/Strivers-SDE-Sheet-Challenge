bool searchMatrix(vector<vector<int>>& mat, int target) {
    int rows = mat.size();
    int cols = mat[0].size();
        int up = 0, down = rows-1, midv = (up+down)/2;

        // find the row
        int frow = 0, fcol =  0, ans = 0;

        while(down>=up){
            midv = (up+down)/2;

            if(target == mat[midv][cols-1]){
                return true;
            }

            else if(target > mat[midv][cols-1])
            up = midv+1;

            else
            down = midv-1;
        }

        frow = midv;

        int left = 0, right = cols-1, midh;

        // find the col

        while(right >= left){
            midh = (left+right)/2;

            if(target == mat[midv][midh]){
                return true;
            }

            else if(target > mat[midv][midh])
            left = midh+1;

            else
            right = midh-1;
        }

      

        if(target == mat[midv][midh])
        return true;

        else
        return false;
}
