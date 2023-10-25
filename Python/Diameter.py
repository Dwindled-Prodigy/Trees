def find_diameter(root):
    if root is None:
        return 0

    left_height = find_height(root.left)
    right_height = find_height(root.right)

    left_diameter = find_diameter(root.left)
    right_diameter = find_diameter(root.right)

    return max(left_diameter, right_diameter, left_height + right_height + 1)
