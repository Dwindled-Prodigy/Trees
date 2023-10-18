def find_depth(root):
    if root is None:
        return 0

    left_depth = find_depth(root.left)
    right_depth = find_depth(root.right)

    return max(left_depth, right_depth) + 1
