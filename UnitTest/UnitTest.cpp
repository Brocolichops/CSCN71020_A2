#include "pch.h"
#include "CppUnitTest.h"
extern "C" {
#include "../BCSRec/main.h"
}
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(PerimeterTest)
		{
			int length = 5;
			int width = 10;
			Assert::AreEqual(30, getPerimeter(&length, &width), L"Perimeter Test FAILED");
		};
		TEST_METHOD(AreaTest) {
			int length = 5;
			int width = 10;
			Assert::AreEqual(50, getArea(&length, &width), L"Area test FAILED");
		};

	};
}
