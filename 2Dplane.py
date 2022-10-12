# Point class having member functions
class point:
    # Constructer of class initialising x and y coordinates
    def __init__(self, x_axis, y_axis):
        self.x = x_axis
        self.y = y_axis
    
    # translate function which shifts the coordinates
    def translate(self, dx, dy):
        self.x = self.x + dx
        self.y = self.y + dy

    # distanceTo function which returns the distance between 2 points
    def distanceTo(self, point2):
        dist = (((point1.x - point2.x) ** 2) + ((point1.y - point2.y) ** 2)) ** (1/2)
        return round(dist, 2)

    # returns value of x coordinate
    def getX(self):
        return self.x

    # returns value of y coordinate
    def getY(self):
        return self.y

# objects of class point, point1 and point2
point1 = point(3,5)
point2 = point(-10.0,30.0)

# calling translate function to shift the coordinates
point1.translate(5.5, -12.5)

# printing the coordinate values of new coordinate and point2 coordinates
print("new coordinates of point1 = (", point1.x, ", ", point1.y,")")
print("Coordinates of point2 = (", point2.x,  ", ", point2.y,")")

# calling distanceTo fucntion and printing the distance.
distance = point1.distanceTo(point2)
print("Distance between the 2 points = ", distance)
