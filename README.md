After a famous mystery writer died, a cardboard wheel was found pinned to the wall of his study.  This wheel was marked like wedges of a pie, each wedge containing notations such as “Get knocked out” or “Go to another place.”  Apparently the writer spun the wheel whenever he was stuck for a plot change.  Amused by this, Michael Crichton (the author of Jurassic Park, among many other novels) created his own version of the “plot wheel” by programming a computer to randomly produce plot fragments which might serve as spurs to a writer's creativity.  In this assignment, you will be creating your own version of Crichton's “Mystery Helper” program.

The attached file, “mystery_fragments.txt”, contains a collection of short plot fragments, one on each line.  Write a program which opens the file, reads each of these fragments from the file and adds it to a vector, then prompts the user to enter “M” (for “More Help”) or “Q” (for “Quit”).  Each time the player enters “M,” select a plot fragment at random from the vector and print it to the console.  Try choosing “M” repeatedly after you get your program working, and you may find that the computer will begin to weave its own (nonsensical) story!

Finally, add a counter to your program so that, after every four times the player asks for help, your program prints the message “YOU WANT TOO MUCH HELP!!!” instead of one of the random fragments.  Set the counter to zero at the start of the program, and check its value with each request for help; if the value equals four, print the message and reset it to zero again, and if it does not, increment it (that is, add one to its value) before printing the next fragment.  You should define a constant instead of using the number “4” directly in your code.

Your output should resemble the following:

```bash
MYSTERY WRITER'S HELPER
=======================

Enter 'H' to get help, or 'Q' to quit: h
you smell smoke

Enter 'H' to get help, or 'Q' to quit: h
you find a hidden door

Enter 'H' to get help, or 'Q' to quit: h
your flashlight suddenly goes out

Enter 'H' to get help, or 'Q' to quit: h
a barking dog rapidly approaches

Enter 'H' to get help, or 'Q' to quit: h
YOU WANT TOO MUCH HELP !!!

Enter 'H' to get help, or 'Q' to quit: q
```

A few tips and hints to get you started:


This will be our first time using the vector in C++. Like the list in Python, a vector is a linear collection of elements, and it is such a useful container that we will be using it in many of our subsequent assignments.  See the "Vectors" lecture slides for examples of how to perform the most common operations with vectors (I will demonstrate some of these on Friday also).
After you create a folder for your project, be sure to save your program file and the "mystery_fragments.txt" file together inside the project folder.  This will make it easier to open the file for reading, since you'll need to specify only the file name in your program instead of a complete path.
Because the plot fragments in the input file are incomplete sentences and will include spaces, you will find the getline() library function most helpful for reading them into your program (remember, this function allows you to read strings which include spaces and other whitespace characters from an input stream).
Once your program opens a file input stream, it will need to read every line until it reaches the end of the file.  This is an example of an EOF-driven while loop, which is discussed in your textbook.  I will show you an example on Friday.
This program, and many of our subsequent ones, will involve the creation of random numbers.  Real randomness is something we may explore in more detail later, but for now, you can add a “quick and dirty” function to your program to generate random numbers in way similar to what you are accustomed to from Python:

int randint(int max) {

    return ( rand() % max );

}

This function uses a pseudorandom number generator to create a random value from 0 to (max-1); for example, if you want to choose a random number from three possible values (0, 1, or 2), you would call randint(3).  To use this function, you must add the following line of code to the beginning of your main() function to seed the number generator ...

srand( time(NULL) );

… and then add the following #include directives to your program:

#include <cstdlib>
#include <ctime>
This assignment is worth 50 points and is due by the end of the day on Tuesday, September 15th Monday, September 21st.
