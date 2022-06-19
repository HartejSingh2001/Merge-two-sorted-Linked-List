class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *temp1=list1,*temp2=list2;
        ListNode *head=NULL,*temp;
        vector<int>v;
        while(temp1!=NULL)
        {
            v.push_back(temp1->val);
            temp1=temp1->next;
        }
        while(temp2!=NULL)
        {
            v.push_back(temp2->val);
            temp2=temp2->next;
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            ListNode *newnode= new ListNode(v[i]);
            if(head==NULL)
            {
                head=newnode;
                temp=newnode;
            }
            else
            {
                temp->next =newnode;
                temp=newnode;
            }
            
        }
        return head;
       
    }
};
