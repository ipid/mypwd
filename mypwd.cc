#include <filesystem>
#include <iostream>
#include <cstdlib>
using namespace std;
namespace fs = std::filesystem;

int main() {
    string pwd = fs::current_path().string();
    string home;
    if (const char *homeCstr = getenv("HOME"); homeCstr != nullptr) {
        home = homeCstr;
    }

    cout << pwd << endl << home << endl;
}
