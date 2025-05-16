Node *swapAfter(Node *head, int x) {
  Node *dummy = new Node;
  dummy->next = head;
  Node *prev = dummy;
  while (prev->next && prev->next->next) {
    Node *cur = prev->next;
    Node *nxt = cur->next;
    if (cur->value == x && nxt->value != x) {
      cur->next = nxt->next;
      nxt->next = cur;
      prev->next = nxt;
      prev = cur;
    } else {
      prev = prev->next;
    }
  }
  return dummy->next;
}