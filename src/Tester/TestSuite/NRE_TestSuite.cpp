
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
                std::size_t counter = 0;
                for (InternalTest* test : suite) {
                    std::cout << "\r" << counter << "/" << suite.size();
                    counter++;
                    try {
                        test->internalTestBody();
                    } catch (std::exception const& e) {
                        fail(test, "Fail by exception : " + std::string(e.what()));
                    }
                }
                std::cout << "\r" << counter << "/" << suite.size() << std::endl;
                if (hasFailed()) {
                    std::cout << "Test failed : " << failLogs.size() << std::endl;
                    std::cout << "Logs : " << std::endl;
                }
                for (std::string& log : failLogs) {
                    std::cout << log << std::endl;
                }
            }

            bool TestSuite::hasFailed() const {
                return !failLogs.empty();
            }

            void TestSuite::runAllTests() {
                suiteInstance.runAll();
            }

            bool TestSuite::suiteHasFailed() {
                return suiteInstance.hasFailed();
            }

            void fail(std::string const& message) {
                TestSuite::suiteInstance.addLog(message);
            }

            void fail(const InternalTest* test, std::string const& message) {
                TestSuite::suiteInstance.addLog(message + test->getDetails());
            }

            void assertTrue(bool assert, std::string const& message) {
                if (!assert) {
                    TestSuite::suiteInstance.addLog(message + "\n\tExcepted : true\n\tGet : false");
                }
            }

            void assertTrue(const InternalTest* test, bool assert, std::string const& message) {
                if (!assert) {
                    TestSuite::suiteInstance.addLog(message + test->getDetails() + "\n\tExcepted : true\n\tGet : false");
                }
            }

            void assertFalse(bool assert, std::string const& message) {
                if (assert) {
                    TestSuite::suiteInstance.addLog(message + "\n\tExcepted : false\n\tGet : true");
                }
            }

            void assertFalse(const InternalTest* test, bool assert, std::string const& message) {
                if (assert) {
                    TestSuite::suiteInstance.addLog(message + test->getDetails() + "\n\tExcepted : false\n\tGet : true");
                }
            }

            void assertNull(const void* ptr, std::string const& message) {
                if (ptr != nullptr) {
                    TestSuite::suiteInstance.addLog(message + "\n\tExcepted : nullptr\n\tGet : " + reinterpret_cast <const char*> (&ptr));
                }
            }

            void assertNull(const InternalTest* test, const void* ptr, std::string const& message) {
                if (ptr != nullptr) {
                    TestSuite::suiteInstance.addLog(message + test->getDetails() + "\n\tExcepted : nullptr\n\tGet : " + reinterpret_cast <const char*> (&ptr));
                }
            }

            void assertNotNull(const void* ptr, std::string const& message) {
                if (ptr == nullptr) {
                    TestSuite::suiteInstance.addLog(message + "\n\tExcepted : not nullptr\n\tGet : nullptr");
                }
            }

            void assertNotNull(const InternalTest* test, const void* ptr, std::string const& message) {
                if (ptr == nullptr) {
                    TestSuite::suiteInstance.addLog(message + test->getDetails() + "\n\tExcepted : not nullptr\n\tGet : nullptr");
                }
            }

        }
    }
