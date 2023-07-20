#include<bits/stdc++.h>
using namespace std;


 //Definition for singly-linked list.
 struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

 ListNode *detectCycle(ListNode *head){
        unordered_map<ListNode*, int> kow;
        ListNode* temp = NULL;
        while(head != NULL){
            if(kow[head] == 1){
                temp = head;
                break;
            }
            kow[head]++;
            head = head -> next;
        }
        return temp;
    }