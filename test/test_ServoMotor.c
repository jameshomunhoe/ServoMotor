#include "unity.h"
#include "mock_clock.h"
#include "ServoMotor.h"

void setUp(void){}
void tearDown(void){}

void test_pulseWaveGenerator_should_return_1(void){
	
	int test;
	
	getCurrentClock_IgnoreAndReturn(100);
	getCurrentClock_IgnoreAndReturn(150);
	test = pulseWaveGenerator(180);
	TEST_ASSERT_EQUAL(1,test);
}

void test_pulseWaveGenerator_should_return_0(void){
	
	int test;
	
	getCurrentClock_IgnoreAndReturn(100);
	getCurrentClock_IgnoreAndReturn(281);
	test = pulseWaveGenerator(180);
	TEST_ASSERT_EQUAL(0,test);
}

void test_pulseWaveGenerator_should_return_2(void){
	
	int test;
	
	getCurrentClock_IgnoreAndReturn(100);
	getCurrentClock_IgnoreAndReturn(301);
	test = pulseWaveGenerator(180);
	TEST_ASSERT_EQUAL(2,test);
}