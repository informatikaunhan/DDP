#include <cstdint>
#include <cstring>
#include <fstream>
#include <iostream>
using namespace std;
struct Record{char nama[32];int32_t nilai;};
int main(){Record a{};strncpy(a.nama,"Alya",sizeof(a.nama)-1);a.nilai=88;ofstream o("record.bin",ios::binary);o.write(reinterpret_cast<const char*>(&a),sizeof(a));o.close();Record b{};ifstream in("record.bin",ios::binary);if(in.read(reinterpret_cast<char*>(&b),sizeof(b)))cout<<b.nama<<" | "<<b.nilai<<" | size="<<sizeof(b)<<'\n';}