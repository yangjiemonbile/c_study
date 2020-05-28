#include <gtest/gtest.h>
#include <iostream>
#include <vector>

class Solution
{
public:
    int isValid(std::vector<int> nums) {
        return 1;
    }
};

TEST(isValid,isValid_1)
{
    Solution s;
    std::vector<int> in = {1,2,3};
    int ans = 1;
    EXPECT_EQ(s.isValid(in),ans);
}

int main(int argc,char** argv)
{
    ::testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}