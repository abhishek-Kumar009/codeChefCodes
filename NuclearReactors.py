# cook your dish here
import math
def NuclearReactor(a, n, k, l):
    if a == 0 or k == 0:
        return l
    # If number of particles is a multiple of (n + 1)**k
    #make all the elements inside list as 0
    if a % ((n + 1)**k) == 0:
        return l
    # If number of particles is greater than multiple of (n + 1)**k
    #but less than the next multiple
    if a > ((n + 1)**k):
        rem_p = a % ((n + 1)**k)
        return NuclearReactor(rem_p, n, k, l)
    else:
        par_in_reactor = (n + 1)**(k - 1)
        l[k - 1] = a//(par_in_reactor)
        rem_particles = a - l[k - 1]*par_in_reactor
        return NuclearReactor(rem_particles, n, k - 1, l)
a, n, k = map(int, input().split())
l = [0 for x in range(k)]
l = NuclearReactor(a, n, k, l)
print(*l)

