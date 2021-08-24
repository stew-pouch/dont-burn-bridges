#include <iostream>
// I really feel like this a case where namespace std should be declared right here.

void print_triangle(int n);
void print_opposite_triangles(int n);
void print_ruler(int n);

int main() {
    using namespace std;
    int n = 0;
    cout << "Please provide a positive integer: ";
    cin >> n;
    if (n < 1){
        cout << "Invalid input." << endl;
        return 200;
    }
    cout << endl << "Half Pyramid: " << endl;
    print_triangle(n);
    cout << endl << "Half Hourglass: " << endl;
    print_opposite_triangles(n);
    cout << endl << "Ruler: " << endl;
    print_ruler(n);
    cout << endl;
    return 0;
}

void print_triangle(int n){
    using namespace std;
    if (n == 1){
        cout << '*' << endl;
    }
    else {
        print_triangle(n - 1);
        for (int t = 0; t < n; t++){
            cout << "* ";
        }
        cout << endl;
    }
    return;
}

void print_opposite_triangles(int n){
    using namespace std;
    if (n == 1){
        cout << '*' << endl;
    }
    else {
        for (int u = 0; u < n; u++){
            cout << "* ";
        }
        cout << endl;
        print_opposite_triangles(n - 1);
    }
    for (int v = 0; v < n; v++){
        cout << "* ";
    }
    cout << endl;
    return;
}

void print_ruler(int n){
    using namespace std;
    if (n == 1){
        cout << "- " << endl;
    }
    else if (n == 2){
        print_ruler((1));
        cout << "- - " << endl;
        print_ruler(1);
    }
    else if (n > 2){
        print_ruler((n - 1));
        for (int i = 1; i <= n; i++){
            cout << "- ";
        }
        cout << endl;
        print_ruler((n - 1));
    }
    return;
}
