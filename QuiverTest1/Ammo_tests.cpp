#include "stdafx.h"
#include "CppUnitTest.h"
#include "../CharacterManager/Ammo.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Tests
{
	TEST_CLASS(Ammo_Tests)
	{
	public:

		TEST_METHOD(Ammo_default_constructor)
		{
			auto ammo0 = std::make_shared<Ammo>();
			std::string name = "arrow, common";

			Assert::AreEqual(ammo0->print_name(), name);
		}

		TEST_METHOD(Ammo_add_item)
		{
			auto ammo0 = std::make_shared<Ammo>();
			ammo0->add_ammo();

			Assert::AreEqual(ammo0->quantity_left(), 2);
		}

		TEST_METHOD(Ammo_total_weight)
		{
			auto ammo0 = std::make_shared<Ammo>();
			ammo0->add_ammo();
			double weight = 0.30;

			Assert::AreEqual(ammo0->total_weight(), weight);
		}

		TEST_METHOD(Ammo_fire_one)
		{
			auto ammo0 = std::make_shared<Ammo>();
			ammo0->fire();

			Assert::AreEqual(ammo0->quantity_left(), 0);
		}

		TEST_METHOD(Ammo_fire_zero)
		{
			auto ammo0 = std::make_shared<Ammo>();
			ammo0->fire();
			ammo0->fire();

			Assert::AreEqual(ammo0->quantity_left(), 0);
		}

		TEST_METHOD(Ammo_fire_two)
		{
			auto ammo0 = std::make_shared<Ammo>();
			ammo0->add_ammo();
			ammo0->fire();

			Assert::AreEqual(ammo0->quantity_left(), 1);
		}
	};
}