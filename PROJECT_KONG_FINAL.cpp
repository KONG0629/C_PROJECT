#include<stdio.h>
#include <math.h>
#include <ctype.h>
#include<unistd.h>
#include<string.h>
int main()
{
	 int month, day, n;
	  char ch, m;
	  double mass, acceleration, force;
	  int philosopherNumber;
	  char O, y, h, j, k, l, q, u, v, z;
	  double radius;
	  double pi;
	  double area;
	  double circumference;
      double NUMBER10, NUMBER20, result;
      double a, b, c;
      int choice;
      char input;
      int eggPrice = 10;
      int coffeePrice = 8;
      int milkPrice = 12;
      int miloPrice = 10;
      int ricePrice = 50;
      int waterPrice = 15;
      int junkFoodsPrice = 10;
      int icePrice = 5;
      int candyPrice = 2;
      int sugarPrice = 30;
      int cannedGoodsPrice = 25;
      int money;
      char Choice;
      int totalCost = 0;
      char itemsBought[1000] = "";
	do
	{
	
      system("cls");
      printf("\033[1;93mProgram By: Kong Jr. Jerry G.\n");
      printf("BSIT 1-YA-1\n");
      printf("Project for FOPR\n");
      printf("Submitted By: Kong Jr. Jerry G.\n");
      printf("Submitted To: Mr. Arfel Aguilar\n");
      printf("\n\n");
	    printf("\e[1;36m\n______________________________________________________________________________________ \n");
        printf("\033[1;36m                      *          ============================         *                         \n");
        printf("\033[0;94m                       ><><><><  WELCOME TO MENU OF PROGRAM  ><><><><<                        \n");                  
        printf("\033[1;36m                      *          ============================         *                          \n");
        printf("______________________________________________________________________________________ \n");
        
        printf("            [1]  Zodiac Sign                                 [6]  Circle                 \n");
        printf("            [2]  Vowel or Consonant                          [7]  Pythagorean theorem    \n");
        printf("            [3]  Calculate force                             [8]  Class Schedule         \n");
        printf("            [4]  Philosopher                                 [9]  Alphabet               \n");
        printf("            [5]  Calculator                                  [10] Store                  \n"); 
        printf("                                    [0] Exit the Program                                   ");
		// Get user's choice
        printf("\033[0;94m\n><><Input Number Choice><><: ");
        	scanf("%i", &choice);
  
if (choice==1)
{      
	do
	{	
	system("cls");
	printf("Kong Jr. Jerry G.");
	printf("BSIT 1-YA-1\n");
	printf("\e[1;36m\n_____________________________________________________________ \n");
	printf("\e[1;36m\n                 <<===========>>\n");					                          
	printf("\033[0;91m                 ||Zodiac Sign||");
	printf("\e[1;36m\n                 <<===========>>\n");
	printf("\e[1;36m\n_____________________________________________________________ \n");
	
	// Input birth month and day
    printf("Enter your birth month (1-12): ");
    	scanf("%d", &month);

    printf("Enter your birth day: ");
    	scanf("%d", &day);

    // Determine the zodiac sign
    if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
        printf("Your zodiac sign is Aries.\n");
        printf("Independent and strong-willed, you are a force to be reckoned with!\nYou love nothing more than an exciting new goal to tackle,\nand you do your best work when you're flying solo.\nYour passion and energy keep the rest of us on our toes!\n");
    } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
        printf("Your zodiac sign is Taurus.\n");
        printf("As a Taurus, you're a wonderful combination of laid-back and hard-working.\nYou're honest and loyal, occasionally to a fault.\nYour determination and attention to detail will take you far in life.\n");
    } else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
        printf("Your zodiac sign is Gemini.\n");
        printf("Your ability to get along with a wide variety of people makes you a bit of a social butterfly,\nbut you'll take advantage of some alone time when it comes your way.\nCurious and deeply emotional, you love ritual and celebration.\n");
    } else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
        printf("Your zodiac sign is Cancer.\n");
        printf("Your intuition is downright uncanny! You do your best socializing in small groups\nand prefer intimate relationships even if it means your social circle is on the smaller side.\nYour creative spirit will bring joy to all you meet.\n");
    } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        printf("Your zodiac sign is Leo.\n");
        printf("It's no wonder your symbol is a lion. Your personality and presence are impressive to all.\nThis may intimidate some, but your inviting spirit will help you easily make friends.\nYour confidence will be an asset to you throughout your life.\n");
    } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        printf("Your zodiac sign is Virgo.\n");
        printf("You are the picture of poise and elegance. You love to stay organized\nand have a strong focus on keeping things aesthetic. But you're\nnot just beauty. You've got brains, too! You'll continue seeking\nknowledge and intellectual growth as you age.\n");
    } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
        printf("Your zodiac sign is Libra.\n");
        printf("You have a large social circle, and your open-mindedness helps\nyou get along with just about anyone. But don't get lost in the crowd!\nA focus on self-care and personal reflection will help you build your confidence over time.\n");
    } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
        printf("Your zodiac sign is Scorpio.\n");
        printf("As a Scorpio, you can have a sharp edge, but this isn't always a negative quality.\nIt gives you an appreciation for authenticity and a strong sense of independence.However,\nyou're not always as tough as you appear. Once you let people into your life, you're a bit of a softy.\n");
    } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        printf("Your zodiac sign is Sagittarius.\n");
        printf("The road less traveled is your favorite place to be! Your bravery is admirable\nand will make you a good fit for leadership roles. You also have a bit of\nan itch in your shoes and will always be ready to take on a new adventure.\n");
    } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
        printf("Your zodiac sign is Capricorn.\n");
        printf("Your perfectionism and high standards, though sometimes an obstacle,\ncan be one of your superpowers when handled wisely. You have a strong\nsense of self, which enables you to make meaningful connections and lead the way.\n");
    } else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        printf("Your zodiac sign is Aquarius.\n");
        printf("You may fall on the introvert side of the spectrum, but that doesn't mean you don't\nknow how to have fun. You have an enviable combination of intelligence and intuition,\nand you are able to identify positive opportunities even in dark times.\n");
    } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
        printf("Your zodiac sign is Pisces.\n");
        printf("You wouldn't hurt a fly! Empathy is your superpower, and you are an\nasset to any team you join or cause you support. Your gentleness is a virtue.\nHowever, be careful to not let your feelings get hurt too easily. Be sure to\nspend time building your self-confidence.\n");
    } else {
        printf("Invalid date.\n");
    }
    printf("\n\n\n\n\n\n\n***************************************************************************\n");
	printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");                                          
    printf("Do you want to continue? if yes press 1, if no press 0 to back to the menu: ");
		scanf("%i", &n);                 
	}
	while (n==1);
}
		
else if (choice==2)
{
	do
	{
	system("cls");
		printf("Kong Jr. Jerry G.");
		printf("BSIT 1-YA-1\n");
		printf("\e[1;36m\n____________________________________________________________ \n");
		printf("\e[1;36m\n             <<==================>>\n");	
		printf("\033[0;92m             ||Vowel or Consonant||");
		printf("\e[1;36m\n             <<==================>>\n");
		printf("\e[1;36m\n____________________________________________________________ \n");
	
		printf("\nEnter a character: ");
    		scanf("%s", &ch);

    // Check if the character is a vowel or a consonant
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("%c is a vowel.\n", ch);
            printf("\n\n\n\n\n\n><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>><><><><");
                                                                           } else {
            printf("%c is a consonant.\n", ch);
            printf("\n\n\n\n\n\n><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>><><><><");
                                                                                  }
                                                              } else                                            {
        printf("Invalid input. Please enter a valid alphabet.\n");
        printf("\n\n\n\n\n\n><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>><><><><");      }
    printf("\nDo you want to continue? if yes press 1, if no press 0 to back to the menu: ");
		scanf("%i", &m);  
	}
	while (m==1);
}
   
else if (choice==3)
{
	do
	{
	system("cls");
		printf("Kong Jr. Jerry G.");
		printf("BSIT 1-YA-1\n");
		printf("\e[1;36m\n____________________________________________________________ \n");
		printf("\e[1;36m\n                <<===============>>\n");
		printf("\033[0;93m                ||Calculate force||");
		printf("\e[1;36m\n                <<===============>>\n");
		printf("\e[1;36m\n____________________________________________________________ \n");
		// Input mass and acceleration
    printf("Enter the mass (kg): ");
    scanf("%lf", &mass);
    printf("Enter the acceleration (m/s^2): ");
    scanf("%lf", &acceleration);

    // Calculate force using Newton's second law: F = m * a
    force = mass * acceleration;

    // Output the result
    printf("Force = %.2lf N\n", force);
    printf("\n\n\n\n\n\n+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+");                              
    printf("\nDo you want to continue? if yes press 1, if no press 0 to back to the menu: ");      
		scanf("%i", &v);                                                       
    }
    while (v==1);
}
	
else if (choice==4)
{
	do
	{
	system("cls");
		printf("Kong Jr. Jerry G.");
		printf("BSIT 1-YA-1\n");
		printf("\e[1;36m\n____________________________________________________________ \n");
		printf("\e[1;36m\n                     <<===========>>\n");
		printf("\033[0;94m                     ||Philosopher||");
		printf("\e[1;36m\n                     <<===========>>\n");
		printf("\e[1;36m\n____________________________________________________________ \n");
		// Prompt user to enter a number
    printf("Enter a number to learn about a philosopher (1-10): ");
    scanf("%d", &philosopherNumber);

    // Display philosopher and description based on the entered number
    switch (philosopherNumber) {
        case 1:
            printf("Socrates\n");
			 printf("Ancient Greek philosopher and founder of the Socratic method.\nKnown for contributions to ethics and as a teacher of Plato.\n");
            break;
        case 2:
            printf("Aristotle\n");
			printf("Student of Plato and tutor to Alexander the Great.\nMade profound contributions to metaphysics, ethics, politics, and natural sciences.\n");
            break;
        case 3:
            printf("Plato\n");
			printf("Disciple of Socrates and teacher of Aristotle. Philosophical works,\nincluding 'The Republic,' explore justice, knowledge, and reality through dialogues.\n");
            break;
        case 4:
            printf("Immanuel Kant\n");
			printf("Leading figure in the Enlightenment. Influential works like\n'Critique of Pure Reason' laid the foundation for modern philosophy.\n");
            break;
        case 5:
            printf("David Hume\n");
			printf("Scottish Enlightenment philosopher. Empiricism challenged traditional philosophy,\nquestioning causation and advocating for an empirical approach to understanding human nature.\n");
            break;
        case 6:
            printf("John Locke\n");
			printf("Enlightenment thinker and empiricist. Ideas on natural rights\nand the social contract greatly influenced political philosophy.\n");
            break;
        case 7:
            printf("Martin Heidegger\n");
			printf("German existentialist philosopher. Works, including 'Being and Time,'\ndelve into ontology and phenomenology, impacting existentialist thought.\n");
            break;
        case 8:
            printf("Sigmund Freud\n");
			printf("Founder of psychoanalysis. Theories on the unconscious mind\nand psychosexual development revolutionized psychology.\n");
            break;
        case 9:
            printf("Rene Descartes\n");
			printf("French philosopher and mathematician. Known for Cartesian\ndualism and 'Cogito, ergo sum' ('I think, therefore I am').\n");
            break;
        case 10:
            printf("Paul Churchland\n");
			printf("Contemporary philosopher in philosophy of mind and neuroscience.\nExplores the relationship between the brain and consciousness.\n");
            break;
        default:
            printf("Invalid philosopher number. Please enter a number between 1 and 10.\n");
            break;
    }
	printf("\n\n\n\n\n\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");												                                                
    printf("\nDo you want to continue? if yes press 1, if no press 0 to back to the menu: ");      
		scanf("%i", &z);                                                
	}
	while (z==1);
}
	
else if (choice==5)
{
	do
	{
	system("cls");
		printf("Kong Jr. Jerry G.");
		printf("BSIT 1-YA-1\n");
		printf("\e[1;36m\n_________________________________________________ \n");
		printf("\e[1;36m\n             <<==========>>\n");
		printf("\033[0;95m             ||Calculator||");
		printf("\e[1;36m\n             <<==========>>\n");
		printf("\e[1;36m\n_________________________________________________ \n");
		printf("\nEnter an operator (+, -, *, /): ");
    scanf(" %c", &O);

    // Get user input for the two numbers
    printf("Enter the first number: ");
    scanf("%lf", &NUMBER10);

    printf("Enter the second number: ");
    scanf("%lf", &NUMBER20);

    // Perform the calculation based on the operator
    switch (O) {
        case '+':
            result = NUMBER10 + NUMBER20	;
            printf("Result: %.2lf + %.2lf = %.2lf\n", NUMBER10, NUMBER20, result);
            break;
        case '-':
            result = NUMBER10 - NUMBER20;
            printf("Result: %.2lf - %.2lf = %.2lf\n", NUMBER10, NUMBER20, result);
            break;
        case '*':
            result = NUMBER10 * NUMBER20;
            printf("Result: %.2lf * %.2lf = %.2lf\n", NUMBER10, NUMBER20, result);
            break;
        case '/':
            if (NUMBER20 != 0) {
                result = NUMBER10 / NUMBER20;
                printf("Result: %.2lf / %.2lf = %.2lf\n", NUMBER10, NUMBER20, result);
                           } else {
                printf("Error: Division by zero is undefined.\n");
                                  }
            break;
        default:
            printf("Error: Invalid operator entered.\n");
               }
    printf("\n\n\n\n\n\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *");
	printf("\n|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|");           
    printf("\nDo you want to continue? if yes press 1, if no press 0 to back to the menu: ");
		scanf("%i", &y);           
    }
    while (y==1);
}
	
else if (choice==6)
{
	do
	{
		system("cls");
		printf("Kong Jr. Jerry G.");
		printf("BSIT 1-YA-1\n");
		printf("\e[1;36m\n__________________________________________ \n");
		printf("\e[1;36m\n             <<=====>>\n");
		printf("\033[0;96m             ||Cirle||");
		printf("\e[1;36m\n             <<=====>>\n");
		printf("\e[1;36m\n__________________________________________ \n");
		printf("\nEnter the radius of the circle: ");
    		scanf("%lf", &radius);

    // Check for non-negative input
    if (radius < 0) {
        printf("Please enter a non-negative radius.\n");
         // Exit with an error code
    				}

    // Constants
     pi = 3.14159265359;

    // Calculate area and circumference
     area = pi * pow(radius, 2);
     circumference = 2 * pi * radius;

    // Display the results
    printf("Area of the circle: %.2lf\n", area);
    printf("Circumference of the circle: %.2lf\n", circumference);
    
    printf("\n\n\n\n\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"); 
	printf("\n|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");                              
    printf("\nDo you want to continue? if yes press 1, if no press 0 to back to the menu: ");      
		scanf("%i", &u);
		if (u==1){
			continue;
		}
	}
	while (u==1);
}
	
else if (choice==7)
{
	do
	{	
	system("cls");
		printf("Kong Jr. Jerry G.");
		printf("BSIT 1-YA-1\n");
		printf("\e[1;36m\n________________________________________________________ \n");
		printf("\e[1;36m\n             <<===================>>\n");
		printf("\033[0;91m             ||Pythagorean theorem||");
		printf("\e[1;36m\n             <<===================>>\n");
		printf("\e[1;36m\n________________________________________________________ \n");
		printf("\nEnter the length of side 'a': ");
    		scanf("%lf", &a);

    	printf("Enter the length of side 'b': ");
    		scanf("%lf", &b);

    // Calculate the length of the hypotenuse (c) using the Pythagorean theorem
    		c = sqrt(a * a + b * b);

    // Display the result
   		 printf("The length of the hypotenuse is: %.2lf\n", c);
   	printf("\n\n\n\n\n\n\n***************************************************************************\n");
	printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");	 
   	printf("\nDo you want to continue? if yes press 1, if no press 0 to back to the menu: ");
		scanf("%i", &h);	 
   	}
   	while (h==1);
}
  
else if (choice==8)
{
	do
	{
	system("cls");
		printf("Kong Jr. Jerry G.");
		printf("BSIT 1-YA-1\n");
		printf("\e[1;36m\n________________________________________________________ \n");
		printf("\e[1;36m\n             <<==============>>\n");
		printf("\033[0;92m             ||Class Schedule||");
		printf("\e[1;36m\n             <<==============>>\n");
		printf("\e[1;36m\n________________________________________________________ \n");
		printf("\nChoose a subject:\n");
    printf("1. FOPR\n");
    printf("2. ENGLISH\n");
    printf("3. ICOM\n");
    printf("4. PCAS\n");
    printf("5. VRTS\n");
    printf("6. UNDS\n");
    printf("7. STS\n");
    printf("8. TCWD\n");

    // Get user input for the choice of subject
    printf("Enter the number corresponding to your choice: ");
    scanf("%d", &choice);

    // Display the chosen subject
    switch (choice) {
        case 1:
            printf("You chose FOPR, face to face class, tuesday 8:00am to 1:00pm.\n");
            printf("Mr. Arfel Aguilar\n");
            break;
        case 2:
            printf("You chose ENGLISH, face to face class, tuesday 1:30pm to 4:30pm.\n");
            printf("Mr. Joselito Roberto\n");
            break;
        case 3:
            printf("You chose ICOM, face to face class, thursday 8:00am to 1:00pm.\n");
            printf("Mr. Jesus Calma\n");
            break;
        case 4:
            printf("You chose PCAS, face to face class, thursday 1:30pm to 4:30pm.\n");
            printf("Mr. Arfel Aguilar\n");
            break;
        case 5:
            printf("You chose VRTS, online class, friday 9:00am to 10:00am.\n");
            printf("Ms. Abby Cruz Batica\n");
            break;
        case 6:
            printf("You chose UNDS, online class, friday 10:30am to 11:30am.\n");
            printf("Dr. Ronan Estoque\n");
            break;
        case 7:
            printf("You chose STS, online class, friday 1:30pm to 4:30pm.\n");
            printf("Ms. Carmelita Palaganas\n");
            break;
        case 8:
            printf("You chose TCWD, online class, friday 4:50pm to 6:00pm.\n");
            printf("Ms. Nickola Delmonte\n");
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 8.\n");
                    }
    printf("\n\n\n\n\n\n\n<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>");
	printf("\n><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><");               
    printf("\nDo you want to continue? if yes press 1, if no press 0 to back to the menu: ");
		scanf("%i", &j);                
    }
    while (j==1);
}
	
else if (choice==9)
{
	do
	{
	system("cls");
		printf("Kong Jr. Jerry G.");
		printf("BSIT 1-YA-1\n");
		printf("\e[1;36m\n________________________________________________ \n");
		printf("\e[1;36m\n             <<========>>\n");
		printf("\033[0;93m             ||Alphabet||");
		printf("\e[1;36m\n             <<========>>\n");
		printf("\e[1;36m\n________________________________________________ \n");
	printf("\n A    K    S\n ");
    printf("B    L    T\n ");
    printf("C    M    U\n");
    printf(" D    N    V\n ");
    printf("F    O    W\n ");
    printf("G    P    X\n ");
    printf("H    Q    Y\n ");
    printf("I    R    Z\n ");
    printf("J\n");
    printf("Choose a Letter: ");
    scanf(" %c", &input);

    // Convert to uppercase for simplicity
    input = toupper(input);

    // Check if the input is a valid uppercase letter
    if (input >= 'A' && input <= 'Z') {
        switch (input) {
            case 'A':
                printf("%c - Array\n", input);
                printf("An array is like a group of variables that have the same name and type.\nUse the name and an integer index to access one of the variables.\nAn array is very useful, especially when paired with a for loop.");
                break;
            case 'B':
                printf("%c - Binary\n", input);
                printf("Computers speak binary, or 0s and 1s, because of hardware.\nComputer registers have gates that store either 0 or 1.\nThis is programming at the lowest level, and all programming languages build on this.");
                break;
            case 'C':
                printf("%c - Continue\n", input);
                printf("The continue statement alters the flow of execution in a loop.\nIt skips any remaining statements in the loop and immediately goes back to the top.");
                break;
			case 'D':
                printf("%c - Data\n", input);
                printf("Programs process data. Data may come from the user, a file, variables,\nor other input source. And there are various types of data.");
                break;
			case 'E':
                printf("%c - Equality\n", input);
                printf("The equality operation checks if two operands are equal.\nThe result is a Boolean true/false value. There are different ways to test for equality.\nOne common equality operator is ==.");
                break;
			case 'F':
                printf("%c - For\n", input);
                printf("The for loop is a repetition structure that repeats statements.\nfor loops are useful when working with numeric sequences.");
                break;
			case 'G':
                printf("%c - Goto\n", input);
                printf("In BASIC programming, the Goto statement jumps to another line in the program\nand continues execution from there. Using Goto statements is considered a bad practice,\nbecause it makes code difficult to understand, modify, and debug.");
                break;
			case 'H':
                printf("%c - HashMap\n", input);
                printf("In Java, the HashMap class is a data structure that stores key-value pairs.\nEach key is unique. There are convenient methods to view and manipulate HashMap objects.");
                break;
			case 'I':
                printf("%c - Integer\n", input);
                printf("The integer data type represents numbers that do not have decimal places.\nInteger values may be positive, negative, or 0.");
                break;
			case 'J':
                printf("%c - Join\n", input);
                printf("In relational databases like MySQL or PostgreSQL, the JOIN command\njoins records from two tables based on related columns.");
                break;
			case 'K':
                printf("%c - Kill\n", input);
                printf("Use the bash kill command to terminate a process.\nThis is useful when you need to terminate a program that will not stop on its own.");
                break;
			case 'L':
                printf("%c - List\n", input);
                printf("In Python, the list data structure is the built-in version of an array.\nIt has similar behaviors, with its own set of convenient methods.");
                break;
			case 'M':
                printf("%c - Modulus\n", input);
                printf("The modulus operation calculates the remainder when dividing two numbers.\nIn many languages, the modulus operator is Percent. For example, the result of 5 Percent 2 is 1.");
                break;
			case 'N':
                printf("%c - New\n", input);
                printf("In Java, use the new keyword to create an object.\nIn C++, new dynamically allocates memory in general.");
                break;
			case 'O':
                printf("%c - Operators\n", input);
                printf("Operators operate on data to create new data.Some common arithmetic operators are\nmultiply *, divide /, add +, and subtract -. There are operators for other data types and operations.");
                break;
            case 'P':
                printf("%c - Printf\n", input);
                printf("In Dev C++, printf is a standard C library function used for formatted output\nto the console, allowing the display of text and variable values with specified formatting\nin C++ programs. for example printf('Cute si sir Arfel Aguilar.').");
                break;
            case 'Q':
                printf("%c - Queue\n", input);
                printf("A queue is a data structure that stores elements sequentially.\nQueues are first in, first out (FIFO). In other words, the first\nelement added to the queue is the first element that is processed.");
                break;
            case 'R':
                printf("%c - Return\n", input);
                printf("The return statement is a way to return from a procedure or function.\nA return statement can return a value.");
                break;
            case 'S':
                printf("%c - Stack\n", input);
                printf("The stack is a cousin of the queue. But a stack stores elements in last in,\nfirst out (LIFO) order. The last element added is the first one that is processed.");
                break;
            case 'T':
                printf("%c - Testing\n", input);
                printf("Testing is a phase of program development where you verify and validate the correctness of your program.");
                break;
            case 'U':
                printf("%c - Unicode\n", input);
                printf("Unicode is an international coding standard that assigns a numeric value to each character or symbol.\nPrograms can leverage this encoding scheme. The Java programming language supports Unicode.");
                break;
            case 'V':
                printf("%c - Vector\n", input);
                printf("In Java, the Vector class is like the array structure, except that it can increase in size dynamically.");
                break;
            case 'W':
                printf("%c - While\n", input);
                printf("The while loop is a programming construct that repeats its statements while a condition is true.\nIt has more flexibility than a for loop, since its condition can implement a variety of scenarios.");
                break;
            case 'X':
                printf("%c - XOR\n", input);
                printf("Exclusive-OR, or XOR, is a logical operator that returns true if exactly one of its operands is true.\nOtherwise, it returns false. In Java, the XOR operator is ^. For example, true ^ true returns false and false ^ true returns true.");
                break;
            case 'Y':
                printf("%c - Yield\n", input);
                printf("The yield statement in Python lets you iterate over a sequence of values by returning a generator from a function.\nThis avoids having to store the entire sequence in memory and returning it all at once.");
                break;
            case 'Z':
                printf("%c - Zeros\n", input);
                printf("The Python numpy function zeros returns a new array that is filled with zeros.");
                break;
            default:
                printf("Unexpected input.\n");
                break;
                        }
                                      } else {
        printf("Invalid input. Please enter a valid uppercase letter.\n");
                                             }
    printf("\n\n\n\n\n\n\n___________________________________________________________________________\n");
	printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");                                         
    printf("\nDo you want to continue? if yes press 1, if no press 0 to back to the menu: ");
		scanf("%i", &k);                                          
    }
    while (k==1);
}
	
else if (choice==10)
{
	do
	{
	system("cls");	
		printf("Kong Jr. Jerry G.");
		printf("BSIT 1-YA-1\n");
		printf("\e[1;36m\n________________________________________________ \n");
		printf("\e[1;36m\n                   <<=====>>\n");	
		printf("\033[0;94m                   ||Store||");
		printf("\e[1;36m\n                   <<=====>>\n");
		printf("\e[1;36m\n________________________________________________ \n");
	printf("\nEnter the amount of money you have: ");
    scanf("%d", &money);

    do {
        // Display menu
        
        printf("\n       ^^Menu^^:\n");
        printf("A - Egg: P%d\n", eggPrice);
        printf("B - Coffee: P%d\n", coffeePrice);
        printf("C - Milk: P%d\n", milkPrice);
        printf("D - Milo: P%d\n", miloPrice);
        printf("E - Rice: P%d\n", ricePrice);
        printf("F - Water: P%d\n", waterPrice);
        printf("G - Junk Foods: P%d\n", junkFoodsPrice);
        printf("H - Ice: P%d\n", icePrice);
        printf("I - Candy: P%d\n", candyPrice);
        printf("J - Sugar: P%d\n", sugarPrice);
        printf("K - Canned Goods: P%d\n", cannedGoodsPrice);
        printf("X - Finish buying\n");
		
        // Get user's choice
        printf("Enter your choice: ");
        scanf(" %c", &choice);
		
        // Process user's choice
        switch (choice) {
            case 'A':
                totalCost += eggPrice;
                strcat(itemsBought, "Egg = P10, ");
                break;
            case 'B':
                totalCost += coffeePrice;
                strcat(itemsBought, "Coffee = P8, ");
                break;
            case 'C':
                totalCost += milkPrice;
                strcat(itemsBought, "Milk = P12, ");
                break;
            case 'D':
                totalCost += miloPrice;
                strcat(itemsBought, "Milo = P10, ");
                break;
            case 'E':
                totalCost += ricePrice;
                strcat(itemsBought, "Rice = P50, ");
                break;
            case 'F':
                totalCost += waterPrice;
                strcat(itemsBought, "Water = P15, ");
                break;
            case 'G':
                totalCost += junkFoodsPrice;
                strcat(itemsBought, "Junk Foods = P10, ");
                break;
            case 'H':
                totalCost += icePrice;
                strcat(itemsBought, "Ice = P5, ");
                break;
            case 'I':
                totalCost += candyPrice;
                strcat(itemsBought, "Candy = P2, ");
                break;
            case 'J':
                totalCost += sugarPrice;
                strcat(itemsBought, "Sugar = P30, ");
                break;
            case 'K':
                totalCost += cannedGoodsPrice;
                strcat(itemsBought, "Canned Goods = P25, ");
                break;
            case 'X':
                break; // Exit the loop
            default:
                printf("Invalid choice. Please try again.\n");
        }
        // Check if the user has enough money
        if (totalCost > money) {
            printf("Your money is not enough. Please purchase again.\n");
            totalCost = 0;  // Reset totalCost to avoid negative values
                               }             

    } while (choice != 'X');

    // Print receipt if the user has enough money
    if (totalCost <= money) {
        printf("\n       ^^Receipt^^:\n");
        printf("Items Bought: %s\n", itemsBought);
        printf("Total cost: P%d\n", totalCost);
        printf("Remaining money: P%d\n", money - totalCost);
        totalCost = 0;
        itemsBought[0] = '\0';
                            }	
	printf("\n\n\n\n\n\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");	
    printf("\nDo you want to continue? if yes press 1, if no press 0 to back to the menu: ");
		scanf("%i", &l);                                     
	}
	while (l==1);		
}

if (choice == 0) {
			system("cls");
			printf("\033[1;93m+*+*+*+*+*+*+*+*+*+*+*+*+*+\n");
            printf("        Thank you!\n");
            printf("+*+*+*+*+*+*+*+*+*+*+*+*+*+\n");
            printf("|(·_·)\n");
            printf("  ))Z\n");
            printf("  || ");
            break; // Exit the loop
                  }
    }
	while (l==0);
                                	
}



