
    /**
     * @file NRE_Tester.hpp
     * @brief Declaration of Tester's API's Header
     * @author Louis ABEL
     * @date 18/06/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once

    #include "../Tester/InternalTest/NRE_InternalTest.hpp"
    #include "../Tester/TestSuite/NRE_TestSuite.hpp"

    #define TEST_NAME(Case, Name) Case##Name##_Test

    #define TEST(Case, Name) class TEST_NAME(Case, Name) : public NRE::Tester::InternalTest {\
                                 public :\
                                    TEST_NAME(Case, Name)() : NRE::Tester::InternalTest(#Case, #Name) {\
                                    }\
                                    void internalTestBody() const override;\
                             };\
                             TEST_NAME(Case, Name) t##Name;\
                             void TEST_NAME(Case, Name)::internalTestBody() const
