#include "gtest/gtest.h"
#include "selection_sort.h"  
#include <vector>

TEST(SelectionSortTests, SortsEmptyArray) {
    std::vector<int> arr = {};
    selectionSort(arr);
    EXPECT_TRUE(arr.empty());
}

TEST(SelectionSortTests, SortsSingleElement) {
    std::vector<int> arr = { 42 };
    selectionSort(arr);
    EXPECT_EQ(arr[0], 42);
}

TEST(SelectionSortTests, SortsArray) {
    std::vector<int> arr = { 3, 1, 4, 1, 5, 9 };
    selectionSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 1, 3, 4, 5, 9}));
}

TEST(SelectionSortTests, SortsReversedArray) {
    std::vector<int> arr = { 9, 5, 4, 3, 1, 1 };
    selectionSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 1, 3, 4, 5, 9}));
}

TEST(SelectionSortTests, SortsAlreadySortedArray) {
    std::vector<int> arr = { 1, 1, 3, 4, 5, 9 };
    selectionSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 1, 3, 4, 5, 9}));
}