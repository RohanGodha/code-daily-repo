class TreeNode:
    def __init__(self, key):
        self.left = None
        self.right = None
        self.val = key

def inorder_traversal(root):
    if root:
        inorder_traversal(root.left)
        print(root.val, end=" ")
        inorder_traversal(root.right)

def insert(root, key):
    if root is None:
        return TreeNode(key)
    else:
        if root.val < key:
            root.right = insert(root.right, key)
        else:
            root.left = insert(root.left, key)
    return root

# Creating a sample binary tree
root = None
keys = [15, 10, 20, 8, 12, 17, 25]

for key in keys:
    root = insert(root, key)

# Inorder traversal to display the binary tree
print("Inorder Traversal:")
inorder_traversal(root)
