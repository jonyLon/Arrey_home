#include <iostream>
using namespace std;
int main()


{
    const int SIZE = 12;
    double money[SIZE]{};
    string month[SIZE] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
    for (size_t i = 0; i < SIZE; i++)
    {
        money[i] = 1500 + (rand() % 3001) / 0.3;
    }
    for (size_t i = 0; i < SIZE; i++)
    {
        cout << i + 1 << ") " << month[i] << ": " << (month[i].size() <= 3 ? "\t\t " : "\t") << money[i] << endl;
    }
    int start, end;
    cout << "Enter range(start,end): ";
    cin >> start >> end;
    if (start > end) {
        int tmp = start;
        start = end;
        end = tmp;
    }
    start--;
    end--;
    int min_index = start, max_index = start;
    for (int i = start; i <= end; i++) 
    {
        if (money[max_index] < money[i]) {
            max_index = i;
        }
        if (money[min_index] < money[i]) {
            min_index = i;
        }
    }
    cout << "Max month: " << month[max_index] << "\t" << money[max_index] << endl;
    cout << "Min month: " << month[min_index] << "\t" << money[min_index] << endl;
}

