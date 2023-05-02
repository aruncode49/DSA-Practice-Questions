#include<iostream>
#include<unordered_map>
using namespace std;

class Node  // created node class
{
    public:
        int data;
        Node* next;
    
    Node(int d) // constructor
    {
        this->data = d;
        this->next = NULL;
    }

    ~Node() // destructor
    {
        if (next != NULL) {
            delete next;
        }
    }
};

void insertAtHead(Node* &head, int d)
{
    // create new node and add in the list at head
    Node* node = new Node(d);
    node->next = head;
    head = node;
}

void insertAtTail(Node* &head, Node* &tail, int d)
{
    // create new node and add in the list at tail
    Node* node = new Node(d);
    if(head == NULL)
    {
        head = node;
        tail = node;
        return;
    }
    else
    {
        tail->next = node;
        tail = node;
    }   
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d)
{

    if(position == 1)
    {
        insertAtHead(head,d);
        return;
    }

    int count = 1;
    Node* temp = head;
    while(count < position-1)
    {
        temp = temp->next;
        count++;
    }

    if(temp->next == NULL)
    {
        insertAtTail(head,tail,d);
    }

    Node* node = new Node(d);
    node->next = temp->next;
    temp->next = node;
}

void printList(Node* &h)
{
    Node* temp = h;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}  

void deletehead(Node* &head)
{
    Node*temp = head;
    head = head->next;
    delete temp;
}

void deletetail(Node* &tail,Node* &head)
{
    Node *temp = head;
    while(temp->next != tail)
    {
        temp = temp->next;
    }
    delete tail;
    tail = temp;
    tail->next = NULL;
}

void deleteNode(Node* &head, Node* &tail, int position)
{
    if(position == 1)
    {
        deletehead(head);
        return;
    }

    Node* a = head;
    Node* b = head->next;
    int count = 1;

    while (count < position-1)
    {
        a = b;
        b = b->next;
        count++;
    }

    if(b->next == NULL)
    {
        deletetail(tail,head);
        return ;
    }

    a->next = b->next;  // this is the main step
    b->next = NULL;
    delete b;   
}

void deleteDuplicate(Node* &head)
{
    // if we need to maintain our data in sorted order then we should use map incase of unordered map.
    // but if our data is present in unsorted order then we should use unordered-map incase of map becuase map increases the time complexity which is a bad thing and unordered map decrease the time complexity which is good for our program.
    
    unordered_map<int, bool> visited;

    Node* curr = head;

    while(curr->next != NULL)
    {
        visited[curr->data] = true;
        
        if(visited[curr->next->data] == true)
        {
            Node* nodetodelete = curr->next;
            curr->next = nodetodelete->next;
            delete nodetodelete;
        }
        else
        {
            curr = curr->next;
        }
    }
}

void sort_0_1_2s(Node* &head)
{
    // 1st way (using replace the data of linked list node)
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;
    Node* temp = head;

    // count number of zero, one's, and two's
    while(temp != NULL)
    {
        if(temp->data == 0)
            zeroCount++;
        else if(temp->data == 1)
            oneCount++;
        else if(temp->data == 2)
            twoCount++;

        // update temp
        temp = temp->next;
    }

    temp = head;    // again update temp to beginning of node

    // replace data of linked list node
    while(temp != NULL)
    {
        if(zeroCount != 0)
        {
            temp->data = 0;
            zeroCount--;
        }
        else if (oneCount != 0)
        {
            temp->data = 1;
            oneCount--;
        }
        else if (twoCount != 0)
        {
            temp->data = 2;
            twoCount--;
        }

        // update temp
        temp = temp->next;
    }
}

// merge two sorted linked list function
Node* mergetwosortedlinkedlist(Node* &first, Node* &second)
{
    // if only one node present in first linked list
    if(first->next == NULL)
    {
        first->next = second;
        return first;
    }

    // now main part start;
    Node* curr1 = first;
    Node* curr2 = second;
    Node* next1 = first->next;
    Node* next2 = second->next;

    while(next1 != NULL && curr2 != NULL)
    {
        if(curr2->data >= curr1->data && curr2->data <= next1->data)
        {
            // add nodes of second list in between the node of first list
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;

            // updating pointers
            curr1 = curr2;
            curr2 = next2;
        }
        else
        {
            // go one step ahead in first list
            curr1 = next1;
            next1 = next1->next;

            if(next1 == NULL)
            {
                curr1->next = curr2;
                return first;
            }
        }
    }
    return first;
}

// finding middle of a linked list
Node* getMiddle(Node* head)
{
    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;  // middle = slow (Time complexity = O(n/2))
}

// reverse the linked list
Node* reverseLinkedList(Node* head)
{
    Node* curr = head;
    Node* prev = NULL;
    Node* forward = NULL;

    while(curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

// checking a linked list palindrome or not
bool checkPalindrome(Node* &head)
{
    // STEP-1: finding middle
    Node* middle = getMiddle(head);
    Node* temp = middle->next;

    // STEP-2: reverse after the middle not
    middle -> next = reverseLinkedList(temp);

    // STEP-3: compare both half 
    Node* curr1 = head;
    Node* curr2 = middle->next; 
    while(curr2 != NULL)
    {
        if(curr1 -> data != curr2 -> data)
        {
            return false;
        }
        curr1 = curr1 -> next;
        curr2 = curr2 -> next;
    }
    return true;
}

// most important question (level - medium)
Node* addTwoNumberRepresentedByLinkedList(Node* first, Node* second)
{
    Node* ansHead = NULL;
    Node* ansTail = NULL;
    
    int carry = 0;
    
    while(first != NULL || second != NULL || carry != 0)
    {
        int val1 = 0;
        if(first != NULL)
            val1 = first->data;
            
        int val2 = 0;
        if(second != NULL)
            val2 = second->data;
            
        int sum = carry + val1 + val2;
        int digit = sum % 10;
        carry = sum / 10;
        
        insertAtTail(ansHead, ansTail, digit);
        
        if(first != NULL)
            first = first->next;
            
        if(second != NULL)
            second = second->next;
    }
    return ansHead;
}   

int main()
{
    Node* node1 = new Node(1);

    Node* head = node1;
    Node* tail = node1;

    // insert data in first linked list
    insertAtTail(head,tail,2);
    insertAtTail(head,tail,3);
    insertAtTail(head,tail,2);
    insertAtTail(head,tail,1);

    // make function call for merge two sorted linked list
    /*
    if(head1 == NULL)
        printList(head2);

    if(head2 == NULL)
        printList(head1);

    if(head1->data <= head2->data)
    {
        Node* printNode = mergetwosortedlinkedlist(head1, head2); // changes in head1
        printList(printNode);
    }
    else
    {
        Node* printNode = mergetwosortedlinkedlist(head2, head1); // changes in head2
        printList(printNode);
    }*/

    // make function call for checking a linked listis paindrome or not
    /*
    if(checkPalindrome(head))
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }*/
    // print list
    printList(head);
    return 0;
}