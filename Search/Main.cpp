#include "Node.h"

using namespace std;
using char_node_t = node<char>;

int main()
{
	//      A
	//    B   C
	//  D   E   F
	// Create nodes with char data
	char_node_t* nodeA = new char_node_t{ 'A' };
	char_node_t* nodeB = new char_node_t{ 'B' };
	char_node_t* nodeC = new char_node_t{ 'C' };
	char_node_t* nodeD = new char_node_t{ 'D' };
	char_node_t* nodeE = new char_node_t{ 'E' };
	char_node_t* nodeF = new char_node_t{ 'F' };
	// Create tree from nodes (children)
	nodeA->children.push_back(nodeB); // A->B
	// create the other connections as shown in the tree at the top (A->C, B->D, ...)
}