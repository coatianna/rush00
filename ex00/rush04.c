void ft_putchar(char c); 

void ft_print(int width, char start, char middle, char end) { // helper function to print a single line

	int letters; // variable for letters counter, to keep track of the position
	// создаем переменную и присваеваем ей 1, так как конечный поинт в width, а начального поинта для цикла нету

	if(width > 0) { 
		ft_putchar(start); // printing letter at the start

		for(letters = 1; letters < width - 1; letters++) { // 'for loop'to print middle characters; 'letters < width - 1' ensuring it stops before reaching end
			ft_putchar(middle); //printing letter in the middle
		}

		if(width > 1) {
			ft_putchar(end); // printing letter at the end
		}

		ft_putchar('\n'); // after printing all characters moving to the next line
	}

}

void rush(int x, int y) { // main function that prints the rectangle; x - width, y - height

	int length; // variable for lines length counter 
	
	if(x <= 0 || y <= 0) { // function will do nothing if x or y is less or equal to 0
		return;
	}

	ft_print(x, 'A', 'B', 'C'); // calling a function to print top line

	for(length = 1; length < y - 1; length++) { // loop continues while 'length < y - 1' to ensure it stops before reaching the last line
		ft_print(x, 'B', ' ', 'B'); //printing middle line
	}

	if(y > 1) {
		ft_print(x, 'C', 'B', 'A'); //printing bottom line
	}
}
