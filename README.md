# NRE-Tester
NRE-Tester is a test API used in all NRE-API to test them
It's base on GoogleTest model.

## Features

- Simple test design
    You only need to write your test, include the API, compile and you're good to go.  
        #include <Header/NRE_Tester.cpp>

        TEST(FirstTestCase, FirstTest) {
            // ...
        }

        TEST(FirstTestCase, SecondTest) {
            // ...
        }

        TEST(SecondTestCase, FirstTest) {
            // ...
        }
    No need to write a main, or to call your tests. Only include NRE_Tester.cpp which will do all the work for you.

- Embedded Assert  
    A lot of assert function are available to create your tests :
    - assertTrue/False
    - assertEquals/NotEquals
    - assertLesser/Greater
    - assertLesserOrEquals/GreaterOrEquals
    - assertNull/NotNull
    - fail    

- Custom failure message  
    All those function accept only needed input, you can also give a custom failure message to those function, and/or give the test pointer (this) to have automatic detailed log in case of failure (with test information) :
    - assertTrue(bool)  
    - assertTrue(bool, std::string)  
    - assertTrue(this, bool, std::string)  


## Architecture

![UML](https://github.com/AbelDoc/NRE-Tester/blob/master/uml/Tester/NRE_Tester.png)
