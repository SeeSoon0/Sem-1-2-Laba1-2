#define CATCH_CONFIG_MAIN
#include <Catch2/catch.hpp>
#include <Seminar2/binary_insertion_sort.h>
TEST_CASE("BInSort Test") {
    int a[] = { 4, 2, 7, 5, 3 };
    int n = 5;
    bInSort(a, n);
    int sortA[] = { 2, 3, 4, 5, 7 };
    for (int i = 0; i < n; ++i)
        REQUIRE(a[i] == sortA[i]);
    double a2[] = { 1, 1, 1, 1, 1 };
    n = 5;
    double sortA2[] = { 1, 1, 1, 1, 1 };
    bInSort(a, n);
    for (int i = 0; i < n; ++i)
        REQUIRE(a2[i] == sortA2[i]);
    int a3[] = { 4 };
    n = 1;
    bInSort(a, n);
    int sortA3[] = { 4 };
    for (int i = 0; i < n; ++i)
        REQUIRE(a3[i] == sortA3[i]);

}