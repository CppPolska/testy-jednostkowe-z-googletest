#include <gtest/gtest.h>
#include <iostream>

#include "Infrastructure/MD5.hpp"

class MD5_Algorithm_FixtureExample2 : public ::testing::Test {

protected:

    static void SetUpTestSuite() {
        // Kod uruchamiany przed pierwszym testem wewnątrz `Test Case`
    }

    MD5_Algorithm_FixtureExample2() {
        // Konstruktor (jak można się spodziewać) jest uruchamiany przy tworzeniu obiektu testu
    }

    void SetUp() override {
        // Kod uruchamiany po konstruktorze, przed uruchomieniem testu
    }

    void TearDown() override {
        // Kod uruchamiany po wykonaniu kodu testu, przed wykonaniem destruktora
    }

    ~MD5_Algorithm_FixtureExample2() {
        // Destruktor uruchamiany podczas niszczenia obiektu testu
    }

    static void TearDownTestSuite() {
        // Kod uruchamiany po ostatnim teście wewnątrz `Test Case`
    }
};