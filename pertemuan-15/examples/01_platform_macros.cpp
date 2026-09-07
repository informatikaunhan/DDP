#include <iostream>
int main(){
#if defined(_WIN32)
 std::cout<<"Windows\n";
#elif defined(__linux__)
 std::cout<<"Linux\n";
#elif defined(__APPLE__)
 std::cout<<"macOS\n";
#else
 std::cout<<"Unknown\n";
#endif
}