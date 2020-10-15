// Time Taken(%):88ms(27.11%)
// Memory usage(%):32.7MB
// Your Name(optional):Aditya Upadhyay
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* merge(ListNode* right,ListNode* left){

        ListNode* head=new ListNode(-1);
        ListNode* tmp=head;
        while(right!=NULL && left!=NULL){
            if(right->val<=left->val){
                tmp->next=right;
                tmp=tmp->next;
                right=right->next;
            }
            else{
                tmp->next=left;
                tmp=tmp->next;
                left=left->next;
            }
        }
        if(right==NULL) {
            tmp->next=left;
        }
        if(left==NULL) {
            tmp->next=right;
        }
        return head->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;
        if(lists.size()==1) return lists[0];
        vector<ListNode*> v1;
        vector<ListNode*> v2;
        for(int i=0;i<lists.size();i=i+2){
            v1.push_back(lists[i]);
            if(i+1<lists.size())
            v2.push_back(lists[i+1]);
        }
        ListNode* right=mergeKLists(v1);
        ListNode* left=mergeKLists(v2);
        return merge(right,left);
    }
};