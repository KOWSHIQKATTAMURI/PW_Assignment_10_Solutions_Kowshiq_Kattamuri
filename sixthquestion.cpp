#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

void rotate(ListNode* head, int k){
	if(k == 0){
		return;
    }
	ListNode* current = head;
	int count = 1;
	while(count < k && current != NULL) {
		current = current -> next;
		count++;
	}
	if(current == NULL){
		return;
    }
	ListNode* kthNode = current;
	while(current -> next != NULL){
		current = current -> next;
    }
	current -> next = head;
	head = kthNode -> next;
	kthNode -> next = NULL;
}



