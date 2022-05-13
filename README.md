# Push_swap

<!-- ABOUT THE PROJECT -->
## About The Project
The program is made up  of two lists of numbers named *l_a* and *l_b*.
In the biginning, *l_b* will be empty and *l_a* will contain a certain amount of positive or negative numbers.
The obective of the game is to sort *l_a*

##### In order to accomplish this, i will only have access to the following operation:
* `sa` swap the first two elements of l_a (nothing will happen if there aren’t enough elements).
* `sb` swap the first two elements of l_b (nothing will happen if there aren’t enough elements).
* `sc` sa and sb at the same time.
* `pa` take the first element from l_b and move it to the first position on the l_a list (nothing will happen if l_b is empty).
* `pb` take the first element from l_a and move it to the first position on the l_b list (nothing will happen if l_a is empty).
* `ra` rotate l_a toward the beginning, the first element will become the last.
* `rb` rotate l_b toward the beginning, the first element will become the last.
* `rr` ra and rb at the same time.
* `rra` rotate l_a toward the end, the last element will become the first.
* `rrb` rotate l_b toward the end, the last element will become the first.
* `rrr` rra and rrb at the same time.

### Prerequisites

```
Any terminal, GlibC and GCC
```

### Installing

There is a Makefile in the repository

```
make
```

```
./push_swap 1 12 3 -4 [...]
```

Made at Epitech Lyon in 2022
