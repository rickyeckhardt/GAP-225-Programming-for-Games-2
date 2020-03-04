#pragma once

#include <iostream>

//////////////////////////////////////////////////////////////////////////////////////
// Runs a test to check if value1 is close enough to value2 to be considered the same.
// pTestName will print along with "SUCCESS" or "FAILURE" after the test.
//////////////////////////////////////////////////////////////////////////////////////
void TestFloats(const char* pTestName, float value1, float value2)
{
	constexpr float kCloseEnough = 0.01f;

	std::cout << pTestName << ": ";
	if (abs(value1 - value2) < kCloseEnough
		|| abs(value2 - value1) < kCloseEnough)
	{
		std::cout << "PASSED";
	}
	else
	{
		std::cout << "FAILED";
	}

	std::cout << std::endl;
}

//////////////////////////////////////////////////////////////////////////////////////
// Runs all the tests for this project.
//////////////////////////////////////////////////////////////////////////////////////
void RunTests()
{
	// PART ONE:
	// These are the tests that your code needs to pass.
	// You can change the '0' below to a '1' to test everything.
	// Or, you can move '#if 0' down as you go to test one thing at a time.

#if 0
	Vector2 vector1{ 0, 0 };
	TestFloats("vector1.x", vector1.GetX(), 0);
	TestFloats("vector1.y", vector1.GetY(), 0);

	Vector2 vector2{ 3, 0 };
	TestFloats("vector2.x", vector2.GetX(), 3);
	TestFloats("vector2.y", vector2.GetY(), 0);

	Vector2 vector3{ 3, 4 };
	TestFloats("vector3.x", vector3.GetX(), 3);
	TestFloats("vector3.y", vector3.GetY(), 4);

	Triangle triangle1{ vector1, vector2, vector3 };
	TestFloats("triangle1.GetSideLength(0)", triangle1.GetSideLength(0), 3);	// between points 0 and 1
	TestFloats("triangle1.GetSideLength(1)", triangle1.GetSideLength(1), 4);	// between points 1 and 2
	TestFloats("triangle1.GetSideLength(2)", triangle1.GetSideLength(2), 5);	// between points 0 and 2
	TestFloats("triangle1.GetPerimeter()", triangle1.GetPerimeter(), 12);
	TestFloats("triangle1.GetArea()", triangle1.GetArea(), 6);

	Triangle triangle2{ Vector2{0,0}, Vector2{0.5f,2}, Vector2{2,1} };
	TestFloats("triangle1.GetSideLength(0)", triangle2.GetSideLength(0), 2.062f);	// between points 0 and 1
	TestFloats("triangle1.GetSideLength(1)", triangle2.GetSideLength(1), 1.803f);	// between points 1 and 2
	TestFloats("triangle1.GetSideLength(2)", triangle2.GetSideLength(2), 2.236f);	// between points 0 and 2
	TestFloats("triangle1.GetPerimeter()", triangle2.GetPerimeter(), 6.101f);
	TestFloats("triangle1.GetArea()", triangle2.GetArea(), 1.75f);
#endif

	// PART TWO:
	// Draft a set of unit tests for a "circle" class.
	// It should test all of the aspects of such a class that can be tested.
	// Use the Vector2D and Triangle tests above as a model.
	// You must write at least 10 unit tests, each of which should be a call to TestFloats (or another function if you want to write one of your own).

	// Circle unit tests here.
}