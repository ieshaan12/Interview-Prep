// Time Taken(%):99.09%(20ms)
// Memory usage(%):10.3MB
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int A=0;
        int B=0;
        int sum,carry=0;
        struct ListNode* head,*tail;
        head=new ListNode(-1);
        tail=head;
        if(l1->val==0 && l1->next==NULL) return l2;
        else if(l2->val==0 && l2->next==NULL) return l1;
        while(1){
            if(l1!=NULL) {
                A=l1->val;
                l1=l1->next;
            }else A=0;
            if(l2!=NULL) {
                B=l2->val;
                l2=l2->next;
            }else B=0;
            sum=(A+B+carry)%10;
            carry=(A+B+carry)/10;
            if(sum==0&& carry==0 && l1==NULL && l2==NULL) {
                tail->next=NULL;
                break;
            }
            else tail->next=new ListNode(sum);
            tail=tail->next;
        }
        return head->next;
    }
};