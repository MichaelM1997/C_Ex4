#include <stdbool.h>
#include "graph.h"

pnode idFinder (pnode * head, int node_id);
node *tempNode (int id, int w);

int dijkstra (pnode src, pnode dest, pnode * src_pointer);

bool update (pnode src, pnode dest, int w);

void createEdge (pnode src, pnode dest, int w);
void put_in_the_end (int value, pnode * head);
void insert (node ** head, int id, int w);
void reset (pnode * head);
void remove_edges_out (pnode * head, pnode node);
void remove_edges_in (pnode * head, pnode node);

