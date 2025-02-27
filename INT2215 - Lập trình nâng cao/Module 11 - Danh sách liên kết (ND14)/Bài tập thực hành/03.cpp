vector<int> linkedListToVector(Node* head)
{
    // Your code here
    vector<int> v;
    Node *p = head;
    while (p) {
        v.emplace_back(p->value);
        p = p->next;
    }
    return v; // Change this line
}

Node* vectorToLinkedList(vector<int> values)
{
    // Your code here
    Node *head = new Node;
    head->value = values[0];
    Node *p = head;
    for (int i = 1; i < int(values.size()); ++i) {
        Node *q = new Node;
        q->value = values[i];
        p->next = q;
        p = q;
    }
    return head; // Change this line
}