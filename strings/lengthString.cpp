#include <iostream>
using namespace std;

int getLength(char arr[], int size)
{
    int count = 0;
    // int index = 0;
    // while (arr[index] != '\0')
    // {
    //     // jab tak array me null character nahi milta
    //     // tab tak increment karo
    //     // and aage badho
    //     count++;
    //     index++;
    // }

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

int main()
{
    char arr[100];
    // cin >> arr;
    // cin.getline(arr,100,'\t');
    cin.getline(arr, 100);
    cout << getLength(arr, 100) << endl;
    return 0;
}