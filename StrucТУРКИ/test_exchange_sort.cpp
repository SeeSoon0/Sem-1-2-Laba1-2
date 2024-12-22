#include "gtest/gtest.h"
#include "exchange_sort.h"  
#include <vector>

TEST(ExchangeSortTests, SortsEmptyArray) {
    std::vector<int> arr = {};
    exchangeSort(arr);
    EXPECT_TRUE(arr.empty());
}

TEST(ExchangeSortTests, SortsSingleElement) {
    std::vector<int> arr = { 42 };
    exchangeSort(arr);
    EXPECT_EQ(arr[0], 42);
}

TEST(ExchangeSortTests, SortsArray) {
    std::vector<int> arr = { 3, 1, 4, 1, 5, 9 };
    exchangeSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 1, 3, 4, 5, 9}));
}

TEST(ExchangeSortTests, SortsReversedArray) {
    std::vector<int> arr = { 9, 5, 4, 3, 1, 1 };
    exchangeSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 1, 3, 4, 5, 9}));
}

TEST(ExchangeSortTests, SortsAlreadySortedArray) {
    std::vector<int> arr = { 1, 1, 3, 4, 5, 9 };
    exchangeSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 1, 3, 4, 5, 9}));
}