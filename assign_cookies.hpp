#ifndef ASSIGNCOOKIES_ASSIGN_COOKIES_HPP
#define ASSIGNCOOKIES_ASSIGN_COOKIES_HPP
#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

class Solution{
public:
    int findContentChildren(vector<int>& g, vector<int>& s){
        //assuming that they are both sorted we will try this approach
        if(s.size() == 0 || g.size() == 0)
            return 0;
        int contentChildren = 0;
        for(int i = 0; i < g.size(); ++i){
            int j = i;
            if(j < s.size() && (s.at(j) > g.at(i) || s.at(j) == g.at(i))){
                contentChildren++;
            }else{
                return contentChildren;
            }
        }
        return contentChildren;
    }
};


#endif //ASSIGNCOOKIES_ASSIGN_COOKIES_HPP
