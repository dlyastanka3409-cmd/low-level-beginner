#include <iostream>
double months(double m) {
    return m * 12.0;
}
using namespace std;
int main() {
    cout << "Enter your age:" << endl;
    int age;
    cin >> age;
    cout << months(age) << endl;
}