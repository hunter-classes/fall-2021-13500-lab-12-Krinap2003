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

std::vector<int> goodVibes(const  std::vector<int> &v)
{
    std::vector<int> result;
    for(int i = 0; i < v.size(); i++)
    {
        result.push_back(abs(v[i]));
    }
    return result;
}

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta)
{
    for(int i = 0; i < vegeta.size(); i++)
    {
        goku.push_back(vegeta[i]);
    }
    vegeta.clear();
}