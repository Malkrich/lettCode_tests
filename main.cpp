#include "main.hpp"

#include "PascalsTriangle/generate.hpp"

int main()
{
//    vector<int> output = getRow(0);

    vector<vector<int>> output = generate(5);

    for(auto vec : output)
    {
        for(auto val : vec)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
