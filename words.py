import random

wordsarray=[]  #empty array
for i in range(0,5):
    word=input('Word: ')
    wordsarray.append(word)  #appending user input into the array

random.shuffle(wordsarray) # for giving the random order to the array

wordsarray.sort() # sorting the array in alphabetical order

print("\nSorted words in alphabetical order")
# printing array elements on new line using sep.
print(*wordsarray, sep = "\n")

