# function to take input and calculate the average
def read_scores_find_lowest(a):
    score = []
    while (a != 0):
        # taking input of scores
        sc = int(input(" Enter score "))
        # appending scores to the list
        score.append(sc)
        a -= 1
    # calculating the lowest scores by sorting     
    score.sort()
    #returning the first element which is the smallest element
    return score[0]
    
a = int(input("Number of scores to enter: "))
# function calling
print("Lowest score is ",read_scores_find_lowest(a))
    
