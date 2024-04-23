#include <iostream>

using namespace std;
int main()
{
    ChainLink link_one = ChainLink("red");
    Node node_one = new Node(&link_one);

    ChainLink link_two = ChainLink("blue");
    Node node_two = new Node(&link_two, &node_one);

    ChainLink link_three = ChainLink("green");
    Node node_three = new Node(&link_three, &node_two);

    // Returns the second ChainLink in the list
    Node retrieved_node = node_one.next();
    ChainLink retrieved_link = retrieved_node.data();

    // Returns the third ChainLink in the list
    Node another_retrieved_node = node_one.next().next();
    ChainLink another_retrieved_link = another_retrieved_node.data();
}