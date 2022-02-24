#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    int x, y;

    cout << "please write down about x: ";
    cin >> x;

    cout << "please write down about y: ";
    cin >> y;

    if(x > y){
        cout << "x > y" << endl;
    }
    else if (x < y){
        cout  << "x < y" << endl;
    }
    else{
        cout << "x == y" << endl;
    }

    return 0;
}