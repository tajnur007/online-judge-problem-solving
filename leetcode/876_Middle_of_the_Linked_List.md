
# JavaScript Solution

### Approach 1: Simple Process

```JS
/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var middleNode = function(head) {
    let cnt = 0;
    let tempHead = midNode = head;

    while(tempHead?.next !== undefined) {
        cnt++;

        if((cnt & 1) == 0) {
            midNode = midNode.next;
        }

        tempHead = tempHead.next;
    }

    return midNode;
};
```

### Approach 2: Faster Process

```JS
/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var middleNode = function(head) {
    let nodes = [];

    while(head) {
        nodes.push(head);
        head = head.next;
    }

    return nodes[Math.floor(nodes.length / 2)];
};
```




