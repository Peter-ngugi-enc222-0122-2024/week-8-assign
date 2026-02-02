# Base class
class Square:
    def __init__(self, side):
        self.side = side
        print("Square constructor called")

    def get_peri(self):
        return 4 * self.side

    def get_area(self):
        return self.side * self.side

    def __del__(self):
        print("Square destructor called")


# Derived class
class Cube(Square):
    def __init__(self, side):
        super().__init__(side)
        print("Cube constructor called")

    # Override get_area (surface area of cube)
    def get_area(self):
        return 6 * self.side * self.side

    def get_volume(self):
        return self.side * self.side * self.side

    def __del__(self):
        print("Cube destructor called")


# Testing the classes
if __name__ == "__main__":
    sq = Square(4)
    print("Square Perimeter:", sq.get_peri())
    print("Square Area:", sq.get_area())

    print()

    cb = Cube(4)
    print("Cube Surface Area:", cb.get_area())
    print("Cube Volume:", cb.get_volume())
