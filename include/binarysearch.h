#include <cstdint>

namespace edu {
	namespace vcccd {
		namespace vc {
			namespace csv15 {

				template <class T>
				int64_t findBinary(const T& value, T array[], size_t size) {
					
					if (size == 0) return -1; 
					size_t guess = size / 2;
					if (value == array[guess]) {
						return guess;
					}
					if (value < array[guess]) {
						return findBinary(value, array, guess);
					}
					if (value > array[guess]) {
						return findBinary(value, array + guess + 1, guess);
					}
				}

			}
		}
	}
}