#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#define CHECK DOCTEST_CHECK
#include "doctest.h"
#include "funcs.h"
#include <vector>
using namespace std;

TEST_CASE("Task A")
{
    vector<int> a = makeVector(10);
    for(int i = 0; i < a.size(); i++)
    {
        CHECK(a[i] == i);
    }
}

TEST_CASE("Task B")
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(-1);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(-1);
    v1.push_back(6);
    std::vector<int> c = goodVibes(v1);
     for(int i = 0; i < c.size(); i++)
    {
       CHECK(c[i] == abs(v1[i]));
    }
}

TEST_CASE("Task C")
{
    vector<int> v3;
    v3.push_back(1);
    v3.push_back(2);
    v3.push_back(3);
    vector<int> v2;
    v2.push_back(4);
    v2.push_back(5);
    gogeta(v3, v2);
    CHECK(v3[0] == v3[0]);
    CHECK(v3[1] == v3[1]);
    CHECK(v3[2] == v3[2]);
    CHECK(v3[3] == 4);
    CHECK(v3[4] == 5);
}

TEST_CASE("Task D")
{
    vector<int> v5;
    v5.push_back(1);
    v5.push_back(2);
    v5.push_back(3);
    vector<int> v6{4,5};
    std::vector<int> sum2 = sumPairWise(v5, v6);
    CHECK(sum2[0] == 5);
    CHECK(sum2[1] == 7);
    CHECK(sum2[2] == 3);
}