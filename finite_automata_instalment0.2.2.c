#include <rpg-system2.h>

#define VICTORY	0
#define NOVICT 1
#define ANNIHILATED 2



int c;

int condition0;

int violetCondition = 0;

int jackCondition = 0;
	
int naomiCondition = 0;

int leeCondition = 0;
	
	
	
int secureCoast = 0;

int secureReactors = 0;



void blank()
{
	putc(c, stdin);
	
	if(getc(stdin))
	{
	
	}
}



void main()
{
cardStats playerDeck[10];

	playerDeck[0] = artemis;
	playerDeck[1] = artemis;
	playerDeck[2] = artemis;
	playerDeck[3] = artemis;
	playerDeck[4] = metasploit;
	playerDeck[5] = aicrack;
	playerDeck[6] = aicrack;
	playerDeck[7] = aicrack;
	playerDeck[8] = firewall;
	playerDeck[9] = firewall;
	
cardStats firstDeck[5];

	firstDeck[0] = helloscript;
	firstDeck[1] = helloscript;
	firstDeck[2] = firewall;
	firstDeck[3] = firewall;
	firstDeck[4] = artemis;
	
cardStats violetDeck[15];
	
	violetDeck[0] = artemis;
	violetDeck[1] = artemis;
	violetDeck[2] = artemis;
	violetDeck[3] = artemis;
	violetDeck[4] = artemis;
	violetDeck[5] = aicrack;
	violetDeck[6] = aicrack;
	violetDeck[7] = aicrack;
	violetDeck[8] = firewall;
	violetDeck[9] = firewall;
	violetDeck[10] = firewall;
	violetDeck[11] = metasploit;
	violetDeck[12] = metasploit;
	violetDeck[13] = metasploit;
	violetDeck[14] = metasploit;
	
cardStats jackDeck[20];
	
	jackDeck[0] = artemis;
	jackDeck[1] = artemis;
	jackDeck[2] = artemis;
	jackDeck[3] = artemis;
	jackDeck[4] = artemis;
	jackDeck[5] = aicrack;
	jackDeck[6] = aicrack;
	jackDeck[7] = aicrack;
	jackDeck[8] = firewall;
	jackDeck[9] = firewall;
	jackDeck[10] = firewall;
	jackDeck[11] = metasploit;
	jackDeck[12] = metasploit;
	jackDeck[13] = metasploit;
	jackDeck[14] = metasploit;
	jackDeck[15] = metasploit;
	jackDeck[16] = metasploit;
	jackDeck[17] = pegasus;
	jackDeck[18] = pegasus;
	jackDeck[19] = firewall;
	
cardStats naomiDeck[20];
	
	naomiDeck[0] = pegasus;
	naomiDeck[1] = pegasus;
	naomiDeck[2] = pegasus;
	naomiDeck[3] = pegasus;
	naomiDeck[4] = pegasus;
	naomiDeck[5] = aicrack;
	naomiDeck[6] = aicrack;
	naomiDeck[7] = aicrack;
	naomiDeck[8] = firewall;
	naomiDeck[9] = firewall;
	naomiDeck[10] = firewall;
	naomiDeck[11] = metasploit;
	naomiDeck[12] = metasploit;
	naomiDeck[13] = metasploit;
	naomiDeck[14] = metasploit;
	naomiDeck[15] = metasploit;
	naomiDeck[16] = metasploit;
	naomiDeck[17] = pegasus;
	naomiDeck[18] = pegasus;
	naomiDeck[19] = firewall;
	
	
cardStats leeDeck[10];
	
	leeDeck[0] = pegasus;
	leeDeck[1] = pegasus;
	leeDeck[2] = pegasus;
	leeDeck[3] = metasploit;
	leeDeck[4] = metasploit;
	leeDeck[5] = aicrack;
	leeDeck[6] = aicrack;
	leeDeck[7] = aicrack;
	leeDeck[8] = firewall;
	leeDeck[9] = firewall;





	playerStats player = {10,1,1000};
	
	helloCards:{};

	printf("\x1B[1;1H\x1B[2J");
	
	printf("> Operator, welcome to Finite Automata: Instalment 0.");
	
	blank();
	
	printf("\n\n> Your goal is to play your cards well given two options: either defend or attack.\n> You are equipped each turn with two cards that have values corresponding to power and hp respectively.\n> Your adversary each turn also has two cards, and their own unique deck.\n> Make an inference and decide, but understand that when you are in an attack stance their cards' hp absorb damage.\n> You'll only deal the difference in damage.\n> Likewise, however, when you are on defence your cards hp will also absorb the adversary's damage.\n> Choosing a defensive stance while you draw on offence self-inflicts the difference of power and hp.\n> So there's a cost to always playing your cards as such.\n> Your stats, as with those of your adversary, multiply card stats by power or divide them by defence.\n> Enter q to defend.\n> Enter a to draw an attack stance.\n> Would you like to proceed (1: yes, 2: no, 3: quit)");
	
	putc(c, stdin);
	
	switch (getc(stdin))
	{
		case '1':
			goto firstAdversaryEncounter;
			
		case '2':
			goto helloCards;
			
		case '3':
			goto endoffunction;
			
		default:
			goto endoffunction;
	}
	
	
	
	firstAdversaryEncounter:{};
	
	adversaryStats firstAdversary = {10,1,500};
	
	if (cards(player, firstAdversary, playerDeck, firstDeck, 9, 5) == VICTORY)
	{		
		condition0 = 0;
	}
	else
	{		
		condition0++;
	}
	
	conditionZero:{};
	
	putc(c, stdin);
	
	if (getc(stdin))
	{
	
	}
	
	if (condition0 == 0)
	{
		printf(">Good work Operator, you did well.\n Carry on (1:yes, 2:no)");
		
		putc(c, stdin);
		
		switch (getc(stdin))
		{
			case '1':
				goto condition0_success;
				
			case '2':
				goto conditionZero;
				
			default:
				goto endoffunction;
		}
	}
	if (condition0 > 0 && condition0 <= 3)
	{		
		printf("> Operator, you didn't do so well.\n> Try again (1:yes, 2:no)");
		
		putc(c, stdin);
		
		switch(getc(stdin))
		{
			case '1':
				goto helloCards;
			
			case '2':
				goto condition0_fail;
				
			default:
				goto endoffunction;
		}
	}
	if (condition0 > 3 && condition0 < 5)
	{
		printf("> Operator, you're doing quite badly now. Try to estimate when your cards have the most power.\n> Try again (1:yes, 2:no)");
		
		putc(c, stdin);
		
		switch(getc(stdin))
		{
			case '1':
				goto helloCards;
				
			case '2':
				goto condition0_fail;
				
			default:
				goto endoffunction;
		}
	}
	if (condition0 >= 5)
	{
		printf("> Operator, you're doing quite badly now. Bad luck with the cards perhaps...\n> Try again (1:yes, 2:no)");
		
		putc(c, stdin);
		
		switch(getc(stdin))
		{
			case '1':
				goto helloCards;
				
			case '2':
				goto condition0_fail;
				
			default:
				goto endoffunction;
		}
	}
	
	
	condition0_fail:{};
	
		printf("\x1B[1;1H\x1B[2J");
	
		printf("\nThe wind grazes the walls of the Kira Anderson hotel.\nYou look up at the glistening stars and the neon shades of the city skyscrapers.\nThey contrast against the architecture of the art deco chateau.\nThere's a certain tension in your body as you look into the lobby.");
		
		blank();
		
		goto condition0_1;
	
	


	condition0_success:{};
	
		printf("\x1B[1;1H\x1B[2J");
	
		printf("\nThe wind compliments the walls of the Kira Anderson hotel in gusts.\nYou look up at the glistening stars and the neon shades of the city skyscrapers.\nThey contrast against the architecture of the art deco chateau.\nTaking a deep breath your body is full of energy as you look into the lobby.");
		
		blank();
		
		goto condition0_1;
		
		
		
		condition0_1:{};
		
		printf("\nYou stride into the hotel to the bouncing rhythm of a city pop bassline.\nThere's a string quartet playing in the background,\nbut from your perspective their playing is muted compared with the chiptune synths.");
		
		printf("\n\n> Operator, if we look around the hotel we can find guests.\n> Some of them are bound to have cards on them.\n> Depending on how we do against them they might yield information to us.\n> Some of them are bound to say things more vital than others.");
		
		printf("\n\n(1:stay in the lobby, 2: check the library, 3: scope out the next hall, 4: inspect the parking garage)");
		
		putc(c, stdin);
		
		switch(getc(stdin))
		{
			case '1':
				goto LOBBY0;
				
			case '2':
				goto LIBRARY0;
				
			case '3':
				goto HALL0;
				
			case '4':
				goto GARAGE0;
		}
		
		
		LOBBY0:{};
			printf("\x1B[1;1H\x1B[2J");
			
			printf("\nThe walls have an elegantly carved hardwood panneling.\nThe designs are bold without being baroque.\nYou look around and see upholstered chairs neatly strewn around the room -- a paradox in the heart of the city.");
			
			printf("\n\nViolet> Pleased to make your acquaintance, my name is Violet.\nViolet> I watched your performance from the lobby.");
			
			if(condition0 == 0)
			{
				violetCondition++;
			
				printf("\nViolet> You did quite well, and suffice to say I was impressed.");
			}
			
			if(condition0 > 0 && condition0 < 3)
			{
				printf("\nViolet> You didn't do as well as you could have, but part of the cards is what you make out of luck.");
			}
			
			if(condition0 >= 3)
			{
				printf("\nViolet> You did quite badly, and I wonder whether that was you or the cards at fault.");
			}
			
			printf("\n\nHer blazer, with sleeves rolled up to elbow length, goes with her name.\nThe colour is a solid purple that contrasts against her white pencil-skirt.");
			
			blank();
			
			printf("\n\nViolet> Would you like to have a go against me then?");
			
			printf("\n\n(1: yes, 2: no)");
			
			putc(c, stdin);
			
			switch(getc(stdin))
			{
				case '1':
					if (violetCondition > 0)
					{
						adversaryStats violet = {30, 1, 250};
						
						printf("\nViolet> Get ready, I won't hold back my cards.");
						
						blank();
						
						if(cards(player, violet, playerDeck, violetDeck, 9, 13) == VICTORY)
						{
							printf("\x1B[1;1H\x1B[2J");
							
							violetCondition++;
							
							printf("\nViolet> I am impressed by your performance once more.");
						}
						else
						{
							printf("\nViolet> Better luck next time");
						}
						
						goto violetChoice0;
					}
					else
					{
						adversaryStats violet = {10, 1, 250};
						
						printf("\nViolet> You didn't do so well so I'll go a bit easy on you.");
						
						blank();
						
						if(cards(player, violet, playerDeck, violetDeck, 9, 13) == VICTORY)
						{
							printf("\nViolet> You're getting better, good game.");
							
							violetCondition++;
							
						}
						else
						{
							printf("\nViolet> Luck's really not with you today.");
						}
						
						goto violetChoice0;
					}
					
				case '2':
					
					printf("\nViolet> That's alright, you're not obliged to");
					
					blank();
					
					goto LOBBY0_1;
					
			}
			
			violetChoice0:{};
			
			LOBBY0_1:{};
			
			printf("\n\n(1: stay here, 2: view the library, 3: check the hall, 4: go to the garage, 5: check in)");
				
			putc(c, stdin);
				
			switch(getc(stdin))
			{
				case '1':
					goto LOBBY0;
						
				case '2':
					goto LIBRARY0;
						
				case '3':
					goto HALL0;
						
				case '4':
					goto GARAGE0;
					
				case '5':
					blank();

					printf("\n\nAre you sure?");

					printf("\n\n(1: yes, 2: no)");
					
					putc(c, stdin);
					
					switch(getc(stdin))
					{
						case '1':
							goto LOBBY0_2;
							
						case '2':
							goto LOBBY0_1;
							
							
					}
						
			}
			
			LOBBY0_2:{};
			
			goto condition1;






		
		
		LIBRARY0:{};
			printf("\x1B[1;1H\x1B[2J");
			
			printf("\nThe walls are shielded by rows of books.\nThere's a surface-to-ceiling window at one end of the room.\nYou look out and see the city skyscrapers lined up like a continuation of bookshelves.");
			
			printf("\n\nNaomi> I am Naomi.");
			
			printf("\n\nShe is wearing a plain black suite without a tie.\nThe buttons are loosely done up without revealing anything.");
			
			printf("\n\nNaomi> This hotel was constructed by a commission from the Northern Alliance,\nNaomi> not to be confused with the northern states of Wei.\nNaomi> So the building effectively takes the place of the de facto embassy.");
			
			if (naomiCondition >= 5)
			{
				secureCoast++;
				secureReactors++;
				
				printf("\nNaomi> The things you have to say, I find them interesting.\nNaomi> Getting you the resources you need could be a priority.");
			}
			
			if (naomiCondition > 0 && naomiCondition <= 4)
			{
				printf("\nNaomi> The things you have to say, I find them interesting.");
			}
			
			if (naomiCondition == 0)
			{
				printf("\nNaomi> I am mostly indifferent about your presence here.");
			}
			
			if (naomiCondition < 0)
			{
			
				secureCoast--;
				secureReactors--;
			
				printf("\nNaomi> How do you suppose Tayoan should avert military action then?\nNaomi> I am not impressed by your outlook.");
			}
			
			blank();
			
			if (naomiCondition > 3)
			{
			
				printf("\nNaomi> Sanctions could only work in conjunction with a strong deterrent.");
			
				printf("\n\n(1: secure the coast, 2: secure the reactors, 3: promote peace)");
			
				putc(c, stdin);
			
				switch(getc(stdin))
				{
					case '1':
						naomiCondition++;
						secureCoast++;
						
						goto naomiChoice0;
						
					case '2':
						naomiCondition++;
						secureReactors++;
						
						goto naomiChoice0;
						
					case '3':
						naomiCondition--;
						secureCoast--;
						secureReactors--;
						
						blank();
						
						printf("\nNaomi> Promoting peace is fine, but what do you suggest about the defence of Tayoan then?\nNaomi> The statistical probability of war increases with the unilateral development of military forces.");
					
						printf("\n\n(1: multilateral protest, 2: disband the military)");
						
						putc(c, stdin);
						
						switch(getc(stdin))
						{
							case '1':
								naomiCondition+=2;
								secureCoast+=4;
								secureReactors+=4;
								
								printf("\nNaomi> If you can find a way to avert the development of Wei's fleet that should balance things.");
								
								goto naomiChoice0_1;
								
							case '2':
							
								naomiCondition -= 5;
							
								secureCoast-= 5;
								secureReactors -= 5;
							
								printf("\nNaomi> Are you crazy, that will lead to an even greater imbalance of power.\nNaomi> The northern states of Wei are going to continue building their fleet regardless.");
							
								goto naomiChoice0_1;
						}
					
						naomiChoice0_1:{};
				}
			
				naomiChoice0:{};
			}
			else
			{
				printf("\nNaomi> Let's talk more later.");
				
				goto LIBRARY0_1;
			}
			
			blank();
			
			if (naomiCondition > 1)
			{
				printf("\nNaomi> The outlook for current events appears positive.\nNaomi> With a strong defence Tayoan should be able to weather the storm.");
			}
			else
			{
				printf("\nNaomi> Things don't appear to be developing well enough.\nNaomi> What is Tayoan going to do without enough resources to secure the coast and reactors?");
			}
			
			printf("\nNaomi> Your presence here reinforces my opinion. Let's play a round of cards.");
			
			blank();
			
			adversaryStats naomi = {25, 1, 280};
			
			if (cards(player, naomi, playerDeck, naomiDeck, 9, 19) == VICTORY)
			{
				printf("\nNaomi> You manage your luck well enough.");
			}
			else
			{
				printf("\nNaomi> Your performance doens't make me feel any better.");
			}
			
			
			LIBRARY0_1:{};
			
			blank();
			
			printf("\n\n(1: return to the lobby, 2: stay here, 3: check the hall, 4: go to the garage, 5: check in)");
				
			putc(c, stdin);
				
			switch(getc(stdin))
			{
				case '1':
					goto LOBBY0;
						
				case '2':
					goto LIBRARY0;
						
				case '3':
					goto HALL0;
						
				case '4':
					goto GARAGE0;
				
				case '5':
					blank();

					printf("\n\nAre you sure?");

					printf("\n\n(1: yes, 2: no)");
					
					putc(c, stdin);
					
					switch(getc(stdin))
					{
						case '1':
							goto LIBRARY0_2;
						
						case '2':
							goto LIBRARY0_1;
							
							
					}
						
			}
			
			
			
			
			
			LIBRARY0_2:{};
			
			goto condition1;






		
		HALL0:{};
		
			printf("\x1B[1;1H\x1B[2J");
			
			printf("\nThe walls open up to a grand hall with a chandelier.\nThey must hold functions in here.\nThis domain is subtle cool tones that give rise to the glistening brightness of the lights.");
			
			printf("\n\nJack> My name is Jack.");
	
			blank();
			
			printf("\n\nHe wears a formal uniform from some kind of military institution.\nThe edges are tightly tucked into place.");
			
			if(violetCondition > 1)
			{
				printf("\n\nJack> Good meeting you");
				
				printf("\nJack> I see you've met Violet already.");
				
				printf("\n\n(1:whoa how did you know, 2:you must know her well)");
				
				putc(c, stdin);
				
				switch(getc(stdin))
				{
					case '1':
						printf("\nJack> She just texted me, we're close like that.");
						
						goto jackChoice0;
						
					case '2':
						printf("\nJack> Let's say we have a history.");
						
						goto jackChoice0;
						
				}
				
				jackChoice0:{};
				
				blank();
				
				printf("\nJack> I first encountered violet at the academy years ago.");
				
				printf("\n\n(1:the military academy, 2:tell me more)");
				
				putc(c, stdin);
				
				switch(getc(stdin))
				{
					case '1':
						naomiCondition++;
						
						printf("\nJack> The academy is in the ethical fiber of society. We were both cadets in training at the time.");
						
						goto jackChoice1;
						
					case '2':
						blank();
					
						printf("\nJack> The academy is a military institution, without which there would be no training for officers.\nJack> The United Nations needs nations that volunteer their soldiers to hold any authority.\nJack> We trained there to a certain objective standard in technical fields.");
						
						printf("\n\n(1:the academy is necessary , 2:poetry is a fine art)");
						
						putc(c, stdin);
						
						switch(getc(stdin))
						{
							case '1':
								naomiCondition++;
								jackCondition++;
								
								printf("\nJack> Agreed, an ad hoc conscript military necessarily doesn't have the same standards.\nJack> Not that they wouldn't necessarily have the same standards.");
								
								goto jackChoice1_1;
								
							case '2':
								naomiCondition--;
								jackCondition--;
								
								printf("\nJack> You can observe, however, what happened to the southern states of Wu after the end of the Han dynsasty.\nJack> With talk of forceful reunification coming from Wei they were unable to defend themselves.");
								
								goto jackChoice1_1;
								
								
						}
						
						jackChoice1_1:{};
						
						goto jackChoice1;
						
				}
				
				jackChoice1:{};
				
				blank();
				
				printf("\nJack> The imperial fleet of Wei is gaining in numbers by the day.\nJack> Here in Tayoan that's very disconcerting.\nJack> In fact they are projected to have five hundred vessels within the next half decade.\nJack> There's a question if mandatory conscription is going to be enough to turn the tide.");
				
				printf("\n\n(1:the tide of war, 2:then promote peace)");
				
				putc(c, stdin);
				
				switch(getc(stdin))
				{
					case '1':
						jackCondition++;
						
						printf("\nJack> The tide of war seems inevitable each day, and I wonder how long a status quo can last.\nJack> The question is if we can do anything to change the course of things.\nJack> The trouble is that conscripts don't have the same standards as regular soldiers.");
						
						printf("\n\nFrom the briefcase next to him he pulls out a tablet.\nAfter scrolling through several maps he brings up a one of Tayoan.");
			
						blank();
						
						printf("\n\nJack> As you can see holding fast to the coastline is going to be important.\nJack> Maintaining the integrity of the ports while preventing their capture is going to be important.\nJack> The next question is if we have enough to secure the ports or the energy reactors.");
						
						printf("\n\n(1:secure the coast, 2:secure the reactors)");
						
						putc(c, stdin);
						
						switch(getc(stdin))
						{
							case '1':
								secureCoast++;
								naomiCondition++;
								
								printf("\n\nJack> Securing the ports is going to have a logistical effect down the line.\nJack> That's so long as we're able to hold fast despite the adversity.");
								
								goto jackChoice2_1;
								
							case '2':
								secureReactors++;
								
								printf("\n\nJack> The energy reactors could be targets.\nJack> We can focus on them, but that's going to leave a more vulnerable coast.");
								
								goto jackChoice2_1;
						}
						
						jackChoice2_1:{};
						
						goto jackChoice2;
						
						
					case '2':
						naomiCondition--;
					
						printf("\n\nJack> I would like to support peace, but five hundred vessels is a lot of tonnage to contend with.");
						
						goto jackChoice2;
						
				}
				
				jackChoice2:{};
				
			}
			else
			{
				printf("\n\nJack> Not particularly interested in talking with anyone right now.");	
				
			}
			
			blank();
			
			printf("\n\nJack> How about we pass the time with a round of cards.");

			blank();
			
			adversaryStats jack = {10, 4, 250};
			
			if (cards(player, jack, playerDeck, jackDeck, 9, 19) == 0)
			{
				jackCondition++;
				
				naomiCondition += 2;
				
				printf("\nJack> Well played.");
			}
			else
			{
				printf("\nJack> Virtue is habitual.");
			}
			
				HALL0_1:{};
			
				blank();
			
				printf("\n\n(1: return to the lobby, 2: check the library, 3: stay here, 4: go to the garage, 5: check in)");
				
				putc(c, stdin);
				
				switch(getc(stdin))
				{
					case '1':
						goto LOBBY0;
						
					case '2':
						goto LIBRARY0;
						
					case '3':
						goto HALL0;
						
					case '4':
						goto GARAGE0;
						
					case '5':
						blank();

						printf("\n\nAre you sure?");

						printf("\n\n(1: yes, 2: no)");
					
						putc(c, stdin);
					
						switch(getc(stdin))
						{
							case '1':
								goto HALL0_2;
							
							case '2':
								goto HALL0_1;
							
							
						}
						
				}
				
			HALL0_2:{};
			
			goto condition1;







			
		GARAGE0:{};
		
			printf("\x1B[1;1H\x1B[2J");
			
			printf("\nThe walls quickly shift to a sterile concrete construction.\nThe air in the garage is cold and you can almost see your breath.\nColours here are grey and monochrome,\nand their coldness contrasts against the lamps that line the edges of the room.");
			
			blank();
			
			printf("\n\nLee> Allow me to introduce myself, my name is Lee.");
			
			printf("\n\nHis valet's jacket and trousers are sable as the night sky.\nHe wears a cap with a sleek brim secured fast to his head.");
			
			printf("\n\n(1:what's with the mask, 2:you're a driver)");
			
			putc(c, stdin);
			
			switch(getc(stdin))
			{
				case '1':
					printf("\n\nLee> Under cover of night or just under cover, the mask helps me compartmentalize.\nLee> A person's personality is fluid, like water,\nLee> adapting an essential quality to the circumstances of the moment.");
					
				case '2':
					naomiCondition++;
					
					blank();
				
					printf("\n\nLee> That is one of my occupations, yes.\nLee> But think of this, the question is what qualities are necessarily in who I am\nLee> as a person.");
					
					printf("\n\n(1:quick and to the point, 2:I like to get around the point)");
					
					putc(c, stdin);
					
					switch(getc(stdin))
					{
						case '1':
							leeCondition++;
							
							printf("\n\nLee> Stagnant patterns firmly drilled into a person's psyche\nLee> are necessarily less malleable than contingent adaptation.");
							goto leeChoice0;
							
						case '2':
							leeCondition--;
							
							blank();
							
							printf("\n\nLee> Why take a circuitous path?\nLee> A person's time is like their personal economy.\nLee> You need to put the whole body into it.\nLee> Economy of motion, economy of mind, efficiency.");
							
							printf("\n\n(1:the earth is circumstantially round though, 2:who wouldn't want more time)");
							
							putc(c, stdin);
							
							switch(getc(stdin))
							{
								case '1':
									leeCondition += 2;
									
									printf("\n\nLee> Again, the essence of adaptation.\nLee> Like water, flow around obstacles as necessary.");
									
									goto leeChoice0_1;
									
								case '2':
									leeCondition -= 2;
									
									printf("\n\nLee> We should all want so much time,\nLee> but what are you going to do with that which you have now?");
									
									goto leeChoice0_1;
									
							}
							
							leeChoice0_1:{};
							
							goto leeChoice0;
					}
					
			}
			
			leeChoice0:{};
			
			if (leeCondition >= 1)
			{
			
				printf("\n\nLee> Perhaps I have time for a round or more.");
			
				blank();
				blank();
			
				adversaryStats lee = {40, 1, 200};
			
				if(cards(player, lee, playerDeck, leeDeck, 9, 9) == 0)
				{
					leeCondition += 2;
				
					naomiCondition += 2;
				
					printf("\n\nLee> You had to be fast given the right cards to pull that off.");
				}
				else
				{
					printf("\n\nLee> Better make something of your luck next time.");
				}
			}
			else
			{
				printf("\n\nLee> Perhaps I'll have more time later.");
			}
			
			GARAGE0_1:{};
			
			blank();
			
			printf("\n\n(1: return to the lobby, 2: check the library, 3: go to the hall, 4: stay here, 5: check in)");
			
			putc(c, stdin);
			
			switch(getc(stdin))
			{
				case '1':
					goto LOBBY0;
					
				case '2':
					goto LIBRARY0;
					
				case '3':
					goto HALL0;
					
				case '4':
					goto GARAGE0;
					
				case '5':
					blank();

					printf("\n\nAre you sure?");

					printf("\n\n(1: yes, 2: no)");
					
					putc(c, stdin);
					
					switch(getc(stdin))
					{
						case '1':
							goto GARAGE0_2;
							
						case '2':
							goto GARAGE0_1;
							
							
					}
			}
			
			GARAGE0_2:{};
			
			goto condition1;
		
		
	condition1:{};
	
	printf("\x1B[1;1H\x1B[2J");
	
	printf("When getting into the elevator, after having checked in, the music you hear is a subdued piece for solo piano.\nThe harmonies are complex, but the rhythm and tempo are subtle and relaxing.\n\nOnce reaching your floor the doors swing open while the music lingers in the air.\nThe carpet is a cool tone and the wallpaper has minimal silver designs.\nThey are tiled in a tesselating pattern.\n\nReaching your room, the keycard unlatches the lock with a click.\nLooking out at the city through the window you see the buildings glisten under the stars.\nThere's almost an aura of luminance that rises up from the city lights into the sky above.\n\nThe glass construction of the buildings covers the flexible compound structures.\nThey were designed with flexibility in mind, like grand pieces of super modern bamboo.\n\nYou take a seat in the upholstered chair between the desk and the window and keep looking out to the city.");
	
	blank();
	blank();
	
	printf("\x1B[1;1H\x1B[2J");
	
	if (naomiCondition > violetCondition)
	{
		printf("\n\nYou hear a knock at your door.");
	
		if (secureCoast < 0)
		{
			printf("\n\nNaomi> I am hesitant about seeking your help, but will do so regardless.");
		}
		if (secureCoast >= 0 && secureCoast < 3)
		{
			printf("\n\nNaomi> There might be better options that getting your help, but I don't have much say in the matter.");
		}
		if (secureCoast >=3 && secureCoast < 5)
		{
			printf("\n\nNaomi> We could use your help, you've proven to have an interesting outlook.");
		}
		if (secureCoast >=5)
		{
			printf("\n\nNaomi> I feel the most assured about getting help from you.");
		}
		
		printf("\nNaomi> Some might question whether the right answer is punishment or denial regarding Tayoan's defence.");
		
		blank();
		
		printf("\n\n(1:interesting choice of words, 2:what's your take)");
		
		putc(c, stdin);
		
		switch(getc(stdin))
		{
			case '1':
				naomiCondition -= 4;
				printf("\n\nNaomi> I need you to really be serious right now.");
				
				goto naomiChoice1;
				
			case '2':
				printf("\n\nNaomi> I'll let you know incrementally.");
				
				goto naomiChoice1;
				
		}
		
		naomiChoice1:{};
		
		blank();
		
		printf("\nNaomi> Concisely put, punishment refers to sanctions against Wei.\nNaomi> Denial, on the other hand, refers to military denial of territory.\nNaomi> For now you just need to understand that I see them as both parts of one solution.");
		
		printf("\n\n(1:what about the lives of those lost in military action, 2:the states of Wei have been building their military regardless)");
		
		putc(c, stdin);
		
		switch(getc(stdin))
		{
			case '1':
				naomiCondition -= 4;
				
				printf("\n\nNaomi> the states of Wei build their military regardless.\nNaomi> Including denial as part of one solution is essential.");
				
			case '2':
				naomiCondition += 4;
				
				printf("\n\nNaomi> Tayoan's valuable resources vis-a-vis semiconductor manufacturing must be guarded.");	
		}
		
		printf("\nNaomi> If the states of Wei are able to convert Tayoan's semiconductor manufacturing to their benefit,\nNaomi> what's to stop them from establishing a new regional hegemony\nNaomi> before establishing themselves economically and pushing farther East?\nNaomi> Suffice to say that would reduce the effectiveness of sanctions.");
		
		if (naomiCondition > 4)
		{
			printf("Naomi> We need someone with your outlook to help prevent a pivotal moment such as that.");
		}
		else
		{
			printf("Naomi> We need someone that can prevent a pivotal moment such as that.\nNaomi> You're all we have at the moment.");
		}
		
		printf("\n\nShe walks over to the window and looks out at the city.");
		
		printf("\n\nNaomi> I hope you don't mind, but I want to understand the view from your perspective.");
		

	}
	else
	{
		printf("\n\nYou hear a knock at your door.");
	
		if (secureReactors < 0)
		{	
			printf("\n\nViolet> What about contingencies where Wei establishes a hold of part of the coast?");
		}
		if (secureCoast >= 0 && secureReactors < 3)
		{
			printf("\n\nViolet> You're a reasonable bet given the circumstances.");
		}
		if (secureCoast >=3 && secureReactors < 5)
		{
			printf("\n\nViolet> Given your outlook, you're a safe bet given the circumstances.");
		}
		if (secureReactors >=5)
		{
			printf("\n\nViolet> You don't want to forget about contingencies regarding the coast.");
		}
		
		blank();
		
		printf("\nViolet> How would you like to help graduates from the academy?");
		
		printf("\n\n(1:the academy is essential, 2:not interested)");
		
		putc(c, stdin);
		
		switch(getc(stdin))
		{
			case '1':
				violetCondition += 4;
				
				printf("\n\nViolet> I knew I could trust in you.\nViolet> If there's a way to avert total war, we'll find one.\nViolet> But the academy has to be part of the answer.");
				
				goto violetChoice1;
				
			case '2':
				violetCondition -= 4;
				
				printf("\n\nViolet> Perhaps trusting in you was a mistake.\nViolet> Do you expect the people of Tayoan to subject themselves to imperial rule?\nViolet> For how long?");
				
				goto violetChoice1;
				
		}
		
		violetChoice1:{};
		
		printf("\nViolet> Regardless, I wanted to talk with you about the issue first.");
		
		if (violetCondition >= 4)
		{
			printf("\nViolet> I look forward to working with you in the future.");
		}
		else
		{
			printf("\nViolet> I am hesitant about working with you in the future.");
		}
		
		printf("\n\nShe walks over to the window.");
		
		printf("\n\nViolet> I hope you'll be able to help.");
	}
	
	blank();
	
	printf("\x1B[1;1H\x1B[2J");
	
	printf("\nThe next day sunlight fills the glass buildings.\nThey glisten under a clear sky.");
	
	printf("\n\n> Operator, you're the only one in here, but look at the city.\n> Each of those buildings is full of rooms.\n> Some of those rooms have real people in them.");
	


	
	endoffunction:{};
	
	blank();
	blank();
	
	printf("\x1B[1;1H\x1B[2J");
	
	printf("\nAPPROVAL SCORES:\n\nViolet %d\n\nJack %d\n\nNaomi %d\n\nLee %d", 	violetCondition, jackCondition, naomiCondition, leeCondition);
	
	printf("\n");
}
