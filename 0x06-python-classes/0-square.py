#!/usr/bin/python3
"""Empty class Square that defines a square"""

class Square:
    """
    This class represents a square.
    """

    def __init__(self, side_length):
        """
        Initializes a new instance of the Square class.

        Args:
            side_length (float): The length of the square's sides.
        """
        self.side_length = side_length

    def calculate_area(self):
        """
        Calculates the area of the square.

        Returns:
            float: The area of the square.
        """
        return self.side_length ** 2

    def calculate_perimeter(self):
        """
        Calculates the perimeter of the square.

        Returns:
            float: The perimeter of the square.
        """
        return 4 * self.side_length
