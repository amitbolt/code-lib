ListNode reverseKGroup(ListNode head, int k) {
	if(!head  !head-next) return head;
	ListNode newHead(0);
	ListNode pre = &newHead, cur = head, next = NULL;
	newHead.next = head;
	int len = 0;
	for(ListNode p = head; p; p = p-next) len++;
	int times = lenk;
	while(times) {
		for(int i = 1; i  k; ++i) {
			next = cur-next;
			cur-next = cur-next-next;
			next-next = pre-next;
			pre-next = next;
			if(i == k-1) {
				pre = cur;
				cur = cur-next;
			}
		}
		times--;
	}
	return newHead.next;
}