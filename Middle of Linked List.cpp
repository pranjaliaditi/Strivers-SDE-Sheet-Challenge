/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *findMiddle(Node *head) {
    // Write your code here

    int n = 0;

        Node* temp;

        temp = head;
        while(temp != NULL){
            n++;
            temp = temp->next;
        }

        //cout << "N = " << n <<"\n";

        int mid = (n/2) + (!n%2);

        temp = head;

        int cnt = 0;

        while(cnt < mid){
            if(cnt == mid)
            break;

            temp = temp->next;
            cnt++;
        }

        return temp;
}

