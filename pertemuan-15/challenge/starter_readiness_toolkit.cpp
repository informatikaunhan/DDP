#include <algorithm>
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
using namespace std;

struct Record { string nama; int nilai; };

string platformName(){
#if defined(_WIN32)
    return "Windows";
#elif defined(__linux__)
    return "Linux";
#elif defined(__APPLE__)
    return "macOS";
#else
    return "Unknown";
#endif
}

vector<Record> load(const string& path){
    // TODO open, parse, validate, throw on serious error
    return {};
}

void sortByNilai(vector<Record>& data){
    // TODO descending
}

int searchNama(const vector<Record>& data, const string& nama){
    // TODO return index / -1
    return -1;
}

int main(){
    cout << "Platform: " << platformName() << '\n';
    try {
        auto data = load("data.txt");
        sortByNilai(data);
        // TODO menu list/search
    } catch(const exception& e){
        cerr << "Error: " << e.what() << '\n';
        return 1;
    }
}
