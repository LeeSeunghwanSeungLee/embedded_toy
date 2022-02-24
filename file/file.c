#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main() {
	int fd;
	//fd = open("./test.txt", O_CREAT | O_RDWR);
	fd = open("/dev/ttyUSB0", O_CREAT | O_RDWR);
	char buff[100] = "";
	//write(fd, buff, 5);
	//read(fd, buff, 8);

	//printf("%s\n", buff);
	while(1) {
		read(fd, buff, 8);
		printf("%s\n", buff);
	}
	close(fd);
	return 0;
}
