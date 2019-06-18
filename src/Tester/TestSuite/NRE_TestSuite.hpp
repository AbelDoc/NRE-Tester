
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
    #include <iostream>

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

            class InternalTest;

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
             * Except a true as input
             * @param assert  the assert to test
             * @param message the message if the assertion fail
             */
            void assertTrue(bool assert, std::string const& message = "True Assertion Failed");
            /**
             * Except a false as input
             * @param assert  the assert to test
             * @param message the message if the assertion fail
             */
            void assertFalse(bool assert, std::string const& message = "False Assertion Failed");
        }
    }
