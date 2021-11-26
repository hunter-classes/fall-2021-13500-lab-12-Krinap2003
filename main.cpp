/*
Author: Krina Patel
Instructor: Proffesor Mike Zamansky
Assignment: Lab 12
*/
#include <iostream>
#include <vector>
#include "funcs.h"
using namespace std;

int main()
{
    std::cout<<"\n---------------------- \n";
    std::cout<<"Task A \n";
    std::cout<<"---------------------- \n";
    std::vector<int> a = makeVector(10);
    std::cout<<"[";
    for(int i = 0; i < a.size(); i++)
    {
        std::cout<<a[i]<<" ";
    }
    std::cout<<"]\n";

    std::cout<<"\n---------------------- \n";
    std::cout<<"Task B \n";
    std::cout<<"---------------------- \n";  
    vector<int> b;
    b.push_back(1);
    b.push_back(2);
    b.push_back(-1);
    b.push_back(3);
    b.push_back(4);
    b.push_back(-1);
    b.push_back(6);
    std::vector<int> c = goodVibes(b); // returns [1,2,3,4,6]
    std::cout<<"Original Vecotr: [ ";
    for(int i = 0; i < b.size(); i++)
    {
        std::cout<<b[i]<<" ";
    }
    std::cout<<"] \n";
    std::cout<<"New Vector:[ ";
    for(int i = 0; i < b.size(); i++)
    {
        std::cout<<c[i]<<" ";
    }
    std::cout<<"] \n";
    
    std::cout<<"\n---------------------- \n";
    std::cout<<"Task C \n";
    std::cout<<"---------------------- \n"; 
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    vector<int> v2;
    v2.push_back(4);
    v2.push_back(5);
    std::cout<<"Original Vecotr: [ ";
    for(int i = 0; i < v1.size(); i++)
    {
        std::cout<<v1[i]<<" ";
    }
    std::cout<<"] \n";
    gogeta(v1, v2);
    std::cout<<"New Vector:[ ";
    for(int i = 0; i < v1.size(); i++)
    {
        std::cout<<v1[i]<<" ";
    }
    std::cout<<"] \n";
    return 0;
}