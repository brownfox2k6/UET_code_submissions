Node* extractNodes(Node* head, int threshold) 
{
    // Your code here
    Node *newhead = NULL;
    Node *p = head;
    Node *q;
    while (p) {
        if (p->value < threshold) {
            if (!newhead) {
                newhead = new Node;
                newhead->value = p->value;
                q = newhead;
            } else {
                Node *r = new Node;
                r->value = p->value;
                q->next = r;
                q = r;
            }
        }
        p = p->next;
    }
    return newhead; // Change this line
}