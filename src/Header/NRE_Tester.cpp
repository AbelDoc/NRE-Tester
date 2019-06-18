
    /**
     * @file NRE_Tester.cpp
     * @brief Call of Tester's API
     * @author Louis ABEL
     * @date 18/06/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_Tester.hpp"

    int main(int, char**) {
        NRE::Tester::TestSuite::runAllTests();

        return (NRE::Tester::TestSuite::suiteHasFailed()) ? (-1) : (0);
    }
