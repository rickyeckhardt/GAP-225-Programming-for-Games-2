## Instructions
Download the Visual Studio solution below. Complete the tasks below by modifying the downloaded solution.

Implement the Vector3 class and all functions and operators in order to pass all unit tests in Tests.h. Your submission should pass all tests when complete.

## To Improve Your Grade
If you complete the requirements above to a high level of quality, you can improve the program or add additional features as long as they meet the following:

- Don't prevent the program from compiling or working correctly.
- Are related to the existing program.
- Are done to a high level of quality.
- Are commented and follow the coding standards.

Here are some suggestions for additional functions to implement. These may require research.

#### float Vector3::GetLength()

Returns the distance from 0,0,0 to *this.

#### float Vector3::GetSquareLength()

Returns the square of the distance from 0,0,0 to *this. IMPORTANT: You should NOT perform the square-root operation in this function, which means you can't call GetLength() either. The point of getting square length is to avoid the square-root operation, which is computationally slow.

#### float Vector3::GetDotProduct(const Vector3& right) const

Returns the dot product of *this and right.

#### Vector3 Vector3::GetCrossProduct(const Vector3& right) const

Returns the cross product of *this and right.

## Purpose
Operator overloads improve the conciseness and readability of your code.