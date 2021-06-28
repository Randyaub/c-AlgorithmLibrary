#pragma once
#include <vector>

namespace Algorithms
{
	class SearchingUnsorted 
	{
	public:
		static void linearSearch(int value, std::vector<int> vector);
	};

	class SearchingSorted
	{
	public:
		static void binarySearch(int value, std::vector<int> vector);
		static void jumpSearch(int value, std::vector<int> vector);
	};
}