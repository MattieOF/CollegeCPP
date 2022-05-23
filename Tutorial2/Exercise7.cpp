// Tutorial 2 Exercise 7
// Matt Ware
// 15/09/2021

#include <iostream>
#include <string>

enum EnumLogType{LOG, WARNING, ERROR, ASSERT, EXCEPTION};

std::string GetLogTypeAsString(EnumLogType& logType)
{
    switch (logType)
    {
        case (LOG): return "Log";
        case (WARNING): return "Warning";
        case (ERROR): return "Error";
        case (ASSERT): return "Assert";
        case (EXCEPTION): return "Exception";
    }
    return "";
}

int main()
{
    const int CONST_INT = 534;
    const float CONST_FLOAT = 53.242f;

    enum EnumLogType currentLogType = WARNING;
    enum EnumLogType minimumLogType = LOG;
    enum EnumLogType maximumLogType = EXCEPTION;

    std::cout << "Int constant: " << CONST_INT << "\n";
    std::cout << "Float constant: " << CONST_FLOAT << "\n\n";

    // When output like this, the enum variables are displayed
    // as an integer value (currentLogType is 1, for example).
    // This is because enums are really just integers behind
    // the scenes, and when cout prints them, it just prints
    // their integer value.
    std::cout << "As ints:\n";
    std::cout << "currentLogType: " << currentLogType << "\n";
    std::cout << "minimumLogType: " << minimumLogType << "\n";
    std::cout << "maximumLogType: " << maximumLogType << "\n";

    std::cout << "\nAs std::string using switch statement:\n";
    std::cout << "currentLogType: " << GetLogTypeAsString(currentLogType) << "\n";
    std::cout << "minimumLogType: " << GetLogTypeAsString(minimumLogType) << "\n";
    std::cout << "maximumLogType: " << GetLogTypeAsString(maximumLogType) << std::endl;

    // std::cin.ignore(); This doesn't help in this situation
    std::cin.get();
    return 0;
}
