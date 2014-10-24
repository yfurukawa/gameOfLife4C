#ifndef GAMEOFLIFETEST_H_
#define GAMEOFLIFETEST_H_

#include <gtest/gtest.h>

extern "C" {
	#include "gameOfLife.h"
}

class gameOfLifeTest : public ::testing::Test {
protected:
	void SetUp();
	void TearDown();

public:
	gameOfLifeTest();
	virtual ~gameOfLifeTest();

};

#endif
