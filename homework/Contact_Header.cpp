
// User is queried for a full name. The program returns as output the name, as would be expected in a database of contacts.
#include <iostream>
#include <string>

int main() {
    using namespace std;
    cout << "Please provide your full name: ";
    string first, middle, last, middleFixed = " .";
    cin >> first >> middle >> last;
    if ((middle[0] >= 'a') && (middle[0] <= 'z')){
        middleFixed[0] = (middle[0] - 32);
    }
    else {
        middleFixed[0] = middle[0];
    }
    if ((first[0] >= 'a') && (first[0] <= 'z')){
        first[0] = (first[0] - 32);
    }
    if ((last[0] >= 'a') && (last[0] <= 'z')){
        last[0] = (last[0] - 32);
    }
    cout << "Contact card: " << last << ", " << first << " " << middleFixed << endl;
    return 0;
}
