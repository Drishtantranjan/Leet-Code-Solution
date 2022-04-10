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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        
           ListNode* ans=new ListNode(0);
           ListNode* anstemp=ans;
        
        
        int x=0;
        int carray=0;
            while(l1!=NULL and l2!=NULL){
                
                  x=l1->val+l2->val+carray; //add the carray
                
                       
               
                    carray=x/10;
                
                anstemp->next = new ListNode( x%10);//sotre the last digit of the number 
                
                anstemp=anstemp->next;
                
                l1=l1->next;l2=l2->next;
               
                
            }
 //check if the elements are stiil in the l1 list 
            while(l1!=NULL){
                
                 x=l1->val+carray;
                
               carray=x/10;
                anstemp->next = new ListNode(x%10);
                
                anstemp=anstemp->next;
                 l1=l1->next;
                  
            }
        //similarly check in l2 if the list exist;
        while(l2!=NULL){
                
                 x=l2->val+carray;
                 carray=x/10;
               
                anstemp->next = new ListNode(x%10);
                
                anstemp=anstemp->next;
                 l2=l2->next;
                     
            }
        
        if(carray!=0)anstemp->next = new ListNode(carray);
        
        return ans->next;
    }
};