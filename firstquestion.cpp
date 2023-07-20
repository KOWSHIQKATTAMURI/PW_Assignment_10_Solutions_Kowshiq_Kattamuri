#include<bits/stdc++.h>
using namespace std;


 //Definition for singly-linked list.
 struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

void deleteNode(ListNode* node){
    ListNode* head = node;
    node -> val = head -> next -> val;
    node -> next = head -> next -> next;
}