
#include "gtest/gtest.h"
#include <vector>
#include "assign_cookies.hpp"

TEST(CorrectOutput, MinCookies){
    std::vector<int> first = {1,2,3};
    std::vector<int> sec = {1,1};
    Solution me;
    int contentChildren = me.findContentChildren(first,sec);
    EXPECT_EQ(contentChildren,1);
}

TEST(CorrectOutput, MaxCookies){
    std::vector<int> first = {1,2,3};
    std::vector<int> sec = {1,2};
    Solution me;
    int contentChildren = me.findContentChildren(first,sec);
    EXPECT_EQ(contentChildren,2);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

