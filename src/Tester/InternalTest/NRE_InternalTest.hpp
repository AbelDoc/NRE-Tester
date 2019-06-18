
    /**
     * @file NRE_InternalTest.hpp
     * @brief Declaration of Tester's API's Object : InternalTest
     * @author Louis ABEL
     * @date 18/06/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once


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
                public :    // Methods
                    //## Constructor ##//
                        /**
                         * Construct the internal test and register it into the suite
                         */
                        InternalTest();

                    //## Methods ##//
                        /**
                         * The internal test body with used-defined instruction
                         */
                        virtual void internalTestBody() const = 0;
            };
        }
    }
