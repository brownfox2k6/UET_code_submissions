Node *splitEvenOdd(Node *head) {
  Node *newhead = new Node;
  Node *p = newhead;
  Node *q = head;
  while (q) {
    if (q->value % 2 == 0) {
      p->next = new Node;
      p->next->value = q->value;
      p = p->next;
    }
    q = q->next;
  }
  while (head) {
    if (head->value % 2) {
      p->next = new Node;
      p->next->value = head->value;
      p = p->next;
    }
    Node *x = head;
    head = head->next;
    delete x;
  }
  Node *x = newhead;
  newhead = newhead->next;
  delete x;
  return newhead;
}
