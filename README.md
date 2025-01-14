# cpp-fun
C++ Fundamentals

Write a program that performs the following input/output:

```
Enter the radius of the sphere: 19.1
The volume of a sphere of radius 19.1 is 29186.9 cubic inches
```

## Building & Executing a Program with gnu tools

```shell
c++ simple.cpp
```

By default this will name the executable (target) `a.out` (on a *nix-based machine) or `a.exe` (on a Windows machine). Thus, to execute the target, we just type its name:

```shell
./a.out
Enter the radius of the sphere: 19.1
The volume of a sphere of radius 19.1 inches is 29186.9 cubic inches

```

If we want to explicitly name the target, we use a command-line switch:

```shell
c++ -o simple_demo simple.cpp
```

and then run it accordingly:

```shell
./simple_demo
Enter the radius of the sphere: 19.1
The volume of a sphere of radius 19.1 inches is 29186.9 cubic inches

```

## Building & Executing a Program with cmake

Step 1, tell `cmake` where to keep build-related files (while also specifying a build-type called "Debug"):

```shell
cmake -B ./build -DCMAKE_BUILD_TYPE=Debug
-- The C compiler identification is GNU 9.4.0
-- The CXX compiler identification is GNU 9.4.0
-- Check for working C compiler: /usr/bin/cc
-- Check for working C compiler: /usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/c++
-- Check for working CXX compiler: /usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: /workspaces/cpp-fun/build
```

Step 2, we build the executable, also referred to as the target:

```shell
cmake --build ./build --config Debug
Scanning dependencies of target simple_demo
[ 50%] Building CXX object CMakeFiles/simple_demo.dir/simple.cpp.o
[100%] Linking CXX executable simple_demo
[100%] Built target simple_demo
```

Step 3, and if all goes well, we can execute the `simple_demo` target as such:

```shell
./build/simple_demo
Hello
```

Any time you make changes to your source code, you'll need to repeat steps 2 and 3. If you add more files to your executable, you'll need to update the `CMakeLists.txt` and run through all three steps.

And IDE such `Visual Studio Code` (with the appropriate extension), or `CLion`, work nicely with `cmake` behind the scenes making this iterative development cycle easy to manage and maintain.
