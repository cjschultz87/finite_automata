#include <time.h>
#include <array.h>
#include <strings.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>



typedef struct playerStats
{
	int power;
	int defence;
	int health;
} playerStats;

typedef struct adversaryStats
{
	int power;
	int defence;
	int health;
} adversaryStats;



typedef struct cardStats
{
	int power;
	int health;
	int description;
} cardStats;



	cardStats aicrack = {5, 2, 0}; //aircrack
	
	cardStats hashtable = {7, 3, 1}; //hashtable
	
	cardStats firewall = {0, 7, 2}; //firewall
	
	cardStats helloscript = {1, 1, 3}; //helloscript
	
	cardStats artemis = {2, 1, 4}; //artemis
	
	cardStats pegasus = {9, 5, 5}; //pegasus
	
	cardStats metasploit = {5, 5, 6}; //metasploit
	


void blank1()
{
	int c;
	
	putc(c, stdin);
	
	if(getc(stdin))
	{
	
	}
}


int dice(int diceVal, int min, clock_t clockVal)
{		
	int sideVal = min + (clockVal % (diceVal - min + 1));
	
	return sideVal;
}

int max(int argN, ...)
{
	int k0, k1, L;
	
	va_list VL;
	
	va_start(VL, argN);
	
	k0 = argN;
	
	k1 = va_arg(VL, int);
	
	vStart:{};
	
	if (k0 > k1)
	{
		L = k0;
	}
	else
	{
		L = k1;
	}
	
	k0 = L;

	k1 = va_arg(VL, int);
	
	if (k1 == NULL)
	{
		goto vEnd;
	}
	else
	{
		goto vStart;
	}
	
	vEnd:{};
	
	va_end(VL);
	
	return L;	
}




int cards(playerStats player, adversaryStats adversary, cardStats* playerDeck, cardStats* adversaryDeck, int pd, int ad)
{

	cardStats playerHand[2];
	
	cardStats adversaryHand[2];
	
	int attack = 1;

	
	BEGINPHASE:{};
	
	int c;
	
	printf("\x1B[1;1H\x1B[2J");
	
	playerHand[0] = playerDeck[dice(pd, 1, clock())];
	
	playerHand[1] = playerDeck[dice(pd, 1, clock())];
	
	adversaryHand[0] = playerDeck[dice(ad, 1, clock())];
	
	adversaryHand[1] = playerDeck[dice(ad, 1, clock())];
	
	printf("\nplayer cards = %d/%d, %d/%d", playerHand[0].power, playerHand[0].health, playerHand[1].power, playerHand[1].health);
	printf("\nplayer health = %d", player.health);
	printf("\nplayer power = %d", player.power);
	printf("\nplayer defence = %d", player.defence);
	printf("\n");
	printf("\nadversary cards = %d/%d, %d/%d", adversaryHand[0].power, adversaryHand[0].health, adversaryHand[1].power, adversaryHand[1].health);
	printf("\nadversary health = %d", adversary.health);
	printf("\nadversary power = %d", adversary.power);
	printf("\nadversary defence = %d", adversary.defence);
		
	if (attack == 0)
	{
		printf("\n\nDEFENCE\n");
		
		putc(c, stdin);
		
		switch(getc(stdin))
		{
			case 'q':
				if (max(adversaryHand[0].power, adversaryHand[1].power) == adversaryHand[0].power)
				{
					if (max(playerHand[0].power, playerHand[1].power) == playerHand[0].power)
					{
						playerHand[0].health -= adversaryHand[0].power * adversary.power / player.defence;
						
						playerHand[1].health -= adversaryHand[1].power * adversary.power / player.defence;
						
						adversaryHand[0].health -= playerHand[0].power * player.power / adversary.defence;
						
						adversaryHand[1].health -= playerHand[1].power * player.power / adversary.defence;
						
					}
					else
					{
						playerHand[1].health -= adversaryHand[0].power * adversary.power / player.defence;
						
						playerHand[0].health -= adversaryHand[1].power * adversary.power / player.defence;
						
						adversaryHand[1].health -= playerHand[0].power * player.power / adversary.defence;
						
						adversaryHand[0].health -= playerHand[1].power * player.power / adversary.defence;
						
					}
				}
				else
				{
					if (max(playerHand[0].power, playerHand[1].power) == playerHand[0].power)
					{
						playerHand[1].health -= adversaryHand[0].power * adversary.power / player.defence;
						
						playerHand[0].health -= adversaryHand[1].power * adversary.power / player.defence;
						
						adversaryHand[1].health -= playerHand[0].power * player.power / adversary.defence;
						
						adversaryHand[0].health -= playerHand[1].power * player.power / adversary.defence;

					}
					else
					{
						playerHand[0].health -= adversaryHand[0].power * adversary.power / player.defence;
						
						playerHand[1].health -= adversaryHand[1].power * adversary.power / player.defence;
						
						adversaryHand[0].health -= playerHand[0].power * player.power / adversary.defence;
						
						adversaryHand[1].health -= playerHand[1].power * player.power / adversary.defence;
					}
				}
				
				if (playerHand[0].health < 0)
				{
					player.health += playerHand[0].health;
				}
				
				if (playerHand[1].health < 0)
				{
					player.health += playerHand[1].health;
				}
				
				if (adversaryHand[0].health < 0)
				{
					adversary.health += adversaryHand[0].health;
				}
				
				if (adversaryHand[1].health < 0)
				{
					adversary.health += adversaryHand[1].health;
				}
				
				goto endcase;
				
					
			case 'a':
				player.health -= (adversaryHand[0].power + adversaryHand[1].power) * adversary.power / player.defence;
				
				adversary.health -= (playerHand[0].power + playerHand[1].power) * player.power / adversary.defence;
				
				goto endcase;
				
		}
	}
	if (attack == 1)
	{
		printf("\n\nDRAW\n");
		
		putc(c, stdin);
		
		switch(getc(stdin))
		{
			case 'q':
				player.health -= (playerHand[0].power - playerHand[0].health) + (playerHand[1].power - playerHand[1].health);
				
				goto endcase;
				
			case 'a':
				if (max(adversaryHand[0].power, adversaryHand[1].power) == adversaryHand[0].power)
				{
					if (max(adversaryHand[0].power, adversaryHand[1].power) == adversaryHand[0].power)
					{
						adversaryHand[0].health -= playerHand[0].power * player.power / adversary.defence;
						
						adversaryHand[1].health -= playerHand[1].power * player.power / adversary.defence;
						
						playerHand[0].health -= adversaryHand[0].power * adversary.power / player.defence;
						
						playerHand[1].health -= adversaryHand[1].power * adversary.power / player.defence;
						
					}
					else
					{
						adversaryHand[1].health -= playerHand[0].power * player.power / adversary.defence;
						
						adversaryHand[0].health -= playerHand[1].power * player.power / adversary.defence;
						
						playerHand[1].health -= adversaryHand[0].power * adversary.power / player.defence;
						
						playerHand[0].health -= adversaryHand[1].power * adversary.power / player.defence;
						
					}
				}
				else
				{
					if (max(adversaryHand[0].power, adversaryHand[1].power) == adversaryHand[0].power)
					{
						adversaryHand[1].health -= playerHand[0].power * player.power / adversary.defence;
						
						adversaryHand[0].health -= playerHand[1].power * player.power / adversary.defence;
						
						playerHand[1].health -= adversaryHand[0].power * adversary.power / player.defence;
						
						playerHand[0].health -= adversaryHand[1].power * adversary.power / player.defence;

					}
					else
					{
						adversaryHand[0].health -= playerHand[0].power * player.power / adversary.defence;
						
						adversaryHand[1].health -= playerHand[1].power * player.power / adversary.defence;
						
						playerHand[0].health -= adversaryHand[0].power * adversary.power / player.defence;
						
						playerHand[1].health -= adversaryHand[1].power * adversary.power / player.defence;
					}
				}
				
				if (adversaryHand[0].health < 0)
				{
					adversary.health += adversaryHand[0].health;
				}
				
				if (adversaryHand[1].health < 0)
				{
					adversary.health += adversaryHand[1].health;
				}
				
				if (playerHand[0].health < 0)
				{
					player.health += playerHand[0].health;
				}
				
				if (playerHand[1].health < 0)
				{
					player.health += playerHand[1].health;
				}
				
				goto endcase;
				
		}
	}
	
	endcase:{};
	
	if (player.health > adversary.health)
	{
		attack = 1;
	}
	else
	{
		attack = 0;
	}
	
	if (player.health > 0 & adversary.health > 0)
	{
		goto BEGINPHASE;
	}
	else
	{
		goto endcondition;
	}
	
	
	
	
	endcondition:{};
	
	if (player.health > adversary.health)
	{
		printf("\nVICTORY\n");
		blank1();
		return 0;
	}
	if (player.health == adversary.health)
	{
		printf("\nNO VICTORY\n");
		blank1();
		return 1;
	}
	if (player.health < adversary.health)
	{
		printf("\nANNIHILATED\n");
		blank1();
		return 2;
	}
		
	
}
