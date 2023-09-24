Predecessor And Successor In BST
Contributed by
Souhard Swami
Easy
40/40
10 mins
90 %
72 upvotes
Problem Statement



Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
15 10 20 8 12 16 25 -1 -1 -1 -1 -1 -1 -1 -1
10
Sample Output 1:
8 12
Explanation Of Sample Output 1:
The tree can be represented as follows:

The inorder traversal of this tree will be 8 10 12 15 16 20 25.

Since the node with data 8 is on the immediate left of the node with data 10 in the inorder traversal, the node with data 8 is the predecessor.

Since the node with data 12 is on the immediate right of the node with data 10 in the inorder traversal, the node with data 12 is the successor.
Sample Input 2:
10 5 -1 -1 -1
5
Sample Output 2:
-1 10
Constraint :
1 <= N <= 10^4
1 <= data <= 10^7

Time Limit: 1 sec