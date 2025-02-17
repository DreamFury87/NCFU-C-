from random import*

def generate(filename):
    out = open(filename, "w")
    nums = [(round(random(), 2) + randint(0, 50)) * (randint(0,2) - 1) for i in range(30)]    
    for elem in nums:
        out.write(str(elem) + '\n')
    out.close()
    

generate("a1.txt")
generate("a2.txt")


    
