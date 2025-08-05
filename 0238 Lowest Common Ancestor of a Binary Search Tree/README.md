Ques2:LCA of Binary Tree(we will be given two nodes,n1 and n2 we have to find the lowest common ancestor)
Approach:The idea behind approach is:
-keep traversing in the tree till we get a n1 or n2
-if we find n1/n2 then go back check in right , and there after 3 cases will be there
- leftAns!=NULL and rightAns==NULL then return back the leftAns
- rightAns!=NULL and leftAns==NULL then return back the rightAns
- if we get rightAns && leftAns != NULL then return the node carrying them
