#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"
#include "savings_account.h"
#include "checking_account.h"
#include<memory>
using std::unique_ptr; using std::make_unique;


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test new bank account object balance")
{
	unique_ptr<BankAccount> account = make_unique<SavingsAccount>();

	REQUIRE(account->get_balance() == 0);
}

TEST_CASE("Test static bank_balance top")
{
	unique_ptr<BankAccount> account = make_unique<SavingsAccount>();
	account->deposit(50);

	REQUIRE(account->get_bank_balance() == 51);
}

TEST_CASE("Test new bank account with given begin balance")
{
	unique_ptr<BankAccount> account = make_unique<CheckingAccount>(100);

	REQUIRE(account->get_balance() == 110);
}

TEST_CASE("Test bank account deposit")
{
	unique_ptr<BankAccount> account = make_unique<SavingsAccount>(100);
	account->deposit(50);

	REQUIRE(account->get_balance() == 101);

}

TEST_CASE("Test bank account deposit with given begin balance")
{
	unique_ptr<BankAccount> account = make_unique<CheckingAccount>(100);

	account->deposit(50);
	REQUIRE(account->get_balance() == 160);
}

TEST_CASE("Test bank account deposit with negative amount")
{
	unique_ptr<BankAccount> account = make_unique<CheckingAccount>();
	account->deposit(50);
	REQUIRE(account->get_balance() == 50);

	account->deposit(-10);
	REQUIRE(account->get_balance() == 50);
}

TEST_CASE("Test bank account withdraw")
{
	unique_ptr<BankAccount> account = make_unique<SavingsAccount>();
	account->deposit(50);
	REQUIRE(account->get_balance() == 51);

	account->withdraw(10);
	REQUIRE(account->get_balance() == 40);
}

TEST_CASE("Test bank account withdraw with a given begin balance")
{
	unique_ptr<BankAccount> account = make_unique<CheckingAccount>();
	account->withdraw(10);

	REQUIRE(account->get_balance() == 90);
}

TEST_CASE("Test Bank account withdraw with negative amount")
{
	unique_ptr<BankAccount> account = make_unique<SavingsAccount>();
	account->deposit(50);
	REQUIRE(account->get_balance() == 50);

	account->withdraw(-10);
	REQUIRE(account->get_balance() == 50);
}

TEST_CASE("Test Bank account withdraw with NSF")
{
	unique_ptr<BankAccount> account = make_unique<CheckingAccount>();
	account->deposit(50);
	REQUIRE(account->get_balance() == 50);

	account->withdraw(51);
	REQUIRE(account->get_balance() == 50);
}

TEST_CASE("Test static bank_balance")
{
	unique_ptr<BankAccount> account = make_unique<SavingsAccount>();
	account->deposit(50);

	REQUIRE(account->get_bank_balance() == 680);
}