#ifndef INTERFACE_H
#define INTERFACE_H

#include <vector>
#include <map>
#include <list>
#include <iostream>
#include <functional>
#include <algorithm>
#include <string>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

//#define vector<int>  vint

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2);
int lengthOfLongestSubstring(string s);
vector<int> twoSum1(vector<int>& nums, int target);
vector<int> twoSum2(vector<int>& nums, int target);




#endif // INTERFACE_H
