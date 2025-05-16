Node *removeMod(Node *head, int m) {
  Node *newhead = new Node;
  Node *p = newhead;
  while (head) {
    if (head->value % m) {
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