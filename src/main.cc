#include <iostream>
#include "linearsearch.h"
#include "binarysearch.h"
using edu::vcccd::vc::csv15::find; //Linear
using edu::vcccd::vc::csv15::findBinary;
int main(int argc, char *argcv[]) {
	int array[] = { 1, 2, 3, 4, 5, 9, 10, 50};
	int64_t index = find(1, array, 8);

	std::cout << "Steps: " << index << std::endl;
	double doubles[] = { 3,0, 1.0, 2.0 };
	findBinary(0.0, doubles, 3);
	system("PAUSE"); //This pause function should only be used for debugging. May not compile in other systems.
}