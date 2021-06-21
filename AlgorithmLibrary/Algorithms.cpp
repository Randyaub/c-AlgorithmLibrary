#include "Algorithms.h"
#include <vector>
#include <iostream>

namespace Algorithms 
{
	/**
	 * Run Time: 0(n)
	 * Space Complexity: 0(1)
	**/
	void SearchingUnsorted::linearSearch(int value, std::vector<int> vector) {
		for (unsigned int i = 0; i < vector.size(); i++) {
			if (vector[i] == value) {
				std::cout << "\nThe number is at index [" << i <<"].\n";
				return;
			}
		}
		std::cout << "\nThe number does not exist in the vertex.\n";
		return;
	}

	/**
	 * Run Time: 0(logn)
	 * Space Complexity: 0(1)
	**/
	void SearchingSorted::binarySearch(int value, std::vector<int> vector) { //34
		int start = 0; //
		int end = vector.size(); //6

		while (start <= end) {
			int middle = (start + end ) / 2; //3
			if (value == vector[middle]) {
				std::cout << "\nThe number is at index [" << middle << "].\n";
				return;
			}
			else if (value > vector[middle]) {
				start = middle + 1;
			}
			else if (value < vector[middle]) {
				end = middle - 1;
			}
		}
		std::cout << "\nThe number does not exist in the vertex.\n";
		return;
	}
}