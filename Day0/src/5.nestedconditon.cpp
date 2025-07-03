#include <iostream>
using namespace std;

// rename it to main()
int nestedconditon()
{
	for (int i = 0;i <= 10;i++) {
		if (i != 2 == 0) {
			cout << "i=" << i << endl;
		}
		else {
			continue; // will skip below code and continue to the next loop
		}

		// some other block of code based on if condition data
	}

	return 0;
}