#include <iostream>
#include <string>

using namespace std;

int askNumber(int high, int low = 1);

int main () {
    int number = askNumber(5);
    cout << "Thanks for entering: " << number << "\n\n";

    number = askNumber(10,5);
    cout << "Thanks for entering: " << number << "\n\n";

    return 0;
}

int askNumber(int high, int low) {
    int num;
    do {
        cout << "Please enter a number" << "(" << low << " - " << high << "): ";
        cin >> num;
    }while (num > high || num < low);
    return num;
}


//// Global Reach
//// Demonstrates global vars
//
//#include <iostream>
//
//using namespace std;
//
//int glob = 10;
//
//void access_global();
//void hide_global();
//void change_global();
//
//
//int main() {
//    cout << "In main() glob is: " << glob << "\n\n";
//    access_global();
//
//    hide_global();
//    cout << "In main() glob is: " << glob << "\n\n";
//
//    change_global();
//    cout << "In main() glob is: " << glob << "\n\n";
//
//    return 0;
//}
//
//void access_global() {
//    cout << "In access_global() glob is: " << glob << "\n\n";
//}
//void hide_global() {
//    int glob = 0;
//    cout << "In hide_global() glob is: " << glob << "\n\n";
//}
//void change_global() {
//    glob = -10;
//    cout << "In change_global() glob is:" << glob << "\n\n";
//}
//

