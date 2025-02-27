void print(Node* head)
{
    // Your code here
    Node *p = head;
    while (p) {
        cout << p->value << ' ';
        p = p->next;
    }
}

Node* insertHead(Node* head, int value)
{
    // Your code here
    Node *p = new Node;
    p->value = value;
    p->next = head;
    head = p;
    return head;
}

Node* insertTail(Node* head, int value)
{
    // Your code here
    Node *p = head;
    if (!p) {
        return insertHead(head, value);
    }
    while (p->next) {
        p = p->next;
    }
    Node *q = new Node;
    q->value = value;
    q->next = nullptr;
    p->next = q;
    return head;
}

Node* deleteNode(Node* head, int pos)
{
    // Your code here
    Node *p = head;
    if (!p->next) {
        delete p;
        return NULL;
    }
    for (int i = 0; i < pos - 1; ++i) {
        p = p->next;
    }
    Node *q = p->next;
    p->next = q->next;
    delete q;
    return head;
}

int getValue(Node* head, int pos)
{
    // Your code here
    Node *p = head;
    for (int i = 0; i < pos; ++i) {
        p = p->next;
    }
    return p->value; // Change this line
}