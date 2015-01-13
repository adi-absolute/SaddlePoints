#include "gtest/gtest.h"
#include "Grid.h"

namespace CommonTests
{
	class TestSaddlePointLocator : public ::testing::Test
	{
	public:

		TestSaddlePointLocator()
		{
		}

		~TestSaddlePointLocator()
		{
		}		
	};

	TEST_F(TestSaddlePointLocator, Complete_square)
	{
		const int Dimension = 8;
		Grid grid(Dimension, Dimension);

		int data[Dimension][Dimension] =
		{
			{ 6, 6, 6, 6, 6, 6, 6, 6 },
			{ 6, 6, 6, 6, 6, 6, 6, 6 },
			{ 6, 6, 6, 6, 6, 6, 6, 6 },
			{ 1, 2, 3, 5, 4, 3, 2, 1 },
			{ 6, 6, 6, 3, 6, 6, 6, 6 },
			{ 6, 6, 6, 6, 6, 6, 6, 6 },
			{ 6, 6, 6, 6, 6, 6, 6, 6 },
			{ 6, 6, 6, 6, 6, 6, 6, 6 }
		};

		std::string result = grid.FindSaddlePoints(&data[Dimension][Dimension]);

		ASSERT_EQ("Saddle Point at 3, 3", result);
	}
}
