def are_identical(root1, root2):
    if root1 is None and root2 is None:
        return True
    if root1 is None or root2 is None:
        return False
    
    return (root1.data == root2.data) and \
           are_identical(root1.left, root2.left) and \
           are_identical(root1.right, root2.right)

def is_subtree(root1, root2):
    if root2 is None:
        return True
    if root1 is None:
        return False

    if are_identical(root1, root2):
        return True

    return is_subtree(root1.left, root2) or is_subtree(root1.right, root2)
