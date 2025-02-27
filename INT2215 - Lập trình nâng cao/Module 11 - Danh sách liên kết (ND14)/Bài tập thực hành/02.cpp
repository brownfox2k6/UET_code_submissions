bool compareLists(Node* headA, Node* headB) {
    // Your code here
    Node *p = headA;
    Node *q = headB;
    while (p && q) {
        if (p->value != q->value) {
            return false;
        }
        p = p->next;
        q = q->next;
    }
    return !p && !q; // Change this line
}