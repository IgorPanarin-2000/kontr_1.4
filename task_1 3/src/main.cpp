
#include "../include/CComplexVector.hpp"
#include "../include/test.hpp"

int main ()
{

  CComplexVector_t a[10];

  for (int i = 0; i < 10; i++)
    {
      a[i].set_a (i);
      a[i].set_b (i);
      a[i].print_vector ();
    }

  CComplexVector_test ();

  return 0;
}
