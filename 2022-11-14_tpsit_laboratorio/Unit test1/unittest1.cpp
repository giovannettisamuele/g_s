// File: unittest1.cpp
#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Operazioni\ProvaOperazioni.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTestOperazioni
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(Test_Somma)
		{
			ProvaOperazioni op;
			int num1 = 10, num2 = 20;
			Assert::AreEqual(num1 + num2, op.Somma(num1, num2));
		}
		TEST_METHOD(Test_Differenza)
		{
			ProvaOperazioni op;
			int num1 = 10, num2 = 20;
			Assert::AreEqual(num1 - num2, op.Differenza(num1, num2));
		}
		TEST_METHOD(Test_Prodotto)
		{
			ProvaOperazioni op;
			int num1 = 15, num2 = 30;
			Assert::AreEqual(num1 * num2, op.Moltiplicazione(num1, num2));
		}
		TEST_METHOD(Test_Divisione)
		{
			ProvaOperazioni op;
			int num1 = 10, num2 = 0;
			if (num2 == 0)
			{
				Logger::WriteMessage("ERRORE: Tentativo di divisione per zero!");
			}
			else
			{
				Assert::AreEqual(num1 / num2, op.Divisione(num1, num2));
			}
		}
		TEST_METHOD(Test_Radice1)
		{
			ProvaOperazioni op;
			float num = 16, expected = 4;
			Assert::AreEqual(expected, op.RadiceQuadrata(num));
		}

		TEST_METHOD(Test_Radice2)
		{
			ProvaOperazioni op;
			float num = -7, expected = 0;
			Assert::AreEqual(expected, op.RadiceQuadrata(num));
		}
	};
};

