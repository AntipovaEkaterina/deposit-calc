#include <deposit.h>
#include <ctest.h>

CTEST(validation_test, test1)
{
	int time = 199;
	int sum = 10002;
	
	int result = check(sum, time);
	ASSERT_EQUAL(result, 0);
}
