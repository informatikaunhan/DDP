#include <iostream>
int main(){
#if defined(__clang__)
 std::cout<<"Clang "<<__clang_major__<<"."<<__clang_minor__<<"\n";
#elif defined(__GNUC__)
 std::cout<<"GCC "<<__GNUC__<<"."<<__GNUC_MINOR__<<"\n";
#elif defined(_MSC_VER)
 std::cout<<"MSVC "<<_MSC_VER<<"\n";
#else
 std::cout<<"Compiler unknown\n";
#endif
}