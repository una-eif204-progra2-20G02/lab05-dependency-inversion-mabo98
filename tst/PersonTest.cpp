//
// Created by Maikol Guzman on 8/24/20.
//
#include "IMoneySender.h"
#include <BankTransferSender.h>
#include <Person.h>
#include <CashSender.h>
#include <CheckSender.h>
#include "gtest/gtest.h"

TEST(PersonTestSuite, VerifyProcessPayment){
    IMoneySender* paymentByTransfer = new BankTransferSender();
    IMoneySender* paymentByCash = new CashSender();
    IMoneySender* paymentByCheck = new CheckSender();

    Person person;

    EXPECT_EQ(person.processMoneySender(paymentByTransfer), "Sending the money by transference");
    EXPECT_EQ(person.processMoneySender(paymentByCash), "Give the money in the hands");
    EXPECT_EQ(person.processMoneySender(paymentByCheck), "Sending the check with the money");
}
