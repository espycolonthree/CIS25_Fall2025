#include <iostream>
using namespace std;
int main() {
    string name;
    float cost;
    int quant;
    float total;

    cout << "Enter item name: \n";
    cin >> name;
    cout << "Enter item quantity: \n";
    cin >> quant;
    cout << "Enter item cost";
    cin >> cost;

    total = quant * cost;
    cout << "Total cost for " << name << ": $" << total << endl;
    return 0;
}