
    /**
     * @file NRE_InternalTest.hpp
     * @brief Declaration of Tester's API's Object : InternalTest
     * @author Louis ABEL
     * @date 18/06/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once

    #include <string>

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
             * @class InternalTest
             * @brief Describe an internal test used to register a user test inside the suite
             */
            class InternalTest {
                private :   // Fields
                    std::string testCase;   /**< The test case family */
                    std::string testName;   /**< The test name */

                public :    // Methods
                    //## Constructor ##//
                        /**
                         * Construct the internal test and register it into the suite
                         * @param c the test case name
                         * @param n the test name
                         */
                        InternalTest(std::string const& c, std::string const& n);
    
                    //## Deconstructor ##//
                        /**
                         * InternalTest Deconstructor
                         */
                        virtual ~InternalTest() = default;

                    //## Getter ##//
                        /**
                         * @return the test case name
                         */
                        std::string const& getTestCase() const;
                        /**
                         * @return the test name
                         */
                        std::string const& getTestName() const;
                        /**
                         * @return the test details
                         */
                        std::string getDetails() const;

                    //## Methods ##//
                        /**
                         * The internal test body with used-defined instruction
                         */
                        virtual void internalTestBody() const = 0;
            };
        }
    }
