#include <iostream>
#include <iterator>
#include <vector>


using namespace std;

template<class T>
void my_reverse(T first, T last) {

     typename iterator_traits<T>::difference_type n = distance(first, last);

     n--;

     while( n > 0 ) {

                typename iterator_traits<T>::value_type tmp = *first;

                *first++ = *--last;

                 *last = tmp;

		 n-=2;  
     }   

}

int main() {

    vector<int> v{1,2,3,4,5,6,7,8};
    int a[] = {1,2,3,4,5,6,7,8};

    //my_reverse(v.begin(), v.end());
      my_reverse(a, a + 8); 

    for(auto x : a) cout<<x<<" ";

return(0);
}
