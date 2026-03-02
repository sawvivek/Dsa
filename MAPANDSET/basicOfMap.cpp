#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<string, int> mp;
    // method 1
    pair<string, int> p1;
    p1.first = "Vivek";
    p1.second = 76;

    mp.insert(p1);

    // method 2
    mp["Aditya"] = 80;
    mp["Ranjan"] = 90;
    mp["Rahul"] = 85;

    for (pair<string, int> el : mp)
    {
        cout << el.first << " " << el.second << endl;
    }
    mp.erase("Aditya");
    mp.erase("Ramesh"); // does not exist, so nothing will happen
    for (auto el : mp)
    {
        cout << el.first << " " << el.second << endl;
    }
    cout << "Size of map: " << mp.size() << endl;
}