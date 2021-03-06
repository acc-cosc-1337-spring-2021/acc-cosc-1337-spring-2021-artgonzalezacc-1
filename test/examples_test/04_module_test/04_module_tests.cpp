#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "while.h"
#include "value_ref.h"
#include "for_ranged.h"
#include "vec.h"

using std::string;
using std::vector;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test sum of squares function")
{
	REQUIRE(sum_of_squares(3) == 14);
	REQUIRE(sum_of_squares(4) == 30);
	REQUIRE(sum_of_squares(5) == 55);
}

TEST_CASE("Test call by value parameter", "a copy of value is sent to function")
{
	auto num1 = 5;
	auto num2 = 0;
	pass_by_val_and_ref(num1, num2);
	
	REQUIRE(num1 == 5);
}

TEST_CASE("Test call by reference parameter", "a copy of value is sent to function")
{
	auto num1 = 5;
	auto num2 = 0;
	pass_by_val_and_ref(num1, num2);
	
	REQUIRE(num2 == 50);
}

TEST_CASE("Test calculate weekly pay for salaried employees")
{
	REQUIRE(calculate_weekly_pay(52000) == 1000);
}

TEST_CASE("Test calculate weekly pay for hourly employees")
{
	REQUIRE(calculate_weekly_pay(40, 10) == 400);
}

TEST_CASE("Test string for ranged by value")
{
	string name = "John";
	loop_string_w_for_range(name);

	REQUIRE(name == "John");
}

TEST_CASE("Test string for ranged by reference param")
{
	string name = "John";
	loop_string_w_for_range_ref(name);

	REQUIRE(name == "zzzz");
}

TEST_CASE("Test vector as value parameter")
{
	vector<int> expected_values{10, 3, 2};
	vector<int> nums{10, 3, 2};//create and assign nums

	loop_vector_w_index_val(nums);

	REQUIRE(nums == expected_values);
}

TEST_CASE("Test vector as reference parameter")
{
	vector<int> expected_values{-1, -1, -1};
	vector<int> nums{10, 3, 2};//create and assign nums

	loop_vector_w_index_ref(nums);

	REQUIRE(nums == expected_values);	
}

TEST_CASE("Test vector for ranged value parameter")
{
	vector<int> expected_values{10, 3, 2};
	vector<int> nums{10, 3, 2};//create and assign nums

	loop_vector_w_for_ranged(nums);

	REQUIRE(nums == expected_values);		
}

TEST_CASE("Test vector for ranged reference parameter")
{
	vector<int> expected_values{-1, -1, -1};
	vector<int> nums{10, 3, 2};//create and assign nums

	loop_vector_w_for_ranged_ref(nums);
	REQUIRE(nums == expected_values);
}