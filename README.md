# C++ Primer

Working through _C++ Primer (5ed)_ by Lippman, Lajoie & Moo.

### Compiling C++ code on a Mac.
Out of the box, macOS's XCode tools use an old version of `clang` that I couldn't get to work right with C++ 11. 

So, I did a `brew install gcc`, then `$alias g++='g++-8'`, and thereafter could compile programs using something like 
> `g++ -o Sales_item.out Sales_item.cpp -std=c++11`.
