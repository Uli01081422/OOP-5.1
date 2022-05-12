#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP 5.1A/Cursor.h"
#include "../OOP 5.1A/Cursor.cpp"
#include "../OOP 5.1A/Exception.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Cursor TEST(2, 2);
			Assert::AreEqual(TEST.Check_2(2), true);
		}
	};
}
