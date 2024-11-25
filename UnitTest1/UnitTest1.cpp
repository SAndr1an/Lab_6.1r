#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.1r/Lab_6.1.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestCreateArrayWithRandomElements)
		{
			const int n = 5;
			int t[n];
			int Low = -14;
			int High = 7;
			CreateArrayWithRandomElements(t, n, Low, High, 0);

			for (int i = 0; i < n; i++)
			{
				Assert::IsTrue(t[i] >= Low && t[i] <= High);
			}
		}

		TEST_METHOD(TestCountElements)
		{
			const int n = 6;
			int t[n] = { 1, -2, 3, 4, 5, 6 };

			int count = CountElements(t, n, 0, 0);

			Assert::AreEqual(3, count); 
		}

		TEST_METHOD(TestSumElements)
		{
			const int n = 6;
			int t[n] = { 1, -2, 3, 4, 5, 6 };

			int sum = SumElements(t, n, 0, 0);

			Assert::AreEqual(13, sum);
		}

		TEST_METHOD(TestTurnToZero)
		{
			const int n = 6;
			int t[n] = { 1, -2, 3, 4, 5, 6 };

			TurnToZero(t, n, 0);

			Assert::AreEqual(1, t[0]); 
			Assert::AreEqual(0, t[2]); 
			Assert::AreEqual(0, t[5]); 
		}
	};
}
