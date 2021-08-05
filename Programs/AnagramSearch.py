'''
Given two strings s and p, return an array of all the start indices of p's anagrams in s. You may return the answer in any order.

Example 1:

Input: s = "cbaebabacd", p = "abc"
Output: [0,6]
Explanation:
The substring with start index = 0 is "cba", which is an anagram of "abc".
The substring with start index = 6 is "bac", which is an anagram of "abc".
'''

s = input()
p = input()
res = []

if(len(s) < len(p)):
  print("Not Found")
  exit()

if(len(s) == 1 and p[0] == s[0]):
  print("Found")
  exit()
it = len(s)-len(p)+1

for i in range(it):
  sub = s[i:i+len(p)]
  print("sub: ", sub)
  p1 = p
  for j in sub:
    if j in p1:
      p1 = p1.replace(j, "", 1)
  if p1 == "":
    print("Anagram found")
    res.append(i)

print(res)
print("sub: ", sub)
print("p1: ", p1)