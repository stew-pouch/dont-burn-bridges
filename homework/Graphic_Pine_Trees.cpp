#include <iostream>

void print_shifted_triangle (int size, int space, char symbol);
void print_pine_tree (int n, char symbol);

int main() {
    using namespace std;
    int size = 1;
    char shape = ' ';
    cout << "Please enter a positive integer >= 1: ";
    cin >> size;
    if (size < 1){
        cout << "Invalid size." << endl;
        return 200;
    }
    cout << endl << "Please specify a shape in the form of a character: ";
    cin >> shape; // Any character will do.
    cout << endl;
    print_pine_tree(size, shape);
    return 0;
}

void print_shifted_triangle (int size, int space, char symbol){
    using namespace std;
    for (int i = space; i > 0; i--){// margin spacer, applied on every line
        cout << ' ';
    }
    cout << symbol << endl;
    for (int j = 1; j <= size; j++){//Whole tree, line per line

        for (int k = space; k > j ; k--){// triangle spacer, applied on every line
            cout << ' ';
        }
        cout << symbol;
        for (int l = 1; l <= j; l++){
            cout << symbol << symbol;
        }
        cout << endl; //Each i line ends on newline here.
    }
    return; // Return on void included intentionally.
}

void print_pine_tree (int n, char symbol){
    for (int i = 1; i <= n; i++){
        print_shifted_triangle(i, n, symbol); //n is used twice: once to specify maximum structure
        //and again to specify spacing ceiling.
    }
    return;
}
