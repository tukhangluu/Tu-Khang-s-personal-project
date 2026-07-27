#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double mean(const vector<double> &vec)
{
    if (vec.empty())
    {
        return 0.0;
    }
    double sum = 0.0;
    for (int i = 0; i < vec.size(); i++)
    {
        sum += vec[i];
    }
    return sum / vec.size();
}

double median(const vector<double> &vec)
{
    if (vec.empty())
    {
        return 0.0;
    }
    vector<double> sortedVec = vec;

    sort(sortedVec.begin(), sortedVec.end());

    int n = sortedVec.size();

    if (n % 2 != 0)
    {
        return sortedVec[n / 2];
    }
    else
    {
        return ((sortedVec[(n / 2) - 1]) + sortedVec[n / 2]) / 2;
    }
}

double mode(const vector<double> &vec)
{
    if (vec.empty())
    {
        return 0.0;
    }
    double mode = vec[0];
    int maxCount = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        double currentNum = vec[i];
        int count = 0;
        for (int j = 0; j < vec.size(); j++)
        {
            if (vec[j] == currentNum)
            {
                count++;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            mode = currentNum;
        }
    }
    return mode;
}

int main()
{
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    if (size <= 0)
    {
        cout << "Please enter positive numbers" << endl;
        return 0;
    }
    vector<double> numbers;
    cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; i++)
    {
        double temp;
        cin >> temp;
        numbers.push_back(temp);
    }
    cout << "\n----Statistic toolkit results----" << endl;
    cout << "Mean: " << mean(numbers) << endl;
    cout << "Median: " << median(numbers) << endl;
    cout << "Mode: " << mode(numbers) << endl;
    return 0;
}