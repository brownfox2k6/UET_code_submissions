Node* concat(vector<Node*> heads)
{
    // Your code here
    Node *bighead = NULL;
    Node *bigtail;
    for (Node *head : heads) {
        Node *p = head;
        if (!p) {
            continue;
        }
        if (!bighead) {
            bighead = new Node;
            bighead->value = p->value;
            bigtail = bighead;
            p = p->next;
        }
        while (p) {
            Node *q = new Node;
            q->value = p->value;
            bigtail->next = q;
            bigtail = q;
            p = p->next;
        }
    }
    return bighead; // Change this line
}