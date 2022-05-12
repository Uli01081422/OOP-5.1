#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP 5.1B/FuzzyNumber.h"
#include "../OOP 5.1B/FuzzyNumber.cpp"
#include "../OOP 5.1B/Exception.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			FuzzyNumber A(3, 4, 6),
				B(1, 2, 7),
				C(0, 0, 0);

			C = A - B;
			Assert::AreEqual(C.GetX(), -4.0);


		}
	};
}
