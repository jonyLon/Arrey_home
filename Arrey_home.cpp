#include <iostream>
using namespace std;
int main()

{
    // const int size = 10;
    // int arr[size] = {},max,min;

    // srand((unsigned int)time(0));
    // for (int i = 0; i < size; i++) {
    //     arr[i] = 1 + rand() % 50;
    // }
    // max = arr[0];
    // min = arr[0];
    // for (int i = 1; i < size; i++) {
    //     if (arr[i] > max) {
    //         max = arr[i];
    //     }
    //     else if (arr[i] < min) {
    //         min = arr[i];
    //     }
    // }
    // cout << "Max number: " << max << endl;
    // cout << "Min number: " << min << endl << endl;

    // const int SIZE = 12;
    // double money[SIZE]{};
    // string month[SIZE] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
    // for (size_t i = 0; i < SIZE; i++)
    //{
    //     money[i] = 1500 + (rand() % 3001) / 0.3;
    // }
    // for (size_t i = 0; i < SIZE; i++)
    //{
    //     cout << i + 1 << ") " << month[i] << ": " << (month[i].size() <= 3 ? "\t" : "\t") << money[i] << endl;
    // }
    // int start, end;
    // cout << "Enter range(start,end): ";
    // cin >> start >> end;
    // if (start > end) {
    //     int tmp = start;
    //     start = end;
    //     end = tmp;
    // }
    // start--;
    // end--;
    // int min_index = start, max_index = start;
    // for (int i = start; i <= end; i++)
    //{
    //     if (money[max_index] < money[i]) {
    //         max_index = i;
    //     }
    //     if (money[min_index] > money[i]) {
    //         min_index = i;
    //     }
    // }
    // cout << "Max month: " << month[max_index] << "\t" << money[max_index] << endl;
    // cout << "Min month: " << month[min_index] << "\t" << money[min_index] << endl;

    int min, max, max_pos, min_pos, first, last, sum = 0, evenMult = 1, rangeMult = 1, sumRange = 0;
    const int range = 10;
    int arr[range] = {};
    srand((unsigned int)time(0));
    for (int i = 0; i < range; i++)
    {
        arr[i] = -50 + rand() % 100;
    }
    for (int i = 0; i < range; i++)
    {
        cout << arr[i] << "\t";
    }

    max = arr[0];
    min = arr[0];
    for (int i = 0; i < range; i++)
    {
        if (arr[i] < 0)
        {
            sum += arr[i];
        }
        if (arr[i] % 2 == 0)
        {
            evenMult *= arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
            max_pos = i;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            min_pos = i;
        }
    }
    for (int i = 0; i < range; i++)
    {
        if (arr[i] < 0)
        {
            first = i;
            break;
        }
    }
    for (int i = range - 1; i >= 0; i--)
    {
        if (arr[i] < 0)
        {
            last = i;
            break;
        }
    }
    for (int i = min_pos; i < max_pos; i++)
    {
        rangeMult *= arr[i];
    }
    for (int i = first; i < last; i++)
    {
        sumRange += arr[i];
    }

    cout << endl;
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
    cout << "The sum of negative elements: " << sum << endl;
    cout << "Product of elements between min and max elements: " << rangeMult << endl;
    cout << "The product of elements with even numbers: " << evenMult << endl;
    cout << "The sum of elements between the first and last negative elements: " << sumRange << endl;
}
