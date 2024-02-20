#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;

void printArr(vector<vector<int>> bins, int n, int columnSize)
{
    for (int i = 0; i < n; i++) // For Row (No of bins)
    {
        cout << "Bin " << i + 1 << "  ";
        for (int j = 0; j < columnSize; j++) // Column (No of elements in each row(bin))
        {
            cout << bins[i][j] << " ";
        }
        cout << endl;
    }
}

int getElement(vector<int> dataArr, int index)
{
    if (index >= 0 && index < dataArr.size())
    {
        return dataArr[index];
    }
    return 0;
}

void equalDepthBinning(vector<vector<int>> &bins, vector<int> dataArr, int n, int columnSize)
{
    cout << endl
         << "EQUAL DEPTH BINING";
    int idx = 0;
    for (int i = 0; i < n; i++) // For Row (No of bins)
    {
        vector<int> row;
        for (int j = 0; j < columnSize; j++) // Column (No of elements in each row(bin))
        {
            row.push_back(getElement(dataArr, idx++));
        }
        bins.push_back(row);
    }
}

void equalWidthBinning(vector<vector<int>> &bins, vector<int> dataArr, int n, int columnSize)
{
    cout << "EQUAL WIDTH BINING" << endl;
    int idx = 0;
    for (int i = 0; i < n; i++) // For Row (No of bins)
    {
        vector<int> row;
        for (int j = 0; j < columnSize; j++) // Column (No of elements in each row(bin))
        {
            row.push_back(getElement(dataArr, idx++));
        }
        bins.push_back(row);
    }
}

void byMean(vector<vector<int>> bins, int n, int columnSize)
{
    cout << "SMOOTHING BY MEAN"
         << " " << endl;

    vector<int> meanSum;
    for (int i = 0; i < n; i++) // For Row (No of bins)
    {
        int mean = 0;
        for (int j = 0; j < columnSize; j++) // Column (No of elements in each row(bin))
        {
            mean += bins[i][j];
        }
        meanSum.push_back(mean);
    }
    for (int i = 0; i < n; i++) // For Row (No of bins)
    {
        int mean = meanSum[i] / columnSize;
        for (int j = 0; j < columnSize; j++) // Column (No of elements in each row(bin))
        {
            bins[i][j] = mean;
        }
    }
    printArr(bins, n, columnSize);
}

void byMedian(vector<vector<int>> bins, int n, int columnSize)
{
    cout << "SMOOTHING BY MEDIAN"
         << " " << endl;

    vector<int> median;
    for (int i = 0; i < n; i++) // For Row (No of bins)
    {
        int tempMedian = 0;
        if (columnSize % 2 == 0) // Even
        {
            int tempIndex = (columnSize - 1) / 2;
            tempMedian = (bins[i][tempIndex] + bins[i][tempIndex + 1]) / 2;
        }
        else // Odd
        {
            int tempIndex = (columnSize - 1) / 2;
            tempMedian = bins[i][tempIndex];
        }

        for (int j = 0; j < columnSize; j++) // Column (No of elements in each row(bin))
        {
            // meanSum.push_back(mean);
            bins[i][j] = tempMedian;
        }
    }
    printArr(bins, n, columnSize);
}

void byBinBoundaries(vector<vector<int>> bins, int n, int columnSize)
{
    cout << "SMOOTHING BY BIN BOUNDARIES"
         << " " << endl;

    for (int i = 0; i < n; i++) // For Row (No of bins)
    {
        int min = bins[i][0];
        int max = bins[i][columnSize - 1];
        for (int j = 1; j < columnSize - 1; j++) // Column (No of elements in each row(bin))
        {
            if (bins[i][j] - min <= max - bins[i][j])
            {
                bins[i][j] = min;
            }
            else
            {
                bins[i][j] = max;
            }
        }
    }
    printArr(bins, n, columnSize);
}

int main()
{
    vector<int> dataArr(20);
    vector<vector<int>> bins;
    int n;
    srand(time(0));
    cout << "Enter number of Bins: ";
    cin >> n;

    for (int i = 0; i < 20; i++)
    {
        dataArr[i] = rand() % 100;
    }
    sort(dataArr.begin(), dataArr.end());
    cout << "SORTED DATA: ";
    for (int i = 0; i < 20; i++)
    {
        cout << dataArr[i] << " ";
    }

    int columnSize = 20 / n; // FOr No elements in each bin
    equalDepthBinning(bins, dataArr, n, columnSize);

    cout << endl;
    printArr(bins, n, columnSize);
    cout << endl;
    byMean(bins, n, columnSize);
    cout << endl;
    byMedian(bins, n, columnSize);
    cout << endl;
    byBinBoundaries(bins, n, columnSize);
}