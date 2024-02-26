#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
#include <algorithm>

using namespace std;

void printArr(const vector<vector<double>> &bins, int n, const vector<int> &binsColSize)
{
    for (int i = 0; i < n; i++) // For Row (No of bins)
    {
        cout << "Bin " << i + 1 << "  [ ";
        for (int j = 0; j < binsColSize[i]; j++) // Column (No of elements in each row(bin))
        {
            cout << bins[i][j] << ", ";
        }
        cout << "]";
        cout << endl;
    }
}

double getElement(vector<double> dataArr, int index)
{
    if (index >= 0 && index < dataArr.size())
    {
        return dataArr[index];
    }
    return 0.0;
}

void dataGenerator(vector<double> &dataArr)
{
    for (int i = 0; i < 20; i++)
    {
        dataArr[i] = rand() % 100;
    }
}

void equalDepthBinning(vector<vector<double>> &Bins, vector<double> dataArr, int n, int columnSize, vector<int> &BinsColSize)
{
    cout << endl
         << "EQUAL DEPTH BINNING";
    int idx = 0;
    for (int i = 0; i < n; i++) // For Row (No of equalDepthBins)
    {
        int tempSize = 0;
        vector<double> row;
        for (int j = 0; j < columnSize; j++) // Column (No of elements in each row(bin))
        {
            row.push_back(getElement(dataArr, idx++));
            tempSize++;
        }
        BinsColSize.push_back(tempSize);
        Bins.push_back(row);
    }
}

void byMean(vector<vector<double>> Bins, int n, vector<int> &BinsColSize)
{

    vector<double> meanSum;
    for (int i = 0; i < n; i++) // For Row (No of equalDepthBins)
    {
        double mean = 0.0;
        for (int j = 0; j < BinsColSize[i]; j++) // Column (No of elements in each row(bin))
        {
            mean += Bins[i][j];
        }
        meanSum.push_back(mean);
    }
    for (int i = 0; i < n; i++) // For Row (No of equalDepthBins)
    {
        double mean = meanSum[i] / BinsColSize[i];

        // Check if the mean is a non-integer
        if (mean != static_cast<int>(mean))
        {
            for (int j = 0; j < BinsColSize[i]; j++) // Column (No of elements in each row(bin))
            {
                Bins[i][j] = mean;
            }
        }
        else
        {
            for (int j = 0; j < BinsColSize[i]; j++) // Column (No of elements in each row(bin))
            {
                Bins[i][j] = static_cast<int>(mean);
            }
        }
    }
    printArr(Bins, n, BinsColSize);
}

void byMedian(vector<vector<double>> Bins, int n, vector<int> &BinsColSize)
{

    vector<double> median;
    for (int i = 0; i < n; i++) // For Row (No of equalDepthBins)
    {
        double tempMedian = 0.0;
        if (BinsColSize[i] % 2 == 0) // Even
        {
            int tempIndex = (BinsColSize[i] - 1) / 2;
            tempMedian = (Bins[i][tempIndex] + Bins[i][tempIndex + 1]) / 2.0;
        }
        else // Odd
        {
            int tempIndex = (BinsColSize[i] - 1) / 2;
            tempMedian = Bins[i][tempIndex];
        }

        // Check if the median is a non-integer
        if (tempMedian != static_cast<int>(tempMedian))
        {
            for (int j = 0; j < BinsColSize[i]; j++) // Column (No of elements in each row(bin))
            {
                Bins[i][j] = tempMedian;
            }
        }
        else
        {
            for (int j = 0; j < BinsColSize[i]; j++) // Column (No of elements in each row(bin))
            {
                Bins[i][j] = static_cast<int>(tempMedian);
            }
        }
    }
    printArr(Bins, n, BinsColSize);
}

void byBinBoundaries(vector<vector<double>> Bins, int n, vector<int> &BinsColSize)
{

    for (int i = 0; i < n; i++) // For Row (No of equalDepthBins)
    {
        double min = Bins[i][0];
        double max = Bins[i][BinsColSize[i] - 1];
        for (int j = 1; j < BinsColSize[i] - 1; j++) // Column (No of elements in each row(bin))
        {
            if (Bins[i][j] - min <= max - Bins[i][j])
            {
                Bins[i][j] = min;
            }
            else
            {
                Bins[i][j] = max;
            }
        }
    }
    printArr(Bins, n, BinsColSize);
}

void equalWidthBinning(vector<vector<double>> &equalWidthBins, const vector<double> &dataArr, int n, vector<int> &equalWidthBinsColSize)
{
    cout << "EQUAL WIDTH BINNING" << endl;

    int minVal = *min_element(dataArr.begin(), dataArr.end());
    int maxVal = *max_element(dataArr.begin(), dataArr.end());

    int binWidth = (maxVal - minVal) / n;

    int dataIndex = 0;
    for (int i = 0; i < n; i++)
    {
        int tempSize = 0; // for equalWidthBinsColSize[]
        int binStart = minVal + (i * binWidth);
        int binEnd = binStart + binWidth;

        vector<double> row;
        while (dataIndex < dataArr.size() && dataArr[dataIndex] <= binEnd)
        {
            row.push_back(getElement(dataArr, dataIndex++));
            tempSize++;
        }
        equalWidthBinsColSize.push_back(tempSize);
        equalWidthBins.push_back(row);
    }

    printArr(equalWidthBins, n, equalWidthBinsColSize);
}

int main()
{
    // vector<double> dataArr(20);
    vector<double> dataArr = {
        11,
        13,
        16,
        17,
        19,
        22,
        24,
        30,
        37,
        40,
        49,
        51,
        61,
        62,
        64,
        69,
        74,
        79,
        81,
        99};
    vector<vector<double>> equalDepthBins;
    vector<vector<double>> equalWidtbins;
    vector<int> equalWidthBinsColSize;
    vector<int> equalDepthBinsColSize;

    int n;
    srand(time(0));
    cout << "Enter number of Bins: ";
    cin >> n;

    // dataGenerator(dataArr);

    sort(dataArr.begin(), dataArr.end());

    cout << "SORTED DATA: ";
    for (int i = 0; i < 20; i++)
    {
        cout << dataArr[i] << " ";
    }

    int columnSize = 20 / n; // For No elements in each bin

    equalDepthBinning(equalDepthBins, dataArr, n, columnSize, equalDepthBinsColSize);
    cout << endl;
    printArr(equalDepthBins, n, equalDepthBinsColSize);
    cout << endl;
    cout << "SMOOTHING BY MEAN FOR: EQUAL DEPTH BINNING"<< " " << endl;
    byMean(equalDepthBins, n, equalDepthBinsColSize);
    cout << endl;
    cout << "SMOOTHING BY MEDIAN: EQUAL DEPTH BINNING"<< " " << endl;
    byMedian(equalDepthBins, n, equalDepthBinsColSize);
    cout << endl;
    cout << "SMOOTHING BY BIN BOUNDARIES: EQUAL DEPTH BINNING"<< " " << endl;
    byBinBoundaries(equalDepthBins, n, equalDepthBinsColSize);
    cout << endl;
    equalWidthBinning(equalWidtbins, dataArr, n, equalWidthBinsColSize);
    cout << endl;
    cout << "SMOOTHING BY MEAN FOR: EQUAL WIDTH BINNING"<< " " << endl;
    byMean(equalWidtbins, n, equalWidthBinsColSize);
    cout << endl;
    cout << "SMOOTHING BY MEDIAN: EQUAL WIDTH BINNING"<< " " << endl;
    byMedian(equalWidtbins, n, equalWidthBinsColSize);
    cout << endl;
    cout << "SMOOTHING BY BIN BOUNDARIES: EQUAL WIDTH BINNING"<< " " << endl;
    byBinBoundaries(equalWidtbins, n, equalWidthBinsColSize);
    cout << endl;

    return 0;
}
