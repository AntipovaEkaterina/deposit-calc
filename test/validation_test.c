#include <deposit.h>
#include <ctest.h>

CTEST(validation_test, yes)
{
	int time = 13;
	int sum = 10032;
	
	int result = check(sum, time);
	ASSERT_EQUAL(result, 1);
}

#include <deposit.h>
#include <ctest.h>

CTEST(validation_test, no)
{
	int time = 465;
	int sum = 124;
	
	int result = check(sum, time);
	ASSERT_EQUAL(result, 0);
}
