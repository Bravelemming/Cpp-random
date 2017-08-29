//input as integer, generations to calculate tribbles.



int tribbles(int generation) {
	if (generation < 2)
	{
		generation = 1;
	} 
	else if (n == 2) {
		generation = 2;
	}
	else if (n == 3) {
		generation = 4;
	}

	return tribbles(generation - 1) + tribbles(generation - 2) + tribbles(generation - 3) + tribbles(generation - 4);
}

