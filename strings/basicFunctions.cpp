#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    char arr1[100];
    cout << "Enter the input" << endl;
    cin >> arr1;

    char arr2[100];
    cout << "Enter the input" << endl;
    cin >> arr2;

    cout << strcat(arr1, arr2);

    return 0;
}