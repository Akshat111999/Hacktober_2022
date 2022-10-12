# creating list having name of persons
persons = []
# initialising for 3 names
elements = 3
# loop to append names in the list
for i in range(0, elements):
    names = input('Name: ')
    persons.append(names)
# sorting the list in descending order
persons.sort(reverse=True)
# printing the persons list
print("Sorted list in descending: ", persons)
# sorting the list in ascending order
persons.sort(reverse=False)
# printing the persons list
print("Sorted list in ascending: ", persons)
