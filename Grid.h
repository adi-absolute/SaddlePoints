#pragma once

#include <string>

class Grid
{
public:
	Grid(int x, int y);
	std::string FindSaddlePoints(int * data);
private:
	int _x;
	int _y;
};

