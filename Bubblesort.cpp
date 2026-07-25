#include <iostream>
#include <vector>

using namespace std;

void Bubblesort(vector<int> &arr)
{ // bubble sort function
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main()
{
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    vector<int> arr(size); // create a vector with that size
    cout << "Please enter " << size << " numbers of your choice: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i]; // put the user's input into the array
    }
    Bubblesort(arr); // apply sorting function

    cout << "Sorted elements (decreasing order): "; // print the sorted result
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }

    return 0;
}
