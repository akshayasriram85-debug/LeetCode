class Solution {
public:
    ListNode* rotateRight(ListNode* head,int k) {
        vector<int> arr;
        ListNode* temp=head;
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int n=arr.size();
        if(n==0 || k==0)
            return head;
        k=k%n;
        while(k--){
            int x=arr[n-1];
            arr.pop_back();
            arr.insert(arr.begin(),x);
        }
        temp=head;
        for(int i=0;i<n;i++){
            temp->val=arr[i];
            temp=temp->next;
        }
        return head;
    }
};