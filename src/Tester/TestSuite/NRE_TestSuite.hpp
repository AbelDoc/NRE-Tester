
    /**
     * @file NRE_TestSuite.hpp
     * @brief Declaration of Tester's API's Object : TestSuite
     * @author Louis ABEL
     * @date 18/06/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once

    #include <vector>
    #include <string>
    #include <sstream>
    #include <iostream>

    #include "../InternalTest/NRE_InternalTest.hpp"

     /**
     * @namespace NRE
     * @brief The NearlyRealEngine's global namespace
     */
    namespace NRE {
        /**
         * @namespace Tester
         * @brief Tester's API
         */
        namespace Tester {

            /**
             * @class TestSuite
             * @brief Describe the test suite used to store all used-defined test and run them
             */
            class TestSuite {
                private :   // Fields
                    std::vector<InternalTest*> suite;   /**< The test suite */
                    std::vector<std::string> failLogs;   /**< Logs for failed assertion */

                public :    // Methods
                    /**
                     * Add a test in the suite
                     * @param test the test to add
                     */
                    void addTest(InternalTest* test);
                    /**
                     * Add a failed assertion log
                     * @param log the log to add
                     */
                    void addLog(std::string const& log);
                    /**
                     * Run all the suite tests
                     */
                    void runAll();
                    /**
                     * @return if the suite has failed
                     */
                    bool hasFailed() const;

                public :    // Static
                    static TestSuite suiteInstance; /**< The test suite instance */

                    /**
                     * Run all the suite instance tests
                     */
                    static void runAllTests();
                    /**
                     * @return if the suite instance has failed
                     */
                    static bool suiteHasFailed();
            };

            /**
             * Trigger a fail
             * @param message the fail message
             */
            void fail(std::string const& message = "Fail");
            /**
             * Trigger a fail
             * @param test    the test for detailed information
             * @param message the fail message
             */
            void fail(const InternalTest* test, std::string const& message = "Fail");
            /**
             * Except a true as input
             * @param assert  the assert to test
             * @param message the message if the assertion fail
             */
            void assertTrue(bool assert, std::string const& message = "True Assertion Failed");
            /**
             * Except a true as input
             * @param test    the test for detailed information
             * @param assert  the assert to test
             * @param message the message if the assertion fail
             */
            void assertTrue(const InternalTest* test, bool assert, std::string const& message = "True Assertion Failed");
            /**
             * Except a false as input
             * @param assert  the assert to test
             * @param message the message if the assertion fail
             */
            void assertFalse(bool assert, std::string const& message = "False Assertion Failed");
            /**
             * Except a false as input
             * @param test    the test for detailed information
             * @param assert  the assert to test
             * @param message the message if the assertion fail
             */
            void assertFalse(const InternalTest* test, bool assert, std::string const& message = "False Assertion Failed");
            /**
             * Except both input to be equals, use the == operator
             * @param lhs     the left input
             * @param rhs     the right input
             * @param message the message if the assertion fail
             */
            template <class T>
            void assertEquals(T const& lhs, T const& rhs, std::string const& message = "Equals Assertion Failed") {
                if (!(lhs == rhs)) {
                    std::stringstream lhsStr;
                    std::stringstream rhsStr;
                    lhsStr << lhs;
                    rhsStr << rhs;
                    TestSuite::suiteInstance.addLog(message + "\n\tExcepted : " + lhsStr.str() + "\n\tGet : " + rhsStr.str());
                }
            }
            /**
             * Except both input to be equals, use the == operator
             * @param test    the test for detailed information
             * @param lhs     the left input
             * @param rhs     the right input
             * @param message the message if the assertion fail
             */
            template <class T>
            void assertEquals(const InternalTest* test, T const& lhs, T const& rhs, std::string const& message = "Equals Assertion Failed") {
                if (!(lhs == rhs)) {
                    std::stringstream lhsStr;
                    std::stringstream rhsStr;
                    lhsStr << lhs;
                    rhsStr << rhs;
                    TestSuite::suiteInstance.addLog(message + test->getDetails() + "\n\tExcepted : " + lhsStr.str() + "\n\tGet : " + rhsStr.str());
                }
            }
            /**
             * Except both input to be not equals, use the != operator
             * @param lhs     the left input
             * @param rhs     the right input
             * @param message the message if the assertion fail
             */
            template <class T>
            void assertNotEquals(T const& lhs, T const& rhs, std::string const& message = "NotEquals Assertion Failed") {
                if (!(lhs != rhs)) {
                    std::stringstream lhsStr;
                    lhsStr << lhs;
                    TestSuite::suiteInstance.addLog(message + "\n\tExcepted : not " + lhsStr.str() + "\n\tGet : " + lhsStr.str());
                }
            }
            /**
             * Except both input to be not equals, use the != operator
             * @param test    the test for detailed information
             * @param lhs     the left input
             * @param rhs     the right input
             * @param message the message if the assertion fail
             */
            template <class T>
            void assertNotEquals(const InternalTest* test, T const& lhs, T const& rhs, std::string const& message = "NotEquals Assertion Failed") {
                if (!(lhs != rhs)) {
                    std::stringstream lhsStr;
                    lhsStr << lhs;
                    TestSuite::suiteInstance.addLog(message + test->getDetails() + "\n\tExcepted : not " + lhsStr.str() + "\n\tGet : " + lhsStr.str());
                }
            }
            /**
             * Except the first input to be lesser than the second, use the < operator
             * @param lhs     the left input
             * @param rhs     the right input
             * @param message the message if the assertion fail
             */
            template <class T>
            void assertLesser(T const& lhs, T const& rhs, std::string const& message = "Lesser Assertion Failed") {
                if (lhs >= rhs) {
                    std::stringstream lhsStr;
                    std::stringstream rhsStr;
                    lhsStr << lhs;
                    rhsStr << rhs;
                    TestSuite::suiteInstance.addLog(message + "\n\tExcepted : < " + lhsStr.str() + "\n\tGet : " + rhsStr.str());
                }
            }
            /**
             * Except the first input to be lesser than the second, use the < operator
             * @param test    the test for detailed information
             * @param lhs     the left input
             * @param rhs     the right input
             * @param message the message if the assertion fail
             */
            template <class T>
            void assertLesser(const InternalTest* test, T const& lhs, T const& rhs, std::string const& message = "Lesser Assertion Failed") {
                if (lhs >= rhs) {
                    std::stringstream lhsStr;
                    std::stringstream rhsStr;
                    lhsStr << lhs;
                    rhsStr << rhs;
                    TestSuite::suiteInstance.addLog(message + test->getDetails() + "\n\tExcepted : < " + lhsStr.str() + "\n\tGet : " + rhsStr.str());
                }
            }
            /**
             * Except the first input to be greater than the second, use the > operator
             * @param lhs     the left input
             * @param rhs     the right input
             * @param message the message if the assertion fail
             */
            template <class T>
            void assertGreater(T const& lhs, T const& rhs, std::string const& message = "Greater Assertion Failed") {
                if (lhs <= rhs) {
                    std::stringstream lhsStr;
                    std::stringstream rhsStr;
                    lhsStr << lhs;
                    rhsStr << rhs;
                    TestSuite::suiteInstance.addLog(message + "\n\tExcepted : > " + lhsStr.str() + "\n\tGet : " + rhsStr.str());
                }
            }
            /**
             * Except the first input to be greater than the second, use the > operator
             * @param test    the test for detailed information
             * @param lhs     the left input
             * @param rhs     the right input
             * @param message the message if the assertion fail
             */
            template <class T>
            void assertGreater(const InternalTest* test, T const& lhs, T const& rhs, std::string const& message = "Greater Assertion Failed") {
                if (lhs <= rhs) {
                    std::stringstream lhsStr;
                    std::stringstream rhsStr;
                    lhsStr << lhs;
                    rhsStr << rhs;
                    TestSuite::suiteInstance.addLog(message + test->getDetails() + "\n\tExcepted : > " + lhsStr.str() + "\n\tGet : " + rhsStr.str());
                }
            }
            /**
             * Except the first input to be lesser than the second, use the <= operator
             * @param lhs     the left input
             * @param rhs     the right input
             * @param message the message if the assertion fail
             */
            template <class T>
            void assertLesserOrEquals(T const& lhs, T const& rhs, std::string const& message = "Lesser or Equals Assertion Failed") {
                if (lhs > rhs) {
                    std::stringstream lhsStr;
                    std::stringstream rhsStr;
                    lhsStr << lhs;
                    rhsStr << rhs;
                    TestSuite::suiteInstance.addLog(message + "\n\tExcepted : <= " + lhsStr.str() + "\n\tGet : " + rhsStr.str());
                }
            }
            /**
             * Except the first input to be lesser than the second, use the <= operator
             * @param test    the test for detailed information
             * @param lhs     the left input
             * @param rhs     the right input
             * @param message the message if the assertion fail
             */
            template <class T>
            void assertLesserOrEquals(const InternalTest* test, T const& lhs, T const& rhs, std::string const& message = "Lesser or Equals Assertion Failed") {
                if (lhs > rhs) {
                    std::stringstream lhsStr;
                    std::stringstream rhsStr;
                    lhsStr << lhs;
                    rhsStr << rhs;
                    TestSuite::suiteInstance.addLog(message + test->getDetails() + "\n\tExcepted : <= " + lhsStr.str() + "\n\tGet : " + rhsStr.str());
                }
            }
            /**
             * Except the first input to be greater than the second, use the >= operator
             * @param lhs     the left input
             * @param rhs     the right input
             * @param message the message if the assertion fail
             */
            template <class T>
            void assertGreaterOrEquals(T const& lhs, T const& rhs, std::string const& message = "Greater or Equals Assertion Failed") {
                if (lhs < rhs) {
                    std::stringstream lhsStr;
                    std::stringstream rhsStr;
                    lhsStr << lhs;
                    rhsStr << rhs;
                    TestSuite::suiteInstance.addLog(message + "\n\tExcepted : >= " + lhsStr.str() + "\n\tGet : " + rhsStr.str());
                }
            }
            /**
             * Except the first input to be greater than the second, use the >= operator
             * @param test    the test for detailed information
             * @param lhs     the left input
             * @param rhs     the right input
             * @param message the message if the assertion fail
             */
            template <class T>
            void assertGreaterOrEquals(const InternalTest* test, T const& lhs, T const& rhs, std::string const& message = "Greater or Equals Assertion Failed") {
                if (lhs < rhs) {
                    std::stringstream lhsStr;
                    std::stringstream rhsStr;
                    lhsStr << lhs;
                    rhsStr << rhs;
                    TestSuite::suiteInstance.addLog(message + test->getDetails() + "\n\tExcepted : >= " + lhsStr.str() + "\n\tGet : " + rhsStr.str());
                }
            }
            /**
             * Except the input to be a nullptr
             * @param ptr     the pointer to test
             * @param message the message if the assertion fail
             */
            void assertNull(const void* ptr, std::string const& message = "Null Assertion Failed");
            /**
             * Except the input to be a nullptr
             * @param test    the test for detailed information
             * @param ptr     the pointer to test
             * @param message the message if the assertion fail
             */
            void assertNull(const InternalTest* test, const void* ptr, std::string const& message = "Null Assertion Failed");
            /**
             * Except the input to not be a nullptr
             * @param ptr     the pointer to test
             * @param message the message if the assertion fail
             */
            void assertNotNull(const void* ptr, std::string const& message = "NotNull Assertion Failed");
            /**
             * Except the input to not be a nullptr
             * @param test    the test for detailed information
             * @param ptr     the pointer to test
             * @param message the message if the assertion fail
             */
            void assertNotNull(const InternalTest* test, const void* ptr, std::string const& message = "NotNull Assertion Failed");
        }
    }
