'''Aim: 9. Alpha-Beta Pruning.'''

def alphabeta(node, depth, alpha, beta, maximizingPlayer):
    if depth == 0 or node.is_terminal():
        return node.value

    if maximizingPlayer:
        v = -float('inf')
        for child in node.children():
            v = max(v, alphabeta(child, depth-1, alpha, beta, False))
            alpha = max(alpha, v)
            if beta <= alpha: break # Beta prune
        return v
    else:
        v = float('inf')
        for child in node.children():
            v = min(v, alphabeta(child, depth-1, alpha, beta, True))
            beta = min(beta, v)
            if beta <= alpha: break # Alpha prune
        return v

print("Alpha-Beta Pruning (Search optimization logic initialized).")
