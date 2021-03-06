
    /**
     * @file NRE_InternalTest.cpp
     * @brief Implementation of Tester's API's Object : InternalTest
     * @author Louis ABEL
     * @date 18/06/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_InternalTest.hpp"
    #include "../TestSuite/NRE_TestSuite.hpp"

    namespace NRE {
        namespace Tester {

            InternalTest::InternalTest(std::string const& c, std::string const& n) : testCase(c), testName(n) {
                TestSuite::suiteInstance.addTest(this);
            }

            std::string const& InternalTest::getTestCase() const {
                return testCase;
            }

            std::string const& InternalTest::getTestName() const {
                return testName;
            }

            std::string InternalTest::getDetails() const {
                return " : \n\tTestCase : " + getTestCase() + "\n\tTestName : " + getTestName();
            }

        }
    }
