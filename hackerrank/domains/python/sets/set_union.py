input()
english=set([x for x in input().split() ])
input()
french=set([x for x in input().split()])
print(len(english.union(french)))