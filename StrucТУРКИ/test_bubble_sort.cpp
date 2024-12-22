#include "gtest/gtest.h"
#include "bubble_sort.h"  
#include <vector>

TEST(BubbleSortTests, SortsEmptyArray) {
    std::vector<int> arr = {};
    bubbleSort(arr);
    EXPECT_TRUE(arr.empty());
}

TEST(BubbleSortTests, SortsSingleElement) {
    std::vector<int> arr = { 42 };
    bubbleSort(arr);
    EXPECT_EQ(arr[0], 42);
}

TEST(BubbleSortTests, SortsArray) {
    std::vector<int> arr = { 3, 1, 4, 1, 5, 9 };
    bubbleSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 1, 3, 4, 5, 9}));
}

TEST(BubbleSortTests, SortsReversedArray) {
    std::vector<int> arr = { 9, 5, 4, 3, 1, 1 };
    bubbleSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 1, 3, 4, 5, 9}));
}

TEST(BubbleSortTests, SortsAlreadySortedArray) {
    std::vector<int> arr = { 1, 1, 3, 4, 5, 9 };
    bubbleSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 1, 3, 4, 5, 9}));
}