void printReverse(Node* head)
{
    if (!head) {
        return;
    }
    if (head->next) {
        printReverse(head->next);
    }
    cout << head->value << ' ';
}