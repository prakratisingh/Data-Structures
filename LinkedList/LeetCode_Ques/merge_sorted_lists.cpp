//ques link: https://leetcode.com/problems/merge-two-sorted-lists/?envType=study-plan-v2&envId=top-interview-150
#include<bits/stdc++.h>
using namespace std;
/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        // if list1 happen to be NULL we will simply return list2.
        if(list1 == NULL)
            return list2;
		
		// if list2 happen to be NULL we will simply return list1.
        if(list2 == NULL)
            return list1;

        ListNode* newHead = NULL;

        if (list1->val < list2->val) 
        {
            newHead = list1;
            list1 = list1->next;
        }
        else 
        {
            newHead = list2;
            list2 = list2->next;
        }

        ListNode* prev = newHead;

        while (list1 != nullptr && list2 != nullptr) 
        {
            if (list1->val < list2->val) 
            {
                prev->next = list1;
                list1 = list1->next;
            }
            else 
            {
                prev->next = list2;
                list2 = list2->next;
            }
            prev = prev->next;
        }

        // adding remaining elements of bigger list.
        if(!list1)
            prev -> next = list2;
        else
            prev -> next = list1;

        return newHead;
    }
};