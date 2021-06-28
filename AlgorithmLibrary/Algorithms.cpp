#include "Algorithms.h"
#include <vector>
#include <math.h>
#include <iostream>

namespace Algorithms 
{

	//UNSORTED ----------------------------------------------------------------------------------------

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

	//SORTED ------------------------------------------------------------------------------------------

	/**
	 * Run Time: 0(logn)
	 * Space Complexity: 0(1)
	**/
	void SearchingSorted::binarySearch(int value, std::vector<int> vector) {
		int start = 0;
		int end = vector.size();

		while (start <= end) {
			int middle = (start + end ) / 2;
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

	/**
	 * Run Time: O(SQRT(N))
	 * Space Complexity: O(1)
	**/
	//COMPLETE ANOTHER TIME
	void SearchingSorted::jumpSearch(int value, std::vector<int> vector) {
		int start = 0;
		int size = vector.size() - 1;
		int m = sqrt(size);

		while (vector[m] <= value && m < size) {
			start = m;
			m += sqrt(size);

			if (m > size) {
				m = size;
			}
		}

		for (int i = start; i <= m; i++) {
			if (value == vector[i]) {
				std::cout << "\nThe number is at index [" << i << "].\n";
				return;
			}
		}	
		std::cout << "\nThe number does not exist in the vertex.\n";
		return;
	}
}