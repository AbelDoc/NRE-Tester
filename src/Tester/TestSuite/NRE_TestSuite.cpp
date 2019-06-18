
    /**
     * @file NRE_TestSuite.cpp
     * @brief Implementation of Tester's API's Object : TestSuite
     * @author Louis ABEL
     * @date 18/06/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_TestSuite.hpp"
    #include "../InternalTest/NRE_InternalTest.hpp"

    namespace NRE {
        namespace Tester {

            TestSuite TestSuite::suiteInstance;

            void TestSuite::addTest(InternalTest* test) {
                suite.push_back(test);
            }

            void TestSuite::addLog(std::string const& log) {
                failLogs.push_back(log);
            }

            void TestSuite::runAll() {
                for (InternalTest* test : suite) {
                    test->internalTestBody();
                }
                if (hasFailed()) {
                    std::cout << "Test failed : " << failLogs.size() << std::endl;
                    std::cout << "Logs : " << std::endl;
                }
                for (std::string& log : failLogs) {
                    std::cout << log << std::endl;
                }
            }

            bool TestSuite::hasFailed() const {
                return failLogs.empty();
            }

            void TestSuite::runAllTests() {
                suiteInstance.runAll();
            }

            bool TestSuite::suiteHasFailed() {
                return suiteInstance.hasFailed();
            }

            void assertTrue(bool assert, std::string const& message) {
                if (!assert) {
                    TestSuite::suiteInstance.addLog(message);
                }
            }

            void assertFalse(bool assert, std::string const& message) {
                if (assert) {
                    TestSuite::suiteInstance.addLog(message);
                }
            }

        }
    }
