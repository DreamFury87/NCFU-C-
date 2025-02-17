from random import*

def generate(filename):
    out = open(filename, "w")
    nums = [randint(0, 100) * (randint(0,2) - 1) for i in range(30)]    
    for elem in nums:
        out.write(str(elem) + '\n')
    out.close()
    

generate("a1.txt")
generate("a2.txt")


    
