lt = "abaaa"

substrings = set()  

l = len(lt)

for i in range(l):
    for j in range(i+1, l+1):  
        temp = lt[i:j]
        tempRev = temp[::-1]
        if temp==tempRev:
            if temp not in substrings:
                substrings.add(temp)
                
                
print(substrings)
