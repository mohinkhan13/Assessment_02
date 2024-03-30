#include <iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;

class Game
{
	int round, comp_score, user_score, u;
	string name;
	
	public :
			
			Game()
			{
				comp_score = 0;
				user_score = 0;
			}
			
			void get_data();
			
			void Rounds();
						
			void winner();
};


void Game :: get_data()
			{
				cout<<"\n\n\t *--*--*--*--*--*--*--*--*--*";
				cout<<"\n\n\t\t NAME";
				cout<<"\n\n\t *--*--*--*--*--*--*--*--*--*";
				cout<<"\n\n\t Please Enter Your Name : ";
				cin>>name;	
				
				cout<<"\n\n\t *--*--*--*--*--*--*--*--*--*";
				cout<<"\n\n\t\t Rounds";
				cout<<"\n\n\t *--*--*--*--*--*--*--*--*--*";
				cout<<"\n\n\t"<<name<<"How Many Rounds You Want To Play : ";
				cin>>round;
			}
			
void Game :: Rounds()
			{
				for (int i=0;i<round;i++)
				{
					cout<<"\n\n\t Round No : "<<i+1<<"/"<<round;
					
					cout<<"\n\n\t -> "<<name<<"'s Score = "<<user_score;
					cout<<"\n\t -> Computer Score = "<<comp_score;
					
					cout<<"\n\n\t 1) Rock";
					cout<<"\n\t 2) Paper";
					cout<<"\n\t 3) Scissor";
					
					cout<<"\n\n\t -> Select Your Choise : ";
					cin>>u;
					
					srand(time(0));
					int c = rand() %3 +1;
					
					switch(c)
					{
						case 1 :
								cout<<"\n\n\t Computer Choise Is Rock";
								break;
						case 2 :
								cout<<"\n\n\t Computer Choise Is Paper";
								break;
						case 3 :
								cout<<"\n\n\t Computer Choise Is Scissor";
								break;
					}
					
					if(u==c)
					{
						cout<<"\n\n\t Draw";
					}
					else if(u==1 && c==2)
					{
						cout<<"\n\n\t Computer Win";
						comp_score++;
					}
					else if(u==2 && c==1)
					{
						cout<<"\n\n\t You Win";
						user_score++;
					}
					else if(u==1 && c==3)
					{
						cout<<"\n\n\t You Win";
						user_score++;
					}
					else if(u==3 && c==1)
					{
						cout<<"\n\n\t Computer Win";
						comp_score++;
					}
					else if(u==2 && c==3)
					{
						cout<<"\n\n\t Computer Win";
						comp_score++;
					}
					else if(u==3 && c==2)
					{
						cout<<"\n\n\t You Win";
						user_score++;
					}
					
					cout<<"\n\n\t Press Any Key To Continue.....";
					cin.ignore();
					cin.get();
				}
			}

void Game :: winner()
			{
				cout<<"\n\n\t -------------Game Over---------------";
				
				cout<<"\n\n\t "<<name<<"'s Score Is : "<<user_score;
				cout<<"\n\n\t Computer Score Is : "<<comp_score;
				
				if(comp_score < user_score)
					cout<<"\n\n\t Winner Is "<<name;
				else if(comp_score == user_score)
					cout<<"\n\n\t Wow Its Draw Both have Same Score";
				else
					cout<<"\n\n\t Winner Is Computer";
			}	
main()
{
	Game g;
	g.get_data();
	g.Rounds();
	g.winner();
}
