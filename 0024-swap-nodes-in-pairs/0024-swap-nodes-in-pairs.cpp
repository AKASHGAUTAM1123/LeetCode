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
#define null NULL
#define Node ListNode
#define data val
#define ed endl;
void reverse(Node*head ,int times){
    Node*curr=head;
    Node*prev=NULL;
    while(times--){
        Node*nex=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nex;
    }
    return ;
}
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL)return NULL;
        Node*left=head;
        Node*right;
        Node*res=NULL;
        Node* prevleft=NULL;
        int size=2;
        while(true){
            right=left;
            for(int i=0;i<size-1;i++){
                if(right == NULL)
                break;
                right=right->next;
            }
            if(right){ //left right mil chukha hai
                Node*nextleft=right->next;
                reverse(left,size);
                if(prevleft)
                prevleft->next=right;
                prevleft=left;
                if(res==NULL)
                res=right;
                left=nextleft;
                }
                else{
                    //khtm hai sb
                    if(prevleft)
                    prevleft->next=left;
                    if(res==NULL)
                    res=left;
                    break;
                }
            }
        return res;
    }
};