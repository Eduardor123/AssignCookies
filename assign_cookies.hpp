#ifndef ASSIGNCOOKIES_ASSIGN_COOKIES_HPP
#define ASSIGNCOOKIES_ASSIGN_COOKIES_HPP
#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::cout;
using std::endl;


//Since this is a Greedy algorithm we must do some type of
//sorting

class Solution{
public:
    int findContentChildren(vector<int>& g, vector<int>& s){
        //assuming that they are both sorted we will try this approach
        if(s.size() == 0 || g.size() == 0)
            return 0;
        std::sort(g.begin(),g.end());
        std::sort(s.begin(),s.end());
        int contentChildren = 0;
        int j = 0 , i =0;
        while(i< g.size() && j < s.size()){
            if(g.at(i) > s.at(j)){
                j++;
            }else{
               j++;
                contentChildren++;
                i++;
            }
        }
        return contentChildren;
    }


};


#endif //ASSIGNCOOKIES_ASSIGN_COOKIES_HPP
