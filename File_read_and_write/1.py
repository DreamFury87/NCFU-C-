from random import*

out = open("a.txt", "w")
nums = [randint(0, 100) * (randint(0,2) - 1) for i in range(30)]

for elem in nums:
    out.write(str(elem) + '\n')

out.close()
    
