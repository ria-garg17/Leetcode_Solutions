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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == NULL || head->next == NULL)
            return head;

        vector<int> ans;
        
        while(head){
            ans.push_back(head->val);
            head = head->next;
        }

        int i = left-1;
        int j = right-1;
        while(i<=j){
            swap(ans[i], ans[j]);
            i++;
            j--;
        }

        ListNode* arr = new ListNode(-1);
        ListNode* temp = arr;

        for(int i = 0; i<ans.size(); i++){
            ListNode* curr = new ListNode(ans[i]);
            temp->next = curr;
            temp = curr;
            curr->next = NULL;
        }

        return arr->next;
    }
};