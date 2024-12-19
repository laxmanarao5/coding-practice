
m=int(input())
m_list=list(map(int,input().split()))
n=int(input())
n_list=list(map(int,input().split()))
m_set=set(m_list)
n_set=set(n_list)
union=m_set.union(n_set)
intersection=m_set.intersection(n_set)
list=list(union.symmetric_difference(intersection))
list.sort()
for i in list:
    print(i)
