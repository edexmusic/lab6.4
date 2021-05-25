#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\denys\Desktop\IK-11\Denys Tsybko\2 яелеярп\OOP\LB_6.4\LB_6.4.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest64
{
	TEST_CLASS(UnitTest64)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double arr[] = { 1.2 , 3.5, 4.4, 5.3, -4.3 };

			Assert::AreEqual(Min(arr, size(arr)), -4.3);
		}
	};
}
