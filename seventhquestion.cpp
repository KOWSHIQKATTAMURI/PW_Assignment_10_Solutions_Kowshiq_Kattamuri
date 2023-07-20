#include<bits/stdc++.h>
using namespace std;

 //Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* removeZeroSumSublists(ListNode* head){
        unordered_map<int, ListNode*> mp;
        ListNode* dummy = new ListNode(0);
        mp[0] = dummy;
        dummy -> next = head;
        int prefix_sum = 0;
        while(head != NULL){
            prefix_sum += head -> val;
            if(mp.find(prefix_sum) != mp.end()){
                ListNode* start = mp[prefix_sum];
                ListNode* temp = start;
                int present_sum = prefix_sum;
                while(temp != head){
                    temp = temp -> next;
                    present_sum += temp -> val;
                    if(temp != head){
                        mp.erase(present_sum);
                    }
                }
                start -> next = head -> next; 
            }else{
                mp[prefix_sum] = head;
            }
            head = head -> next;
        }
        return dummy -> next;
}