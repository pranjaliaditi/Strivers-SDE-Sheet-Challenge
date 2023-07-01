#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here

    LinkedListNode<int> *curr, *prev, *nxt;
       

        if(head == NULL || head->next == NULL)
        return head;

        else{

            curr = head;
            prev = NULL;
            nxt = NULL;

            while(curr != NULL){
                nxt = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nxt;
            }

            head = prev;

            return head;
        }
}
