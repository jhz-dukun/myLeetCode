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

    string s = "au";
    //cout<<s.length()<<endl;
    //string::size_type size = s.find("u");
    //cout<<(size < s.length()? 1:0)<<endl;
    int result = lengthOfLongestSubstring(s);
    cout<<result<<endl;

    return a.exec();
}
