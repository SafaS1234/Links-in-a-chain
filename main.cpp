#include <iostream>
#include <string>

using namespace std;

class ChainLink {
    private:
      string color;
    public:
      ChainLink()
      {
        color = "";
      }

      ChainLink(string color)
      {
        this->color = color;
      }

      string get_color() 
      {
        return this->color;
      }

};

class Node
{
    public:
      ChainLink data;
      Node * next;

      Node(ChainLink& data, Node* prev = nullptr)
      {
        this-> data = data;
        this-> next = nullptr;

        if(prev != nullptr)
        {
          prev -> next = this;
        }
      };
};

int main()
{
  ChainLink link_one = ChainLink("red");
  Node* node_one = new Node(link_one);

  ChainLink link_two = ChainLink("blue");
  Node* node_two = new Node(link_two, node_one);

  ChainLink link_three = ChainLink("green");
  Node* node_three = new Node(link_three, node_two);

  // // Returns the first ChainLink in the list
  Node* retrieved_node = node_one;
  ChainLink retrieved_link = retrieved_node->data;
  cout << " First ChainLink: " << retrieved_link.get_color() << endl;

  // Returns the second ChainLink in the list
  Node* retrieved_node2 = node_one->next;
  ChainLink retrieved_link2 = retrieved_node2->data;
  cout << " Second ChainLink: " << retrieved_link2.get_color() << endl;

  // Returns the third ChainLink in the list
  Node* another_retrieved_node = node_one->next->next;
  ChainLink another_retrieved_link = another_retrieved_node->data;
  cout << " Third ChainLink: " << another_retrieved_link.get_color() << endl;
}

