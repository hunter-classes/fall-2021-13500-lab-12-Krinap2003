#include <iostream>
#include <vector>
#include "funcs.h"
using namespace std;

//Task A
std::vector<int> makeVector(int n)
{
    std::vector<int> result;
    for(int i = 0; i < n; i++)
    {
        result.push_back(i);
    }
    return result;
}

//Task B
std::vector<int> goodVibes(const  std::vector<int> &v)
{
    std::vector<int> result;
    for(int i = 0; i < v.size(); i++)
    {
        result.push_back(abs(v[i]));
    }
    return result;
}

//Task C
void gogeta(std::vector<int> &goku, std::vector<int> &vegeta)
{
    for(int i = 0; i < vegeta.size(); i++)
    {
        goku.push_back(vegeta[i]);
    }
    vegeta.clear();
}

//Task D
vector<int> sumPairWise(const vector<int> &v1, const vector<int> &v2)
{
    std::vector<int> result;
    if(v1.size() > v2.size())
    {
        for(int i = 0; i < v1.size(); i++)
        {
            int sum = v1[i] + v2[i];
            result.push_back(sum);
        }
    }
    else
    {
         for(int i = 0; i < v2.size(); i++)
        {
            int sum = v1[i] + v2[i];
            result.push_back(sum);
        }
    }
    return result;
}