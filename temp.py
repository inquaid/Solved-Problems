import graphviz

def draw_bplus_tree_step(step_num, tree_structure, title="B+ Tree Insertion"):
    dot = graphviz.Digraph(format='png')
    dot.attr(rankdir='TB')
    dot.attr(label=f"{title} - Step {step_num}", fontsize='20')

    for level_idx, level in enumerate(tree_structure):
        with dot.subgraph() as s:
            s.attr(rank='same')
            for node_id, node_label in level:
                s.node(node_id, label=node_label, shape='record')

    for i in range(len(tree_structure) - 1):
        parent_level = tree_structure[i]
        child_level = tree_structure[i+1]
        for parent_idx, (parent_id, parent_label) in enumerate(parent_level):
            children = [cid for cid, _ in child_level if cid.startswith(parent_id)]
            for cid in children:
                dot.edge(parent_id, cid)

    return dot

# Step-by-step tree structures
steps = []

# Step 1: [5, 10, 15]
steps.append([
    [('R', '5 | 10 | 15')]
])

# Step 2: Insert 20, causes leaf split: promote 15
steps.append([
    [('R', '15')],
    [('R0', '5 | 10'), ('R1', '15 | 20')]
])

# Step 3: Insert 25, 30, 35 — all go into R1 until split
steps.append([
    [('R', '15')],
    [('R0', '5 | 10'), ('R1', '15 | 20 | 25 | 30 | 35')]
])

# Step 4: R1 splits, promote 25
steps.append([
    [('R', '15 | 25')],
    [('R0', '5 | 10'), ('R1', '15 | 20'), ('R2', '25 | 30 | 35')]
])

# Step 5: Insert 40, 45, 50, 55 — go into R2 until split
steps.append([
    [('R', '15 | 25')],
    [('R0', '5 | 10'), ('R1', '15 | 20'), ('R2', '25 | 30 | 35 | 40 | 45 | 50 | 55')]
])

# Step 6: R2 splits, promote 40
steps.append([
    [('R', '15 | 25 | 40')],
    [('R0', '5 | 10'), ('R1', '15 | 20'), ('R2', '25 | 30 | 35'), ('R3', '40 | 45 | 50 | 55')]
])

# Step 7: Insert 60, 65, 70, 75 — go into R3 until split
steps.append([
    [('R', '15 | 25 | 40')],
    [('R0', '5 | 10'), ('R1', '15 | 20'), ('R2', '25 | 30 | 35'), ('R3', '40 | 45 | 50 | 55 | 60 | 65 | 70 | 75')]
])

# Step 8: R3 splits, promote 60; root splits as well
steps.append([
    [('R', '40')],
    [('R0', '15 | 25'), ('R1', '60')],
    [('R00', '5 | 10'), ('R01', '15 | 20'), ('R02', '25 | 30 | 35'), ('R10', '40 | 45 | 50 | 55'), ('R11', '60 | 65 | 70 | 75')]
])

# Step 9: Insert 80, 85, 90 — go into R11, final leaf group
steps.append([
    [('R', '40')],
    [('R0', '15 | 25'), ('R1', '60 | 80')],
    [('R00', '5 | 10'), ('R01', '15 | 20'), ('R02', '25 | 30 | 35'), ('R10', '40 | 45 | 50 | 55'), ('R11', '60 | 65 | 70 | 75'), ('R12', '80 | 85 | 90')]
])

# Render final step
draw_bplus_tree_step(9, steps[-1], title="B+ Tree Order 4 - Final Step")
