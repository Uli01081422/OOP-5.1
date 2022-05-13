#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP 5.1C/FuzzyNumber_Private.h"
#include "../OOP 5.1C/FuzzyNumber_Private.cpp"
#include "../OOP 5.1C/FuzzyNumber.cpp"
#include "../OOP 5.1C/FuzzyNumber.h"
#include "../OOP 5.1C/Exception.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			FuzzyNumber_Private A(1, 1, 1);
			A.SetX(5);
			Assert::AreEqual(A.GetX(), 5.);

		}
	};
}
