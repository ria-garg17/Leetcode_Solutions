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
    ListNode* deleteDuplicates(ListNode* head) {
        vector<int> temp;
        while(head){
            temp.push_back(head->val);
            head = head->next;
        }

        unordered_map<int,int> mp;
        for(auto i : temp){
            mp[i]++;
        }

        unordered_map<int,int>::iterator it;
        vector<int> ans;
        
        for(it = mp.begin(); it != mp.end(); it++){
            if(it->second == 1)
                ans.push_back(it->first);
        }

        sort(ans.begin(), ans.end());

        ListNode* res = new ListNode(-1);
        ListNode* dummy = res;

        for(int i = 0; i<ans.size(); i++){
            ListNode* curr = new ListNode(ans[i]);
            dummy->next = curr;
            dummy = dummy->next;
        }

        return res->next;

        return head;
    }
};