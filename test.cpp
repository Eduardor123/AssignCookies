
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



TEST(CorrectOutput, LessChildren){
    std::vector<int> first = {1,2};
    std::vector<int> sec = {1,2,3};
    Solution me;
    int contentChildren = me.findContentChildren(first,sec);
    EXPECT_EQ(contentChildren,2);
}

TEST(CorrectOutput, OutOfOrder){
    std::vector<int> first = {10,9,8,7};
    std::vector<int> sec = {5,6,7,8};
    Solution me;
    int contentChildren = me.findContentChildren(first,sec);
    EXPECT_EQ(contentChildren,2);
}

TEST(CorrectOutput, NoCookies){
    std::vector<int> first = {10,9,8,7,6};
    std::vector<int> sec = {0,0,0,0,0};
    Solution me;
    int contentChildren = me.findContentChildren(first,sec);
    EXPECT_EQ(contentChildren,0);
}

TEST(CorrectOutput, EmptyCookies){
    std::vector<int> first = {10,9,8,7,6};
    std::vector<int> sec;
    Solution me;
    int contentChildren = me.findContentChildren(first,sec);
    EXPECT_EQ(contentChildren,0);
}

TEST(CorrectOutput, CheckOutput){
    std::vector<int> first = {1,2,3};
    std::vector<int> sec = {3};
    Solution me;
    int contentChildren = me.findContentChildren(first,sec);
    EXPECT_EQ(contentChildren,1);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

