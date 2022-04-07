#include "pch.h"
#include "CppUnitTest.h"
#include "../BJSS_LBBT_CPP/TaxCalculator.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lbbtTest
{
	TEST_CLASS(test_TaxCalculation)
	{
	public:
		
		TEST_METHOD(gettingCortrectTax)
		{
			Assert::AreEqual(0, TaxCalculator(100000).getTax());
			Assert::AreEqual(0, TaxCalculator(145000).getTax());
			Assert::AreEqual(600, TaxCalculator(175000).getTax());
			Assert::AreEqual(2100, TaxCalculator(250000).getTax());
			Assert::AreEqual(4600, TaxCalculator(300000).getTax());
			Assert::AreEqual(5850, TaxCalculator(325000).getTax());
			Assert::AreEqual(13350, TaxCalculator(400000).getTax());
			Assert::AreEqual(48350, TaxCalculator(750000).getTax());
			Assert::AreEqual(78350, TaxCalculator(1000000).getTax());
		}
	};
}


