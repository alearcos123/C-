#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Alejandro Arcos. MDID:1002240214

int main()
{
    cout << "Hello Player!\n" << endl;
    char p1 = '.';
    char p2 = '.';
    char p3 = '.';
    char p4 = '.';
    char p5 = '.';
    char p6 = '.';
    char p7 = '.';
    char p8 = '.';
    char p9 = '.';

    //Constants
    const int minValue = 1; // Minimum value
    const int maxValue = 9; // Maximum value

    //Variables
    bool gameOver = false; // Check Game finished.
    bool Xwins = false; // X Win
    bool Owins = false; // O Win
    bool moveValid = true; // flag player move right
    bool cMoveValid = false; // flag computer random move right
    bool invalidMove = true; // move out 1-9
    bool lastMove = false; // nobody win, play finished
    int iMove; // to hold player movement
    int cMove; // to hold computer movement



    cout << "Enter the number of your move(1-9)respect to the position on the sheet:\n" << endl;




    while (!gameOver)
     {
        if (Xwins == true)
         {
            gameOver = true; //close while loop
            // print the board;
            cout<<"    |    |    "<< endl;
            cout<<"  "<< p1 <<" |  "<< p2 <<" |  "<< p3 <<"  "<< endl;
            cout<<"____|____|____"<< endl;
            cout<<"    |    |    "<< endl;
            cout<<"  "<< p4 <<" |  "<< p5 <<" |  "<< p6 <<"  "<< endl;
            cout<<"____|____|____"<< endl;
            cout<<"    |    |    "<< endl;
            cout<<"  "<< p7 <<" |  "<< p8 <<" |  "<< p9 <<"  "<< endl;
            cout<<"    |    |    "<<"\n"<< endl;
            cout << "Congratulations!!!! You have won" << endl;
         }

        else if (Owins == true)
         {
            gameOver = true; //close while loop
            // print the board;
            cout<<"    |    |    "<< endl;
            cout<<"  "<< p1 <<" |  "<< p2 <<" |  "<< p3 <<"  "<< endl;
            cout<<"____|____|____"<< endl;
            cout<<"    |    |    "<< endl;
            cout<<"  "<< p4 <<" |  "<< p5 <<" |  "<< p6 <<"  "<< endl;
            cout<<"____|____|____"<< endl;
            cout<<"    |    |    "<< endl;
            cout<<"  "<< p7 <<" |  "<< p8 <<" |  "<< p9 <<"  "<< endl;
            cout<<"    |    |    "<<"\n"<< endl;
            cout << "Game Over" << endl;
         }

         else if (lastMove == true)
         {
            gameOver = true; //close while loop
            // print the board;
            cout<<"    |    |    "<< endl;
            cout<<"  "<< p1 <<" |  "<< p2 <<" |  "<< p3 <<"  "<< endl;
            cout<<"____|____|____"<< endl;
            cout<<"    |    |    "<< endl;
            cout<<"  "<< p4 <<" |  "<< p5 <<" |  "<< p6 <<"  "<< endl;
            cout<<"____|____|____"<< endl;
            cout<<"    |    |    "<< endl;
            cout<<"  "<< p7 <<" |  "<< p8 <<" |  "<< p9 <<"  "<< endl;
            cout<<"    |    |    "<<"\n"<< endl;
            cout << "Almost win!!! Try again" << endl;
         }

        else
        {
            cout<<"    |    |    "<< endl;
            cout<<"  "<< p1 <<" |  "<< p2 <<" |  "<< p3 <<"  "<< endl;
            cout<<"____|____|____"<< endl;
            cout<<"    |    |    "<< endl;
            cout<<"  "<< p4 <<" |  "<< p5 <<" |  "<< p6 <<"  "<< endl;
            cout<<"____|____|____"<< endl;
            cout<<"    |    |    "<< endl;
            cout<<"  "<< p7 <<" |  "<< p8 <<" |  "<< p9 <<"  "<< endl;
            cout<<"    |    |    "<<"\n"<< endl;

               // get move from user
            cin >> iMove;

              //test input
            if (iMove >= 1)
             {
              if (iMove <= 9 )
               {

                if (iMove == 1)
                    if(p1 =='.')
                       p1='x';
                    else
                    {
                      moveValid = false;
                      cout << " Invalid move, choose a space empty\n" << endl;
                    }
                if (iMove == 2)
                    if(p2 =='.')
                       p2='x';
                    else
                    {
                      moveValid = false;
                      cout << " Invalid move, choose a space empty\n" << endl;
                    }
                if (iMove == 3)
                    if(p3 =='.')
                       p3='x';
                    else
                    {
                      moveValid = false;
                      cout << " Invalid move, choose a space empty\n" << endl;
                    }
                if (iMove == 4)
                    if(p4 =='.')
                       p4='x';
                    else
                    {
                      moveValid = false;
                      cout << " Invalid move, choose a space empty\n" << endl;
                    }
                if (iMove == 5)
                    if(p5 =='.')
                       p5='x';
                    else
                    {
                      moveValid = false;
                      cout << " Invalid move, choose a space empty\n" << endl;
                    }
                if (iMove == 6)
                    if(p6 =='.')
                       p6='x';
                    else
                    {
                      moveValid = false;
                      cout << " Invalid move, choose a space empty\n" << endl;
                    }
                if (iMove == 7)
                    if(p7 =='.')
                       p7='x';
                    else
                    {
                      moveValid = false;
                      cout << " Invalid move, choose a space empty\n" << endl;
                    }
                if (iMove == 8)
                    if(p8 =='.')
                       p8='x';
                    else
                    {
                      moveValid = false;
                      cout << " Invalid move, choose a space empty\n" << endl;
                    }
                if (iMove == 9)
                    if(p9 =='.')
                       p9='x';
                    else
                    {
                      moveValid = false;
                      cout << " Invalid move, choose a space empty\n" << endl;
                    }


                if (moveValid == true)
                 {
                      // Check X Win
                     if (p1 == 'x' && p2 == 'x' && p3 == 'x')
                            {
                              Xwins = true;
                            }
                     else if (p1 == 'x' && p4 == 'x' && p7 == 'x')
                            {
                             Xwins = true;
                            }
                     else if (p1 == 'x' && p5 == 'x' && p9 == 'x')
                            {
                              Xwins = true;
                            }
                     else if (p2 == 'x' && p5 == 'x' && p8 == 'x')
                            {
                              Xwins = true;
                            }
                     else if (p3 == 'x' && p6 == 'x' && p9 == 'x')
                            {
                              Xwins = true;
                            }
                     else if (p3 == 'x' && p5 == 'x' && p7 == 'x')
                            {
                              Xwins = true;
                            }
                     else if (p4 == 'x' && p5 == 'x' && p6 == 'x')
                            {
                              Xwins = true;
                            }
                     else if(p7 == 'x' && p8 == 'x' && p9 == 'x')
                            {
                              Xwins = true;
                            }


                     else
                     {
                       if (p1 == '.' || p2 == '.' || p3 == '.' || p4 == '.' || p5 == '.' || p6 == '.' || p7 == '.' || p8 == '.' || p9 == '.')
                        {
                         // print the board;
                         cout<<"    |    |    "<< endl;
                         cout<<"  "<< p1 <<" |  "<< p2 <<" |  "<< p3 <<"  "<< endl;
                         cout<<"____|____|____"<< endl;
                         cout<<"    |    |    "<< endl;
                         cout<<"  "<< p4 <<" |  "<< p5 <<" |  "<< p6 <<"  "<< endl;
                         cout<<"____|____|____"<< endl;
                         cout<<"    |    |    "<< endl;
                         cout<<"  "<< p7 <<" |  "<< p8 <<" |  "<< p9 <<"  "<< endl;
                         cout<<"    |    |    "<<"\n"<< endl;

                         //Computer move
                         while (cMoveValid == false)
                         {
                             unsigned seed = time(0);
                             srand (seed);
                             cMove = (rand() % (maxValue - minValue +1)) + minValue;
                             if (cMove == 1)
                               if(p1 =='.')
                                {
                                   p1='0';
                                   cMoveValid = true;
                                }

                             if (cMove == 2)
                               if(p2 =='.')
                                {
                                   p2='0';
                                   cMoveValid = true;
                                }


                             if (cMove == 3)
                               if(p3 =='.')
                                {
                                   p3='0';
                                   cMoveValid = true;
                                }


                             if (cMove == 4)
                               if(p4 =='.')
                               {
                                   p4='0';
                                   cMoveValid = true;
                               }


                             if (cMove == 5)
                               if(p5 =='.')
                               {
                                   p5='0';
                                   cMoveValid = true;
                               }


                             if (cMove == 6)
                               if(p6 =='.')
                               {
                                   p6='0';
                                   cMoveValid = true;
                               }


                             if (cMove == 7)
                               if(p7 =='.')
                               {
                                   p7='0';
                                   cMoveValid = true;
                               }

                             if (cMove == 8)
                               if(p8 =='.')
                               {
                                   p8='0';
                                   cMoveValid = true;
                               }


                             if (cMove == 9)
                               if(p9 =='.')
                               {
                                   p9='0';
                                   cMoveValid = true;
                               }


                         }

                         cMoveValid = false; //Reset flag





                         //Check computer win
                         if (p1 == '0' && p2 == '0' && p3 == '0')
                            {
                              Owins = true;
                            }
                         else if (p1 == '0' && p4 == '0' && p7 == '0')
                            {
                              Owins = true;
                            }
                         else if (p1 == '0' && p5 == '0' && p9 == '0')
                            {
                              Owins = true;
                            }
                         else if (p2 == '0' && p5 == '0' && p8 == '0')
                            {
                              Owins = true;
                            }
                         else if (p3 == '0' && p6 == '0' && p9 == '0')
                            {
                              Owins = true;
                            }
                         else if (p3 == '0' && p5 == '0' && p7 == '0')
                            {
                              Owins = true;
                            }
                         else if (p4 == '0' && p5 == '0' && p6 == '0')
                            {
                              Owins = true;
                            }
                         else if(p7 == '0' && p8 == '0' && p9 == '0')
                            {
                              Owins = true;
                            }

                     }
                     else
                     {
                       lastMove = true;
                     }
                   }
                 }
                moveValid = true; //Reset flag
               }
               else
               {
                 cout << " Invalid move, choose 1-9\n" << endl; //Move up 9
               }
            }

          else
          {
            cout << " Invalid move, choose 1-9\n" << endl; //Move down 1
          }
       }
     }
     return 0;
}
