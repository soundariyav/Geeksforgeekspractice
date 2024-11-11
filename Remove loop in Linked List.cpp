class Solution {
  public:
    // Function to remove a loop in the linked list.
    void removeLoop(Node* head) {
        // code here
        // just remove the loop without losing any nodes
        Node* tortoise = head;
        Node* hare = head;
        if(tortoise==nullptr)return;
        while(hare!=nullptr && hare->next!=nullptr)
        {
            tortoise = tortoise->next;
            hare = hare->next->next;
            if(tortoise==hare)break;
            
        }
        if((hare==nullptr)||(hare->next==nullptr))
        {
            return;
        }
        if(tortoise==hare)
        {
            tortoise=head;
            if(tortoise==hare)
            {
                while(hare->next!=tortoise)
                {
                  hare= hare->next;
                }
            }
            else
            {
                while(tortoise->next!=hare->next)
                {
                    tortoise= tortoise->next;
                    hare = hare->next;
                }
            }
        }
        hare->next =nullptr;
     //   cout<<tortoise->data << endl;
        return;
    }
};
