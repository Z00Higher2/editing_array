# #This program that creates an array of 10 integers, 
# and provides the user with an interface to edit any of its elements

array = [1,1,1,1,1,1,1,1,1,1]
array_size = len(array)

for i in range(array_size):
    print(array[i], end= ' ')



Index_1 = int(input("\n\n\nEnter an Index: "))
Value_1 = int(input("Enter a Value: "))

while Index_1 < 10:

    if Index_1 >= 10 or Index_1 < 0:
      
      break
   
    else:
      
     array[Index_1] = Value_1
      
     for i in range(array_size):
            print(array[i], end= ' ')

     Index_1 = int(input("\n\n\nEnter an Index: "))
     Value_1 = int(input("Enter a Value: "))


print ("Index out of range")



      

        
