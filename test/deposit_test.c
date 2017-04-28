#include <deposit.h>
#include <ctest.h>

CTEST(deposit_test, day_30_sum_min_100000)
{
	int time = 25;
	int sum = 50000;
	
	float result = calc(sum, time);
	ASSERT_DBL_NEAR(result, (sum * 0.9));
}

CTEST(deposit_test, day_30_sum_max_100000)
{
	int time = 25;
	int sum = 500000;
	
	float result = calc(sum, time);
	ASSERT_DBL_NEAR(result, (sum * 0.9));
}

CTEST(deposit_test, day_30_120_min_100000)
{
	int time = 55;
	int sum = 50000;
	
	float result = calc(sum, time);
	ASSERT_DBL_NEAR(result, (sum * 1.02));
}

CTEST(deposit_test, day_30_120_max_100000)
{
	int time = 55;
	int sum = 500000;
	
	float result = calc(sum, time);
	ASSERT_DBL_NEAR(result, (sum * 1.03));
}

CTEST(deposit_test, day_121_240_min_100000)
{
	int time = 155;
	int sum = 50000;
	
	float result = calc(sum, time);
	ASSERT_DBL_NEAR(result, (sum * 1.06));
}

CTEST(deposit_test, day_121_240_max_100000)
{
	int time = 155;
	int sum = 500000;
	
	float result = calc(sum, time);
	ASSERT_DBL_NEAR(result, (sum * 1.08));
}

CTEST(deposit_test, day_241_365_min_100000)
{
	int time = 255;
	int sum = 50000;
	
	float result = calc(sum, time);
	ASSERT_DBL_NEAR(result, (sum * 1.12));
}
CTEST(deposit_test, day_241_365_100000)
{
	int time = 255;
	int sum = 500000;
	
	float result = calc(sum, time);
	ASSERT_DBL_NEAR(result, (sum * 1.15));
}

