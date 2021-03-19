#include <vector>

#ifndef HOMEWORK_1_NODE_H
#define HOMEWORK_1_NODE_H

template<typename T>
class Node {
public: 
	std::vector<std::pair<Node*,T>> next;
	std::vector<std::pair<Node*,T>> prev;


	Node() : next(std::vector< std::pair< Node<T>*, T> >()), prev(std::vector< std::pair< Node<T>*, T> >()) { }

	bool IsEmpty() {
		return !(next.size() || prev.size());
	}
};

#endif //HOMEWORK_1_NODE_H
