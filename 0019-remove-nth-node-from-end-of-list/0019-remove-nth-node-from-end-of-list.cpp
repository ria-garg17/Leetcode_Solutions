/**
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
    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* forward = NULL;

        while(curr != NULL){
            forward = curr -> next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL)
            return head;
        
        if(head->next == NULL && n==1)
            return NULL;
        
        if(n == 1){
            head = reverse(head);
            head = head->next;
            head = reverse(head);
            return head;
        }
        
        head = reverse(head);

        int count = 1;
        ListNode* curr = head;
        ListNode* prev = curr;

        while(count<n){
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;

        head = reverse(head);
        return head;
    }
};