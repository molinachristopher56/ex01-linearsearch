#include <iostream>
#include "linearsearch.h"
using edu::vcccd::vc::csv15::find;
int main(int argc, char *argcv[]) {
	int array[] = { 3, 1, 2 };
	int64_t index = find(0, array, 3);

	std::cout << "Index: " << index << std::endl;
	double doubles[] = { 3,0, 1.0, 2.0 };
	find(0.0, doubles, 3);
	system("PAUSE"); //This pause function should only be used for debugging. May not compile in other systems.
}