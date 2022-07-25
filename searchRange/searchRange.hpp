#ifndef SEARCHRANGE_HPP
#define SEARCHRANGE_HPP

#include <vector>

using std::vector;

vector<int> searchRange(vector<int>& nums, int target);

int binSearch(vector<int>& nums, int target, bool leftBias);

#endif // SEARCHRANGE_HPP
