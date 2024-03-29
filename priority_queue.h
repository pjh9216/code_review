#ifndef CODE_REVIEW_PROJECT1_TEMPLATE_PRIORITY_QUEUE_H_
#define CODE_REVIEW_PROJECT1_TEMPLATE_PRIORITY_QUEUE_H_

#include <queue>

template <typename T> 
class TemplatePriorityQueue {
	private:
		std::priority_queue<T> storage_;
	public:
		TemplatePriorityQueue();
		~TemplatePriorityQueue();
		bool empty() const;
		const T& top() const;
		int size() const;
		void push(const T&);
		void pop();	
};

#endif  // CODE_REVIEW_PROJECT1_TEMPLATE_PRIORITY_QUEUE_H_