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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return head;
        
        ListNode* temp1=head;
        int size=1;
        while(temp1->next){
           temp1=temp1->next; 
            size++;
        } 
        temp1->next=head;
        
        k=k%size;
        int val=size-k-1;
        ListNode* temp2=head, *temp3=head;
        while(val--)
        {
            temp2=temp2->next;
        } 
        temp3=temp2->next;
        temp2->next=NULL;
        
        return temp3;
    }
};