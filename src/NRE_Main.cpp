
    /**
     * @file NRE_Main.cpp
     * @brief Test of Tester's API
     * @author Louis ABEL
     * @date 18/06/2019
     * @copyright CC-BY-NC-SA
     */

    #include "Header/NRE_Tester.cpp"

    using namespace NRE::Tester;

    TEST(TestCase, Test1) {
        assertTrue(true);
    }
    TEST(TestCase, Test2) {
        assertFalse(this, true);
    }
    TEST(TestCase, Test3) {
        assertTrue(false, "Test3 has failed");
    }
