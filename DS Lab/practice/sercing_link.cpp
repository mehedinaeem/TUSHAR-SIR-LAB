#include <iostream>

class Node {
public:
    char data;
    int link;

    // Constructor
    Node(char d, int l) : data(d), link(l) {}
};

int main() {
    using namespace std;

    int s = 1, p, l;
    Node lk[12] = { {' ', -2}, {' ', -2}, {'O', 6}, {'T', -1}, {' ', -2}, {'X', 11}, {' ', 10}, {'N', -2}, {'I', 3}, {'E', 4}, {' ', 7}, {' ', -2} };
    char i[12] = { ' ', ' ', 'O', 'T', ' ', 'X', ' ', 'N', 'I', 'E', ' ', ' ' };
    char it = 'X'; // Corrected the initialization of 'it'
    p = s;

    while (p != -1) {
        if (it == i[p]) {
            l = p;
            cout << l << endl;
            return 0;
        } else {
            p = lk[p].link;
        }
    }

    cout << "Item not found in the array" << endl;
    return 0;
}
