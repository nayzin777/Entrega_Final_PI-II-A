#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   system("mosquitto_pub -h broker.emqx.io -t pi2anaydson/comandos -m /nomes");
}
