
	char status[20];
	int size;
} v[2] = {
	"Yankee Doodle", "Deadly", 1813,
	"Dark Avenger", "Killer", 1795};
int main()
{
	int i;
	for (i = 0; i <= 1; i++)
		printf("%s %s\n", v ->signature, v ->status);