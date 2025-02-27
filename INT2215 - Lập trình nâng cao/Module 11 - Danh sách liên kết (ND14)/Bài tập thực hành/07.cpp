Node* deleteDuplicates(Node* head)
{
    // Your code here
    if (!head || !head->next) {
        return head;
    }
    Node *p = head;
    Node *q = head->next;
    Node *newhead = new Node;
    newhead->value = head->value;
    Node *newtail = newhead;
    while (q) {
        if (q->value != p->value) {
            Node *r = new Node;
            r->value = q->value;
            newtail->next = r;
            newtail = r;
        }
        p = p->next;
        q = q->next;
    }
    return newhead;
}

Node* insert(Node* head, int value)
{
    // Your code here
    Node *p = new Node;
    if (value <= head->value) {
        p->value = value;
        p->next = head;
        head = p;
    } else {
        p = head;
        while (p->next && p->next->value < value) {
            p = p->next;
        }
        Node *q = new Node;
        q->value = value;
        q->next = p->next;
        p->next = q;
    }
    return head;
}