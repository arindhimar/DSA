n = int(input("Enter size"))

temp=[]

for i in range(n):
    
    ele = int(input("Enter ele"))
    
    temp.append(ele)
    
sum= 0

for i in range(n):
    for j in range(i,n):
         sum+= max(temp[i:j+1]) - min(temp[i:j+1])

print(sum)