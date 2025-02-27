Node* convert(Node* head)
{
    // Your code here
    if (!head) {
        return head;
    }
    Node *pSlow = head;
    Node *pFast = head;
    while (pFast) {
        pSlow = pSlow->next;
        pFast = pFast->next->next;
    }
    Node *pa = head->next;
    Node *pb = pSlow;
    Node *p = head;
    for (int i = 1; pb; ++i) {
        if (i & 1) {
            p->next = pb;
            p = pb;
            pb = pb->next;
        } else {
            p->next = pa;
            p = pa;
            pa = pa->next;
        }
    }
    return head;
}