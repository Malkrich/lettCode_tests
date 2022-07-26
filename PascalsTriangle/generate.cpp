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

vector<vector<int>> generate2(int numRows)
{
    vector<vector<int>> ret = {vector<int>(1,1)};

    for(int i = 0; i < numRows-1; i++)
    {
        ret.push_back(getRow(i+1));
    }

    return ret;
}

vector<int> getRow(int rowIndex)
{
    vector<int> row = {1};

    for(int i = 0; i < rowIndex; i++)
    {
        row.insert(row.begin(),1);
        for(int j = 1; j < row.size()-1; j++)
        {
            row[j] = row[j] + row[j+1];
        }
    }

    return row;
}
