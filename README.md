ATS Resume Checker in C
Overview
ATS Resume Checker is a simple C-language project that simulates the basic functionality of an Applicant Tracking System (ATS). The program analyzes a resume, checks for the presence of important skills, calculates a match percentage, identifies missing skills, and provides suggestions for improvement.
This project is designed for beginners learning C programming and demonstrates the practical use of strings, arrays, loops, conditional statements, and pattern matching.
Features
    • Analyze resume text entered by the user
    • Match resume skills against predefined job skills
    • Calculate ATS match percentage
    • Display matched skills
    • Display missing skills
    • Provide personalized improvement suggestions
    • Classify candidates as Beginner, Intermediate, or Strong
    • Beginner-friendly implementation using standard C libraries
Technologies Used
    • C Programming Language
    • Standard Libraries:
        ◦ stdio.h
        ◦ string.h
Skills Evaluated
The current version checks for the following skills:
    • C
    • Python
    • Java
    • SQL
    • Data Structures
    • Communication
    • Problem Solving
    • Git
Additional skills can easily be added by modifying the skills array in the source code.
How It Works
    1. The user enters resume content.
    2. The program searches for predefined skills using the strstr() function.
    3. Matched skills are counted.
    4. Missing skills are identified.
    5. ATS score is calculated using:
    • ATS Score = (Matched Skills / Total Skills) × 100
    6. Improvement suggestions are generated based on missing skills.
    7. The candidate’s profile strength is displayed.
Sample Input
I know Python, C, SQL, Git and Communication.
Sample Output
===== ATS REPORT =====
Matched Skills: [+] C [+] Python [+] SQL [+] Communication [+] Git
Missing Skills: [-] Java [-] Data Structures [-] Problem Solving
ATS Match Score = 62.50%
Status : Intermediate Candidate
===== IMPROVEMENT SUGGESTIONS =====
    • Learn Java Programming
    • Practice Data Structures and Algorithms
    • Solve Coding Problems Daily
Learning Outcomes
This project helps beginners understand:
    • Arrays
    • Strings
    • String searching using strstr()
    • Loops
    • Conditional statements
    • Percentage calculations
    • Basic project structuring in C
Future Enhancements
    • Resume input from a text file
    • Job description matching
    • Case-insensitive skill detection
    • Skill categorization
    • Career recommendations
    • Graphical user interface
    • Resume score report generation
Author
Developed as a learning project to understand C programming concepts and the basic working principles of Applicant Tracking Systems (ATS).
