#include<bits/stdc++.h>
using namespace std;


 //Definition for singly-linked list.
 struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

 ListNode* removeElements(ListNode* head, int val) {
    if(head == NULL){
        return NULL;
    }
    head -> next = removeElements(head -> next, val); 
    return head -> val == val ? head -> next : head;
}