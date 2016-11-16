/**********************************************************
 * Project : to resolve LeetCodes and started on 11/14/2016
 * Author  : North D.K.
 * Languarge : CPP
**********************************************************/

#include <QCoreApplication>

#include "include/interface.h"

//extern int lengthOfLongestSubstring(string s);

void myTest(){
    vector<int> tmp;
    tmp.push_back(-1);
    tmp.push_back(-8);
    tmp.push_back(6);
    tmp.push_back(4);
    tmp.push_back(0);
    tmp.push_back(9);
    vector<int>::iterator iter = tmp.begin();
    for(;iter != tmp.end();iter++){
        cout<<*iter<<endl;
    }

    sort(tmp.begin(),tmp.end(),greater<int>());

    iter = tmp.begin();
    for(;iter != tmp.end();iter++){
        cout<<*iter<<endl;
    }
}


//class Sums;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout<<"hello, world!"<<endl;

    vector<int> nums1;
    vector<int> nums2;
    nums1.push_back(1);
    nums1.push_back(2);
    nums2.push_back(3);
    nums2.push_back(4);

    double result = findMedianSortedArrays(nums1,nums2);
    cout<<result<<endl;

    return a.exec();
}
