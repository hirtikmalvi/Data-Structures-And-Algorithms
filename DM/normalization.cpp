#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <iomanip>
using namespace std;

void printArr(vector<double> data)
{
    cout << fixed;
    cout << setprecision(2);
    cout << "[ ";
    for (int i = 0; i < data.size(); i++) // For Row (No of bins)
    {
        cout << data[i] << ", ";
    }
    cout << "]";
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
        dataArr[i] = rand() % (1000 - 100 + 1) + 100;
    }
}

void minMaxNor(vector<double> dataArr)
{
    double min = *min_element(dataArr.begin(), dataArr.end());
    double max = *max_element(dataArr.begin(), dataArr.end());
    double new_min = 0.0;
    double new_max = 1.0;

    for (int i = 0; i < dataArr.size(); i++)
    {
        dataArr[i] = ((dataArr[i] - min) * (new_max - new_min) / (max - min)) - new_min;
    }
    cout << endl;
    printArr(dataArr);
}

double calculateMean(vector<double> data)
{
    if (data.empty())
    {
        return 0.0;
    }
    return accumulate(data.begin(), data.end(), 0.0) / data.size();
}

double calculateStandardDeviation(vector<double> data)
{
    if (data.size() < 2)
    {
        return 0.0;
    }

    double mean = calculateMean(data);
    double sumSquaredDiff = accumulate(data.begin(), data.end(), 0.0, [mean](double acc, double value)
                                       { return acc + pow(value - mean, 2); });

    return sqrt(sumSquaredDiff / (data.size() - 1));
}

void zScoreNor(vector<double> dataArr)
{
    double mean = calculateMean(dataArr);
    double SD = calculateStandardDeviation(dataArr);

    for (int i = 0; i < dataArr.size(); i++)
    {
        dataArr[i] = (dataArr[i] - mean) / SD;
    }
    printArr(dataArr);
}

vector<double> decimal_scaling_normalization(vector<double> data)
{
    // Find the maximum absolute value in the data
    double max_abs_value = abs(*max_element(data.begin(), data.end()));

    // Calculate the scaling factor
    int scaling_factor = 0;
    while (max_abs_value >= 1)
    {
        max_abs_value /= 10;
        scaling_factor++;
    }
    // Normalize the data
    for (int i = 0; i < data.size(); i++)
    {
        data[i] /= pow(10, scaling_factor);
    }

    return data;
}

int main()
{
    vector<double> dataArr(20);
    srand(time(0));
    dataGenerator(dataArr);

    sort(dataArr.begin(), dataArr.end());

    cout << "SORTED DATA: ";
    for (int i = 0; i < 20; i++)
    {
        cout << dataArr[i] << " ";
    }
    cout << endl;
    cout << "MIN MAX NORMALIZATION"<< " ";
    minMaxNor(dataArr);
    cout << endl;
    cout << "Z-SCORE NORMALIZATION"<< " ";
    zScoreNor(dataArr);
    cout << endl;
    cout << "DECIMAL SCALING NORMALIZATION"<< " ";
    vector<double> scaledData = decimal_scaling_normalization(dataArr);
    printArr(scaledData);
    return 0;
}
