# projet_strings_c-

In this project we aim at implementing a subset of the string class from the standard library (stl) without the use of external libraries in the implementation of our class. For the maximum potential length the string can reach due to known system or library implementation limitations we use 100 as an arbitrary value that will allow for limit cases to be tested.

This group project is made by three members : Evanne Martin, Lucie Schwoertzig, and Elise Piette.

In this new call string we implement the following function:
        copy constructor
        c_str()
        size()
        clear()
        operator=(char)
        operator+(const string&, const char*)
        constructor from a c-string
        length()
        max_size()
        resize(size_t, char)
        operator=(const string&)
        operator+(const string&, char)
        destructor
        capacity()
        empty()
        reserve(size_t)
        operator=(const char*)
        operator+(const string&, const string&)

Files present in the project:
-README.md: this file, describe the project
-main.cpp: file to compile in order to test the function
-string.cpp: contains the description of the different constructors and the destructor 
-string.h: header file, definition of function, attributes and classes.
-studentA.cpp: function assigned to the first member
-student_B.cpp: function assigned to the second member
-student_c.cpp: function assigned to the third member
-main: to execute

