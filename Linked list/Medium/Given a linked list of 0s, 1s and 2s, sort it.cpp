/*
Given a linked list of N nodes where nodes can contain values 0s, 1s, and 2s only. The task is to segregate 0s, 1s, and 2s linked list such that all zeros segregate to head side, 2s at the end of the linked list, and 1s in the mid of 0s and 2s.

Example 1:

Input:
N = 8
value[] = {1,2,2,1,2,0,2,2}
Output: 0 1 1 2 2 2 2 2
Explanation: All the 0s are segregated
to the left end of the linked list,
2s to the right end of the list, and
1s in between.
Example 2:

Input:
N = 4
value[] = {2,2,0,1}
Output: 0 1 2 2
Explanation: After arranging all the
0s,1s and 2s in the given format,
the output will be 0 1 2 2.
Your Task:
The task is to complete the function segregate() which segregates the nodes in the linked list as asked in the problem statement and returns the head of the modified linked list. The printing is done automatically by the driver code.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= N <= 103

Question link:https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1
*/

// This function is to segregate the elememtns in the linked list
// This will do the required arrangement by changing the links
Node* segregate(Node *head) {
    
    int count0=0,count1=0,count2=0;
    Node*curr=head;
   //here we are counting no. of 0,1,2 
    while(curr)
    {
        if(curr->data==0)
        count0++;
        
        else if(curr->data==1)
        count1++;
        
        else if(curr->data==2)
        count2++;
        
        curr=curr->next;
        
    }
    
    curr=head;
    //decreasing the count and putting data accordingly(sorted)
    while(curr)
    {
        if(count0!=0)
        {
        curr->data=0;
        count0--;
        }
        else if(count1!=0)
        {
        curr->data=1;
        count1--;
        }
        else if(count2!=0)
        {
        curr->data=2;
        count2--;
        }
        
        curr=curr->next;
    }
    return head;
}
