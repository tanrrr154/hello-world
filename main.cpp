#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "MyMd5.h"

int main(int argc, char *argv[])
{
	int i;
	char encrypt[100] = "";
	unsigned char decrypt[16];
	printf("������Ҫ���ܵ��ַ�����");
	gets_s(encrypt);
	MD5_CTX md5;
	MD5Init(&md5);
	MD5Update(&md5, (unsigned char*)encrypt, strlen((char *)encrypt));
	MD5Final(&md5, decrypt);
	printf("����ǰ:%s\n���ܺ�:", encrypt);
	for (i = 0; i<16; i++)
	{
		printf("%02x", decrypt[i]);
	}

	getchar();

	return 0;
}