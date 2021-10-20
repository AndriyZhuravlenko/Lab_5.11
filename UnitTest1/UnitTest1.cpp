#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\LEGION\source\repos\Lab_5.11\Lab_5.11\Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x = 0, y = 0;
			int t = (x * y) / (1 + pow(x, 2) * pow(y, 2));
				Assert::AreEqual(t, 0);
		}
	};
}
