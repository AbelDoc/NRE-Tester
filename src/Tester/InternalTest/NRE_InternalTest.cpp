
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

            InternalTest::InternalTest() {
                TestSuite::suiteInstance.addTest(this);
            }

        }
    }
