def mirror_tree(root):
    if root is None:
        return root

    left = mirror_tree(root.left)
    right = mirror_tree(root.right)

    root.left, root.right = right, left

    return root
