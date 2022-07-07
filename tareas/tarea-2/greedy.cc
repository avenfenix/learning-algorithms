/**
 * @file greedy.cc
 * @brief Skeleton for greedy function
 */

#include <vector>
#include <algorithm>

#include "greedy.hh"

std::vector<unsigned int> greedy(unsigned int m, std::vector<unsigned int> d)
{
	std::vector<unsigned int> v(d.size(), 0);
	for (int i = d.size() - 1; i != 0  ;i--){
		if (d[i] <= m){
			v[i] = (int ) m / d[i];
			m = (int ) m % d[i];
		}
		 
	}
	


	return v;
}
