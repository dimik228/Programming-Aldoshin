#define number 5361 

int main() {

	int first = number / 1000;
	int second  = number / 100 % 10;
	int third = number % 100 / 10;
	int fourth = number % 10;
	int sum = first + second+ third + fourth;

	return 0; 
}
