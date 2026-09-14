# CSC SEC 201 (Programming in C++)
This repository contains the program/code of CSC SEC 201 (3rd Semester)

## How to run the Programs?
### On Windows
- if you're using IDE like DevC++, just copy the code and Compile then Run.

- Best way is to use an online compiler like [Onlinegdb](https://www.onlinegdb.com/online_c++_compiler) or [Programiz](https://www.programiz.com/cpp-programming/online-compiler/)

- For compilers like g++: <br>
<i> Note: The filename 'filename.cpp' and 'output.exe', can be different. This is just an example.</i>
```bash 
g++ filename.cpp -o outputfile.exe
```
Then run the .exe file:
```bash
outputfile.exe
```
The command `g++` may differ if you're using some other compiler like Clang or MSVC
<i>(this applies to Visual Studio Code as well, if you are using it)</i>

### On Linux
- Running C++ programs in Linux is usually easier. Just install g++ and Compile and Run. <br>
Install g++ on Linux
  ```bash
  sudo apt install g++
  ```
  Compile the code<br>
  ```bash
  g++ filename.cpp -o outputfilename
  ```
    Then run
    ```bash
  ./bank
    ```
  
- If you are on a linux system and want to make the executable for a windows system, you can use the following command which is using g++ compiler
```bash
x86_64-w64-mingw32-g++ filename.cpp -o outputfile.exe
```

### On macOS

* On macOS, you can use the Clang compiler that comes with Apple's Command Line Tools. First, install the Command Line Tools:

  ```bash
  xcode-select --install
  ```

* Check if Clang is installed:

  ```bash
  clang++ --version
  ```

* Compile the code:

  ```bash
  clang++ filename.cpp -o outputfilename
  ```

* Then run the program:

  ```bash
  ./outputfilename
  ```

* For example:

  ```bash
  clang++ Bank_Account.cpp -o bank
  ```

  Then run:

  ```bash
  ./bank
  ```

* You can also use `g++` if you have installed GCC using Homebrew:

  ```bash
  brew install gcc
  ```

  Then compile and run:

  ```bash
  g++ filename.cpp -o outputfilename
  ./outputfilename
  ```

<i>Note: macOS normally uses Clang (`clang++`) as its default C++ compiler. The executable generated on macOS is a macOS executable and cannot normally be run directly on Windows or Linux.</i>
