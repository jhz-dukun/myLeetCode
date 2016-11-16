/********************************************************
 * FileName  : sums.cpp
 * Author    : North D.K.
 * Introduce : to make sevral nums add sums
**********************************************************/

#include "interface.h"


//Sums::Sums(){}

/*算法可用，但是针对大数组输入，时间效率太低*/
vector<int> twoSum1(vector<int>& nums, int target){
       int i = 0;
       int j = 0;
       vector<int> ret;
       vector<int>::iterator iter = nums.begin();
       vector<int>::iterator iter_2;
       for(;iter != nums.end();++iter){
           if((*iter) >= target){
               i++;
               continue;
               cout<<"continue"<<endl;
           }

           else{
               cout<<"push "<<i<<endl;
                ret.push_back(i);
               //ret[0] = i;
                int tmp = target - (*iter);
                cout<<"tmp"<<tmp<<endl;
                j = i+1;
                iter_2 = iter;
                iter_2++;
                cout<<"iter"<<*iter<<endl;
                for(;iter_2 != nums.end();++iter_2){
                    if((*iter_2) == tmp){
                        cout<<"push "<<i<<endl;
                        ret.push_back(j);
                        return ret;
                        }
                    j++;
                    }
                cout<<"clear"<<endl;
                ret.clear();
                }
                i++;
            }
        return ret;
    }

/*借助了map的find函数*/
vector<int> twoSum2(vector<int>& nums, int target){
    vector<int> result;
    map<int,int> mNums;
    for(int i = 0;i < nums.size() ;++i){
        mNums[nums[i]] = i;//若nums无序，是否用insert更好一些？
    }

    map<int,int>::iterator iter;
    for(int i = 0;i < nums.size();++i){
        if((iter = mNums.find(target - nums[i])) != mNums.end()){
            if(i != iter->second){
                result.push_back(i);
                result.push_back(iter->second);
                return result;
            }
            else
                continue;
        }
    }

    return result;
}


ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
    ListNode* result = new ListNode(0);
    ListNode* tmp = result;
    int carry = 0,sum = 0;
    while((l1 != NULL) || (l2 != NULL) || carry){
        sum += carry;
        carry = 0;
        if(l1 != NULL){
            sum += l1->val;
            l1 = l1->next;
        }
        if(l2 != NULL){
            sum += l2->val;
            l2 = l2->next;
        }
        if(sum > 9){
            carry = 1;
            sum -= 10;
        }
        tmp->next = new ListNode(sum);
        sum = 0;
        tmp = tmp->next;
    }
    return result->next;
}

