#ifndef SOLUTION_029
#define SOLUTION_029

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <algorithm>
#include <list>
#include <iterator>

using namespace std;


class Solution {
public:
	vector<int> searchRange(vector<int>& nums, int target);
	int subsearch(vector<int>&, float, int, int);
};

#endif