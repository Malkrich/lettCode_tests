#ifndef TRIANGULARSUM_HPP
#define TRIANGULARSUM_HPP

#include <vector>

using std::vector;

/**
 * interative resolution :
 * less memory usage, more process time
 */
int triangularSum(vector<int>& nums);

/**
 * recurcive resolution :
 * more memory usage, less processing time
 */
int triangularSum2(vector<int>& nums);

#endif // TRIANGULARSUM_HPP
