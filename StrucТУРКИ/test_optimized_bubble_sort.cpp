#include "gtest/gtest.h"
#include "optimized_bubble_sort.h" 
#include <vector>

TEST(OptimizedBubbleSortTests, SortsEmptyArray) {
    std::vector<int> arr = {};
    optimizedBubbleSort(arr);
    EXPECT_TRUE(arr.empty());
}

TEST(OptimizedBubbleSortTests, SortsSingleElement) {
    std::vector<int> arr = { 42 };
    optimizedBubbleSort(arr);
    EXPECT_EQ(arr[0], 42);
}

TEST(OptimizedBubbleSortTests, SortsArray) {
    std::vector<int> arr = { 3, 1, 4, 1, 5, 9 };
    optimizedBubbleSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 1, 3, 4, 5, 9}));
}

TEST(OptimizedBubbleSortTests, SortsReversedArray) {
    std::vector<int> arr = { 9, 5, 4, 3, 1, 1 };
    optimizedBubbleSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 1, 3, 4, 5, 9}));
}

TEST(OptimizedBubbleSortTests, SortsAlreadySortedArray) {
    std::vector<int> arr = { 1, 1, 3, 4, 5, 9 };
    optimizedBubbleSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 1, 3, 4, 5, 9}));
}