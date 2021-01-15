#include "account.h"
#include <gtest/gtest.h>
namespace {
TEST(Account, Empty_Cosnstructor) {
    Account A1;
  EXPECT_EQ(0.0, A1.getBalance());
}

TEST(Account, Parameterized_Cosnstructor) {
    Account A1("500", "Priya", 600);
  EXPECT_EQ(600.0, A1.getBalance());
}

TEST(Account, Transaction) {
    Account A1("500", "Priya", 600);
    A1.debit(500);
    A1.credit(52.5);
    EXPECT_EQ(152.5, A1.getBalance());
}
}
