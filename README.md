C++ Programming Basics: Conditional Statements & Coordinate Geometry

This repository contains solutions to basic C++ programming exercises, focusing on the use of conditional statements (`if`, `else if`, `else`) to handle different decision-making scenarios based on user input. These programs are part of Experiment Series 3 (A, B, and C) for the EnTC-A1 batch.



Experiment 3A: Number Classification (Positive, Negative, or Zero)

AIM:
To write a C++ program that determines whether a user-entered number is positive, negative, or zero using conditional statements.

THEORY:
Conditional statements are essential for decision-making in programming. The `if` statement checks a condition and executes code if it’s true. The `else if` provides alternative conditions, while `else` handles any remaining cases. In this program, a number entered by the user is checked against three conditions to determine its nature: positive, negative, or zero. This demonstrates a practical application of simple condition checks.

CONCLUSION:
The program successfully implemented conditional logic to classify a number as positive, negative, or zero. It reinforced the concept of structured decision-making in programming using `if-else if-else` statements.



Experiment 3B: Student Grade Calculator

AIM:
To develop a C++ program that calculates the average of marks entered for five subjects and assigns a grade based on the result.

THEORY:
This experiment combines arithmetic operations with condition-based decision making. The program first takes marks for five subjects, calculates the average, and then uses a series of `if-else if-else` conditions to assign a grade based on predefined marks ranges (e.g., O, A+, A, B+, B, C, or Fail). The logic must be ordered correctly—from highest to lowest grade—for accurate output. This is a common real-world application of conditional logic.

CONCLUSION:
The grade calculator was successfully created and worked as expected. It allowed a practical understanding of using conditional statements in real-life applications like grading. Enhancements such as input validation and the use of arrays could improve the program further.



Experiment 3C: Quadrant Identifier

AIM:
To write a C++ program that takes X and Y coordinates as input and determines which quadrant the point lies in, or whether it lies on an axis or at the origin.

THEORY:
In the Cartesian coordinate system, points can lie in one of four quadrants or on the X-axis, Y-axis, or origin. This program takes input for X and Y and uses `if-else if-else` statements along with logical operators (`&&`, `||`) to determine the point's location. The conditions are checked in a specific order, starting from the most specific (origin) to the more general (axis or quadrant). Logical operators are used to check multiple conditions simultaneously.

CONCLUSION:
The program was successful in identifying the correct position of the input coordinate. It applied conditional and logical operators effectively and highlighted the importance of checking conditions in the right order when multiple outcomes are possible.
