class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> rec;
        rec.assign(numRows, vector<int>(1));
        for(int i=0;i<numRows;i++){
            rec[i][0] = 1;
            if(i==0) continue;
            for(int j=1;j<i;j++){
                rec[i].push_back(rec[i-1][j-1]+rec[i-1][j]);
            }
            rec[i].push_back(1);
        }
        return rec;
    }
};