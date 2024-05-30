class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        // 1 or both NULL
        if(l1==NULL){
            return l2;
        }
        if(l2==NULL){
            return l1;
        }
        ListNode *l3=new ListNode();
        ListNode *head=l3;
        while(l1!=NULL||l2!=NULL){
            // if one has become null
            if(l1==NULL){
                l3->val=l2->val;
                l2=l2->next;
                if(l1!=NULL||l2!=NULL){
                    l3->next=new ListNode();
                    l3=l3->next;
                }
            }
            else if(l2==NULL){
                l3->val=l1->val;
                l1=l1->next;     
                if(l1!=NULL||l2!=NULL){
                    l3->next=new ListNode();
                    l3=l3->next;
                }           
            }else{
                // select smaller
                if(l1->val<l2->val){
                    l3->val=l1->val;
                    l1=l1->next;
                    if(l1!=NULL||l2!=NULL){
                        l3->next=new ListNode();
                        l3=l3->next;
                    } 
                }else{
                    l3->val=l2->val;
                    l2=l2->next;
                    if(l1!=NULL||l2!=NULL){
                        l3->next=new ListNode();
                        l3=l3->next;
                    } 
                }
            }
        }
        return head;
    }
};
