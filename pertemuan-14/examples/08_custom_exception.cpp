#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;
class DataError:public runtime_error{public:explicit DataError(const string& m):runtime_error(m){}};
void validasi(int n){if(n<0||n>100)throw DataError("nilai harus 0..100");}
int main(){try{validasi(120);}catch(const DataError& e){cerr<<e.what()<<'\n';}catch(const exception& e){cerr<<"umum: "<<e.what()<<'\n';}}