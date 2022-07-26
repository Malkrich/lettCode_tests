#include "generate.hpp"

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> ret = {};

    for(int i = 0; i < numRows; i++)
    {
        ret.push_back(vector<int>(i+1,0));
        for(int j = 0; j < ret[i].size(); j++)
        {
            if(j == 0 || j == ret[i].size()-1)
                ret[i][j] = 1;
            else
                ret[i][j] = ret[i-1][j-1] + ret[i-1][j];
        }
    }

    return ret;
}
