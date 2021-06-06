#include <unistd.h>
#include <windows.h>
#include <conio.h>
#include <iostream>
#include <time.h>
#include "game.h"


using namespace std;

void game::welcome()
{
	int i;
	for(i=0;i<8;i++)
	{
		sleep(1);
		system("cls");
		SetColor(i);

		cout<<"                                     ##   ##   ##   ## ####### ##        ######   ######  ###     ### #######                           "<<endl;
		cout<<"                                      ##   ## ##   ##  ##      ##       ##       ##    ## ####   #### ##                                "<<endl;
		cout<<"                                       ##   ##    ##   ####    ##       ##       ##    ## ##  ###  ## #####                             "<<endl;
		cout<<"                                        ## ## ## ##    ##      ##       ##       ##    ## ##       ## ##                                "<<endl;
		cout<<"                                         ##     ##     ####### #######   ######   ######  ##       ## #######                           "<<endl;
		cout<<"                                                                                                                                        "<<endl;
		cout<<"                                                                                                                                        "<<endl;
		cout<<"                                                              ##########   ######                                                       "<<endl;
		cout<<"                                                                  ##      ##    ##                                                      "<<endl;
		cout<<"                                                                  ##      ##    ##                                                      "<<endl;
		cout<<"                                                                  ##      ##    ##                                                      "<<endl;
		cout<<"                                                                  ##       ######                                                       "<<endl;
		cout<<"                                                                                                                                        "<<endl;
		cout<<"                                                                                                                                        "<<endl;
		cout<<"                 ######   ######    ######   ######## #######  ######  ##########              ######## ##  ######  ##   ## ##########  "<<endl;
		cout<<"                 ##   ##  ##   ##  ##    ##     ##    ##      ##    ##     ##                  ##       ## ##       ##   ##     ##      "<<endl;
		cout<<"                 ######   ######   ##    ##     ##    #####   ##           ##                  ######   ## ##  ###  #######     ##      "<<endl;
		cout<<"                 ##       ##  ##   ##    ##  ## ##    ##      ##    ##     ##                  ##       ## ##    ## ##   ##     ##      "<<endl;
		cout<<"                 ##       ##   ##   ######     ##     #######  ######      ##                  ##       ##  ######  ##   ##     ##      "<<endl;
		SetColor(15);
	}
}





void game::gameover()
{
	SetColor(4);

	cout<<"                                                   "<<endl;
	cout<<"     #######    #######  ####       #### ######### "<<endl;
	cout<<"   ##       #  ##     ## ## ##     ## ## ##        "<<endl;
	cout<<"   ##          ##     ## ##  ##   ##  ## ##        "<<endl;
	cout<<"   ##   #####  ######### ##   ## ##   ## #######   "<<endl;
	cout<<"   ##       #  ##     ## ##    ###    ## ##        "<<endl;
	cout<<"   ##       #  ##     ## ##           ## ##        "<<endl;
	cout<<"    ########   ##     ## ##           ## ######### "<<endl;
	cout<<"                                                   "<<endl;
	cout<<"    ########  ##           ## ######### ########   "<<endl;
	cout<<"   ##      ##  ##         ##  ##        ##     ##  "<<endl;
	cout<<"   ##      ##   ##       ##   ##        ##     ##  "<<endl;
	cout<<"   ##      ##    ##     ##    #######   ########   "<<endl;
	cout<<"   ##      ##     ##   ##     ##        ##    ##   "<<endl;
	cout<<"   ##      ##      ## ##      ##        ##     ##  "<<endl;
	cout<<"    ########        ###       ######### ##      ## "<<endl;
	cout<<"                                                   "<<endl;
	cout<<"                                                   "<<endl;

	SetColor(15);
}





void game::errore()
{
	cout<<"                                                                                                                                                                        "<<endl;
	cout<<" ##### ####  ####   ###  ####  #####  ##   #       #  ###  #      ###  ####  #####    ##    #   ###  ##    #   #       #  ###  #     # ####   ###                  "<<endl;
	cout<<" #     #   # #   # #   # #   # #      ##    #     #  #   # #     #   # #   # #        # #   #  #   # # #   #    #     #  #   # #     # #   # #   #                 "<<endl;
	cout<<" ####  ####  ####  #   # ####  ####   ##     #   #   #   # #     #   # ####  ####     #  #  #  #   # #  #  #     #   #   #   # #     # #   # #   #                 "<<endl;
	cout<<" #     #  #  #  #  #   # #  #  #              # #    ##### #     #   # #  #  #        #   # #  #   # #   # #      # #    ##### #     # #   # #   #                 "<<endl;
	cout<<" ##### #   # #   #  ###  #   # #####  ##       #     #   # #####  ###  #   # #####    #    ##   ###  #    ##       #     #   # ##### # ####   ###                  "<<endl;
	cout<<"                                                                                                                                                                        "<<endl;
	cout<<"                                                                                                                                                                        "<<endl;
	cout<<"                                                                                                                                                                        "<<endl;
}





void game::pareggio()
{
	cout<<"                                                                                                                                             "<<endl;
	cout<<" ##    ##    ######    ##      #######     ######    #######   #########   ########     ########   ##    ######   ##########    ########     "<<endl;
	cout<<" ##    ##   ##    ##   ##      ##    ##   ##    ##   ##    ##  ##         ##      ##   ##      ##  ##   ##    ##      ##       ##      ##    "<<endl;
	cout<<" ##    ##  ##      ##  ##      ##    ##  ##      ##  ##    ##  ##        ##           ##           ##  ##      ##     ##      ##        ##   "<<endl;
	cout<<" ########  ##########  ##      #######   ##########  #######   ######    ##    ####   ##     ####  ##  ##########     ##      ##        ##   "<<endl;
	cout<<" ##    ##  ##      ##  ##      ##        ##      ##  ##  ##    ##        ##       ##  ##        ## ##  ##      ##     ##      ##        ##   "<<endl;
	cout<<" ##    ##  ##      ##  ##      ##        ##      ##  ##   ##   ##         ##     ##    ##      ##  ##  ##      ##     ##       ##      ##    "<<endl;
	cout<<" ##    ##  ##      ##  ##      ##        ##      ##  ##    ##  #########   #######      ########   ##  ##      ##     ##        ########     "<<endl;
	cout<<"  	                                                                                                                                        "<<endl;
}





void game::roundperso()
{
	SetColor(12);

	cout<<"                                                                                                                                                                        "<<endl;
	cout<<"  ##    ##    ######    ##    #######  ######### #######    ######    ######       ## ##          #######     ########   ##       ## ###       ## ########   "<<endl;
	cout<<"  ##    ##   ##    ##   ##    ##    ## ##        ##    ##  ##    ##  ##    ##      ## ##          ##    ##   ##      ##  ##       ## ## ##     ## ##     ##  "<<endl;
	cout<<"  ##    ##  ##      ##  ##    ##    ## ##        ##    ##  ##        ##    ##      ## ##          ##    ##  ##        ## ##       ## ##  ##    ## ##      ## "<<endl;
	cout<<"  ########  ##########  ##    #######  #######   #######    ######   ##    ##      ## ##          #######   ##        ## ##       ## ##   ##   ## ##      ## "<<endl;
	cout<<"  ##    ##  ##      ##  ##    ##       ##        ##  ##          ##  ##    ##      ## ##          ##   ##   ##        ## ##       ## ##    ##  ## ##      ## "<<endl;
	cout<<"  ##    ##  ##      ##  ##    ##       ##        ##   ##   ##    ##  ##    ##      ## ##          ##    ##   ##      ##   ##     ##  ##     ## ## ##     ##  "<<endl;
	cout<<"  ##    ##  ##      ##  ##    ##       ######### ##    ##   ######    ######       ## #######     ##     ##   ########     #######   ##       ### ########   "<<endl;
	cout<<"                                                                                                                                                                            "<<endl;
	SetColor(15);
}





void game::roundvinto()
{
	SetColor(2);

	cout<<"                                                                                                                                                                        "<<endl;
	cout<<" ##    ##    ######    ##     ##           ## ## ###       ## ############   ########        ## ##          #######     ########   ##       ## ###       ## ########   "<<endl;
	cout<<" ##    ##   ##    ##   ##      ##         ##  ## ## ##     ##      ##       ##      ##       ## ##          ##    ##   ##      ##  ##       ## ## ##     ## ##     ##  "<<endl;
	cout<<" ##    ##  ##      ##  ##       ##       ##   ## ##  ##    ##      ##      ##        ##      ## ##          ##    ##  ##        ## ##       ## ##  ##    ## ##      ## "<<endl;
	cout<<" ########  ##########  ##        ##     ##    ## ##   ##   ##      ##      ##        ##      ## ##          #######   ##        ## ##       ## ##   ##   ## ##      ## "<<endl;
	cout<<" ##    ##  ##      ##  ##         ##   ##     ## ##    ##  ##      ##      ##        ##      ## ##          ##   ##   ##        ## ##       ## ##    ##  ## ##      ## "<<endl;
	cout<<" ##    ##  ##      ##  ##          ## ##      ## ##     ## ##      ##       ##      ##       ## ##          ##    ##   ##      ##   ##     ##  ##     ## ## ##     ##  "<<endl;
	cout<<" ##    ##  ##      ##  ##           ###       ## ##       ###      ##        ########        ## #######     ##     ##   ########     #######   ##       ### ########   "<<endl;
	cout<<"                                                                                                                                                                            "<<endl;

	SetColor(15);
}





void game::haivinto()
{
	SetColor(2);

	cout<<"   ##    ##    ######    ##      ##           ## ## ###       ## ############   ########     ## ## ## "<<endl;
    cout<<"   ##    ##   ##    ##   ##       ##         ##  ## ## ##     ##      ##       ##      ##    ## ## ## "<<endl;
	cout<<"   ##    ##  ##      ##  ##        ##       ##   ## ##  ##    ##      ##      ##        ##   ## ## ## "<<endl;
	cout<<"   ########  ##########  ##         ##     ##    ## ##   ##   ##      ##      ##        ##   ## ## ## "<<endl;
	cout<<"   ##    ##  ##      ##  ##          ##   ##     ## ##    ##  ##      ##      ##        ##   ## ## ## "<<endl;
	cout<<"   ##    ##  ##      ##  ##           ## ##      ## ##     ## ##      ##       ##      ##             "<<endl;
	cout<<"   ##    ##  ##      ##  ##            ###       ## ##       ###      ##        ########     ## ## ## "<<endl;

	SetColor(15);
}








void game::miniproject()
{
	SetColor(10);
		cout<<"                                                                                     "<<endl;
		cout<<" ����  ����   ����  ������ ������  ����� �������      ������ �  ����  �   � �������  "<<endl;
		cout<<" �   � �   � �    �    �   �      �         �         �      � �      �   �    �     "<<endl;
		cout<<" ����  ����  �    �    �   ����   �         �         ����   � � ���  �����    �     "<<endl;
		cout<<" �     � �   �    �  � �   �      �         �         �      � �    � �   �    �     "<<endl;
		cout<<" �     �  �   ����   ��    ������  �����    �         �      �  ����  �   �    �     "<<endl;
		cout<<"                                                                                     "<<endl;
	SetColor(15);
}