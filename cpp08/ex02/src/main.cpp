#include "MutantStack.hpp"

int main() {
  MutantStack<int> mstack;
  mstack.push(5);
  mstack.push(17);
  std::cout << "Top of Stack: " << mstack.top() << std::endl;
  std::cout << std::endl;
  std::cout << "stack size before pop: " << mstack.size() << std::endl;
  mstack.pop();
  std::cout << "stack size after pop: " << mstack.size() << std::endl;
  std::cout << std::endl;
  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  mstack.push(0);
  std::cout << "Top of Stack: " << mstack.top() << std::endl;
  std::cout << "stack size after pushing: " << mstack.size() << std::endl
            << std::endl;
  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();
  ++it;
  --it;
  while (it != ite) {
    std::cout << *it << std::endl;
    ++it;
  }
	std::cout << std::endl;
	std::cout << "Testing for vector:" << std::endl;

  MutantStack<int, std::vector<int> > m_vector;
	m_vector.push(5);
  m_vector.push(17);
  std::cout << "Top of Stack: " << m_vector.top() << std::endl;
  std::cout << std::endl;
  std::cout << "stack size before pop: " << m_vector.size() << std::endl;
  m_vector.pop();
  std::cout << "stack size after pop: " << m_vector.size() << std::endl;
  std::cout << std::endl;
  m_vector.push(3);
  m_vector.push(5);
  m_vector.push(737);
  m_vector.push(0);
  std::cout << "Top of Stack: " << m_vector.top() << std::endl;
  std::cout << "stack size after pushing: " << m_vector.size() << std::endl
            << std::endl;
  MutantStack<int, std::vector<int> >::iterator itv = m_vector.begin();
  MutantStack<int, std::vector<int> >::iterator itev = m_vector.end();
  ++itv;
  --itv;
  while (itv != itev) {
    std::cout << *itv << std::endl;
    ++itv;
  }
  return 0;
}