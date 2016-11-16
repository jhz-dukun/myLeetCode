/**********************************************************
There are two sorted arrays nums1 and nums2 of size m and n respectively.

Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).

Example 1:
nums1 = [1, 3]
nums2 = [2]

The median is 2.0
Example 2:
nums1 = [1, 2]
nums2 = [3, 4]

The median is (2 + 3)/2 = 2.5

************************************************************/

#include "interface.h"

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    double result = 0;
    if(nums1.empty() && nums2.empty())
        return result;

    vector<int> tmp;
    if(nums1.empty()){
        vector<int>::iterator iter2 = nums2.begin();
        while(iter2 != nums2.end()){
            tmp.push_back(*iter2);
            ++iter2;
        }
    }

    else if(nums2.empty()){
        vector<int>::iterator iter1 = nums1.begin();
        while(iter1 != nums1.end()){
            tmp.push_back(*iter1);
            ++iter1;
        }
    }
    else{
        vector<int>::iterator iter1 = nums1.begin();
        vector<int>::iterator iter2 = nums2.begin();
        while(iter1 != nums1.end() && iter2 != nums2.end()){
            if(*iter1 < *iter2){
                tmp.push_back(*iter1);
                ++iter1;
            }
            else{
                tmp.push_back(*iter2);
                ++iter2;
            }
        }
        if(iter1 == nums1.end()){
            for(;iter2!=nums2.end();++iter2)
                tmp.push_back(*iter2);
        }
        if(iter2 == nums2.end()){
            for(;iter1!=nums1.end();++iter1)
                tmp.push_back(*iter1);
        }
    }

    vector<int>::iterator iter = tmp.begin();
    while(iter != tmp.end()){
        cout<<*iter<<endl;
        ++iter;
    }

    if(0 == tmp.size()%2){
        cout<<tmp[tmp.size()/2]<<" "<<tmp[tmp.size()/2 - 1]<<endl;
        result = ((double)tmp[tmp.size()/2] + (double)tmp[tmp.size()/2 - 1])/2;
    }

    else{
        result = (double)tmp[(tmp.size() - 1)/2];
    }


    return result;
}
