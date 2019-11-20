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

        //Here we do a sort on both lists
        std::sort(g.begin(),g.end());
        std::sort(s.begin(),s.end());

        //our variables to keep track of data we need
        int contentChildren = 0;
        int j = 0 , i =0;

        //runs until either ones length length capacity
        while(i< g.size() && j < s.size()){
            //if the condition where the cookie is less than the childs greed
            if(g.at(i) > s.at(j))
                j++; //go to next cookie
            else{
                j++; //if satifies condition increment both values
                i++;
                contentChildren++; //update our content children
            }
        }
        return contentChildren;
    }


};


#endif //ASSIGNCOOKIES_ASSIGN_COOKIES_HPP
