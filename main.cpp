#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <set>
#include <random>
#include <chrono>
#include <thread>


using namespace std;

int main() {
    
    string a = "this is the simple example of how delayed output works.";
    this_thread::sleep_for(chrono::seconds(2));
    for (auto el : a) {
        cout << el << flush;
        if (el != ' ') {
            this_thread::sleep_for(chrono::milliseconds(100));
        }
    }
}
