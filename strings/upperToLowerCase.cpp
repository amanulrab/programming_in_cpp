#include <iostream>
using namespace std;

int getLength(char arr[], int size)
{
    int count = 0;
    for (int index = 0; index < size; index++)
    {
        if (arr[index] == '\0')
        {
            break;
        }
        else
        {
            count++;
        }
    }

    return count;
}

// U->L ch-'A'+'a'
// L->U ch-'a'+'A'

void toLowerCase(char arr[], int size)
{
    int len = getLength(arr, size);
    for (int i = 0; i < len; i++)
    {
        char ch = arr[i];
        ch = ch - 'A' + 'a';
        arr[i] = ch;
    }
}
void toUpperCase(char arr[], int size)
{
    int len = getLength(arr, size);
    for (int i = 0; i < len; i++)
    {
        char ch = arr[i];

        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - 'a' + 'A';
        }
        arr[i] = ch;
    }
}

int main()
{
    char arr[1000];
    cin.getline(arr, 1000);
    // toUpperCase(arr, 1000);
    // cout << arr;
    toLowerCase(arr, 1000);
    cout << arr;
    return 0;
}