#include<bits/stdc++.h>
using namespace std;


 //Definition for singly-linked list.
 struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){
    if(list1 == NULL){
        return list2;
    }
    if(list2 == NULL){
        return list1;
    }
    if(list1 -> val <= list2 -> val){
        list1 -> next = mergeTwoLists(list1 -> next, list2);
        return list1;
    }else{
        list2 -> next = mergeTwoLists(list1, list2 -> next);
        return list2;
    } 
}