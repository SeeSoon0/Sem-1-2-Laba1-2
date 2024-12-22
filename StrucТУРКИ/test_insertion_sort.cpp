#include "gtest/gtest.h"
#include "insertion_sort.h"
#include <vector>

TEST(InsertionSortTests, SortsEmptyArray) {
    std::vector<int> arr = {};
    insertionSort(arr);
    EXPECT_TRUE(arr.empty());
}

TEST(InsertionSortTests, SortsSingleElement) {
    std::vector<int> arr = { 42 };
    insertionSort(arr);
    EXPECT_EQ(arr[0], 42);
}

TEST(InsertionSortTests, SortsArray) {
    std::vector<int> arr = { 3, 1, 4, 1, 5, 9 };
    insertionSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 1, 3, 4, 5, 9}));
}

TEST(InsertionSortTests, SortsReversedArray) {
    std::vector<int> arr = { 9, 5, 4, 3, 1, 1 };
    insertionSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 1, 3, 4, 5, 9}));
}

TEST(InsertionSortTests, SortsAlreadySortedArray) {
    std::vector<int> arr = { 1, 1, 3, 4, 5, 9 };
    insertionSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 1, 3, 4, 5, 9}));
}