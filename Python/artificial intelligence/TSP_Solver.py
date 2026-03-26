'''Aim: 6. Travelling Salesman Problem.'''
from itertools import permutations

def tsp(graph, start):
    nodes = [n for n in graph if n != start]
    min_path = float('inf')
    for p in permutations(nodes):
        curr_dist = 0
        k = start
        for next_node in p:
            curr_dist += graph[k][next_node]
            k = next_node
        curr_dist += graph[k][start]
        min_path = min(min_path, curr_dist)
    return min_path

graph = {'A': {'B': 10, 'C': 15, 'D': 20}, 'B': {'A': 10, 'C': 35, 'D': 25}, 'C': {'A': 15, 'B': 35, 'D': 30}, 'D': {'A': 20, 'B': 25, 'C': 30}}
print(f"Min TSP Cost starting from A: {tsp(graph, 'A')}")
