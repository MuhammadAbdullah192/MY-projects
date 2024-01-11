#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class inheritance
{
  protected:

  public: 
    void Calculate()
      {
        HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h,5);
        int Total;
        cout << ">>\tEnter Total Amount  : ";
        cin >> Total;
        cout<<endl;

        SetConsoleTextAttribute(h, 11);
        double H = 0, W = 0, S = 0, SS = 0, SSS = 0, D = 0, SD = 0, SSD = 0, F = 0, FF = 0, M = 0, RB = 0, RS = 0, PB = 0, PS = 0, MB = 0, MS = 0;
        cout << "\t********************************" << endl;
        cout << "\t**   Enter the cout of heir   **" << endl;
        cout << "\t********************************" << endl;
        cout << "\tHusband:                 ";
        cin >> H;
        cout << "\tWife:                    ";
        cin >> W;
        cout << "\tFather:                  ";
        cin >> F;
        cout << "\tFather's Father:         ";
        cin >> FF;
        cout << "\tMother:                  ";
        cin >> M;
        cout << "\tSon:                     ";
        cin >> S;
        cout << "\tSon's Son:               ";
        cin >> SS;
        cout << "\tSon's Son's Son:         ";
        cin >> SSS;
        cout << "\tDaughter:                ";
        cin >> D;
        cout << "\tSon's Daughter:          ";
        cin >> SD;
        cout << "\tSon's Son's Daughter:    ";
        cin >> SSD;
        cout << "\tReal Brother:            ";
        cin >> RB;
        cout << "\tReal Sister:             ";
        cin >> RS;
        cout << "\tPaternal Brother:        ";
        cin >> PB;
        cout << "\tPaternal Sister:         ";
        cin >> PS;
        cout << "\tMaternal Brother:        ";
        cin >> MB;
        cout << "\tMaternal Sister:         ";
        cin >> MS;

        float R_H = 0, R_W = 0, R_S = 0, R_SS = 0, R_SSS = 0, R_D = 0, R_SD = 0, R_SSD = 0, R_F = 0, R_FF = 0, R_M = 0, R_RB = 0, R_RS = 0, R_PB = 0, R_PS = 0, R_MB = 0, R_MS = 0;

        float S_H = 0, S_W = 0, S_S = 0, S_SS = 0, S_SSS = 0, S_D = 0, S_SD = 0, S_SSD = 0, S_F = 0, S_FF = 0, S_M = 0, S_RB = 0, S_RS = 0, S_PB = 0, S_PS = 0, S_MB = 0, S_MS = 0;

        string P_H, P_W, P_S, P_SS, P_SSS, P_D, P_SD, P_SSD, P_F, P_FF, P_M, P_RB, P_RS, P_PB, P_PS, P_MB, P_MS;

        //--------- Husband -------
        if (H > 0)
        {
          if (S == 0 && D == 0 && SS == 0 && SSS == 0 && SD == 0 && SSD == 0)
          {
            S_H = ((Total / 2) / H);
            P_H = "1/2";
            R_H = 2;
          }
        else if (S > 0 || D > 0 || SS > 0 || SSS > 0 || SD > 0 || SSD > 0)
          {
            S_H = ((Total / 4) / H);
            P_H = "1/4";
            R_H = 2;
          }
        }
        else
        {
          S_H = 0;
          P_H = "0";
          R_H = 0;
        }

        //--------- Wife -------
        if (W > 0)
        {
          if (S == 0 && D == 0 && SS == 0 && SSS == 0 && SD == 0 && SSD == 0)
          {
            S_W = ((Total / 4) / W);
            P_W = "1/4";
            R_W = 2;
          }
          else if (S > 0 || D > 0 || SS > 0 || SSS > 0 || SD > 0 || SSD > 0)
          {
            S_W = ((Total / 8) / W);
            P_W = "1/8";
            R_W = 2;
          }
        }
        else
        {
          S_W = 0;
          P_W = "0";
          R_W = 0;
        }

        //--------- Father -------
        if (F > 0)
        {
          if (S > 0 || D > 0 || SS > 0 || SSS > 0 || SD > 0 || SSD > 0)
          {
            S_F = ((Total / 6) / F);
            P_F = "1/6";
            R_F = 1;
          }
        }
        else
        {
          S_F = 0;
          P_F = "0";
          R_F = 0;
        }

        //--------- Father's Father -------
        if (FF > 0 && F == 0)
        {
          if (S > 0 || D > 0 || SS > 0 || SSS > 0 || SD > 0 || SSD > 0)
          {
            S_FF = ((Total / 6) / FF);
            P_FF = "1/6";
            R_FF = 1;
          }
        }
        else
        {
          S_FF = 0;
          P_FF = "0";
          R_FF = 0;
        }

        //--------- Mother -------
        if (M > 0)
        {
          if (S > 0 || D > 0 || SS > 0 || SSS > 0 || SD > 0 || SSD > 0 || RB > 0 || RS > 0 || PB > 0 || PS > 0)
          {
            S_M = ((Total / 6) / M);
            P_M = "1/6";
            R_M = 1;
          }
          else if (S == 0 && D == 0 && SS == 0 && SSS == 0 && SD == 0 && SSD == 0 && RB == 0 && RS == 0 && PB == 0 && PS == 0)
          {
            S_M = ((Total / 3) / M);
            P_M = "1/3";
            R_M = 1;
          }
        }
        else
        {
          S_M = 0;
          P_M = "0";
          R_M = 0;
        }

        //--------- Daughter -------
        if (D > 0 && S == 0)
        {
          if (D >= 2)
          {
            S_D = (((Total * 2) / 3) / D);
            P_D = "2/3";
            R_D = 1;

            S_S = 0;
            P_S = "0";
            R_S = 0;
          }
          else if (D == 1)
          {
            S_D = ((Total / 2) / D);
            P_D = "1/2";
            R_D = 1;

            S_S = 0;
            P_S = "0";
            R_S = 0;
          }
        }
        else if (D > 0 && S > 0)
        {
          S_D = ((Total / 2) / D);
          P_D = "2:1";
          R_D = 1;

          S_S = (Total / S);
          P_S = "2:1";
          R_S = 1;
        }
        else if (D <= 0 && S > 0)
        {
          S_D = 0;
          P_D = "0";
          R_D = 0;

          S_S = (Total / S);
          P_S = "2:1";
          R_S = 1;
        }
        else
        {
          S_D = 0;
          P_D = "0";
          R_D = 0;

          S_S = 0;
          P_S = "0";
          R_S = 0;
        }   

        //--------- Son's Daughter -------
        if (SD > 0 && SS == 0 && D == 0 && S == 0)
        {
          if (SD >= 2)
          {
            S_SD = (((Total * 2) / 3) / SD);
            P_SD = "2/3";
            R_SD = 1;

            S_SS = 0;
            P_SS = "0";
            R_SS = 0;
          }
          else if (SD = 1)
          {
            S_SD = ((Total / 2) / SD);
            P_SD = "1/2";
            R_SD = 1;
            
            S_SS = 0;
            P_SS = "0";
            R_SS = 0;
          }
        }
        else if (SD > 0 && SS > 0 && D == 0 && S == 0)
        {
          S_SD = ((Total / 2) / SD);
          P_SD = "2:1";
          R_SD = 1;

          S_SS = (Total / SS);
          P_SS = "2:1";
          R_SS = 1;
        }
        else if (SD == 0 && SS > 0 && D == 0 && S == 0)
        {
          S_SD = 0;
          P_SD = "0";
          R_SD = 0;

          S_SS = (Total / SS);
          P_SS = "2:1";
          R_SS = 1;
        }
        else
        {
          S_SD = 0;
          P_SD = "0";
          R_SD = 0;

          S_SS = 0;
          P_SS = "0";
          R_SS = 0;
        }

        //--------- Son's Son's Daughter -------
        if (SSD > 0 && SSS == 0 && SD == 0 && SS == 0 && D == 0 && S == 0)
        {
          if (SSD >= 2)
          {
            S_SSD = (((Total * 2) / 3) / SSD);
            P_SSD = "2/3";
            R_SSD = 1;

            S_SSS = 0;
            P_SSS = "0";
            R_SSS = 0;
          }
          else if (SSD = 1)
          {
            S_SSD = ((Total / 2) / SSD);
            P_SSD = "1/2";
            R_SSD = 1;
            
            S_SSS = 0;
            P_SSS = "0";
            R_SSS = 0;
          }
        }
        else if (SSD > 0 && SSS > 0 && SD == 0 && SS == 0 && D == 0 && S == 0)
        {
          S_SSD = ((Total / 2) / SSD);
          P_SSD = "2:1";
          R_SSD = 1;

          S_SSS = (Total / SSS);
          P_SSS = "2:1";
          R_SSS = 1;
        }
        else if (SSD == 0 && SSS > 0 && SD == 0 && SS == 0 && D == 0 && S == 0)
        {
          S_SSD = 0;
          P_SSD = "0";
          R_SSD = 0;

          S_SSS = (Total / SSS);
          P_SSS = "2:1";
          R_SSS = 1;
        }
        else
        {
          S_SSD = 0;
          P_SSD = "0";
          R_SSD = 0;

          S_SSS = 0;
          P_SSS = "0";
          R_SSS = 0;
        }

        //========================================-------    IK   ------========================================

        if (S == 0 && D == 0 && SS == 0 && SSS == 0 && SD == 0 && SSD == 0 && F == 0 && FF == 0)
        {
        //-------Real Sister------
          if(RS > 0 && RB == 0)
          {
            if(RS >= 2)
            {
                S_RS = (((Total * 2) / 3) / RS);
                P_RS = "2/3";
                R_RS = 4;

                S_RB = 0;
                P_RB = "0";
                R_RB = 0;
            }
            else if(RS == 1)
            {
                S_RS = ((Total / 2) / RS);
                P_RS = "1/2";
                R_RS = 4;

                S_RB = 0;
                P_RB = "0";
                R_RB = 0;               
            }
          }
          else if(RS > 0 && RB > 0)
          {
            S_RS = ((Total / 2) / RS);
            P_RS = "2:1";
            R_RS = 4;

            S_RB = (Total / RB);
            P_RB = "2:1";
            R_RB = 4;   
          }
          else  if(RS == 0 && RB > 0)
          {
            S_RS = 0;
            P_RS = "0";
            R_RS = 0;

            S_RB = (Total / RB);
            P_RB = "2:1";
            R_RB = 4;
          }
          else
          {
            S_RS = 0;
            P_RS = "0";
            R_RS = 0;

            S_RB = 0;
            P_RB = "0";
            R_RB = 0;
          }

          //------ Paternal sister ----

          if(PS > 0 && PB == 0 && RS == 0 && RB == 0)
          {
            if(PS >= 2)
            {
                S_PS = (((Total * 2) / 3) / PS);
                P_PS = "2/3";
                R_PS = 4;

                S_PB = 0;
                P_PB = "0";
                R_PB = 0;
            }
            else if(PS == 1)
            {
                S_PS = ((Total / 2) / PS);
                P_PS = "1/2";
                R_PS = 4;

                S_PB = 0;
                P_PB = "0";
                R_PB = 0;               
            }
          }
          else if(PS > 0 && PB > 0 && RS == 0 && RB == 0)
          {
            S_PS = ((Total / 2) / PS);
            P_PS = "2:1";
            R_PS = 4;

            S_PB = (Total / PB);
            P_PB = "2:1";
            R_PB = 4;   
          }
          else  if(PS == 0 && PB > 0 && RS == 0 && RB == 0)
          {
            S_PS = 0;
            P_PS = "0";
            R_PS = 0;

            S_PB = (Total / PB);
            P_PB = "2:1";
            R_PB = 4;
          }
          else
          {
            S_PS = 0;
            P_PS = "0";
            R_PS = 0;

            S_PB = 0;
            P_PB = "0";
            R_PB = 0;
          }

          //------- Maternal sibling ----------

          if(MB > 0)
          {
            if(MB >= 2)
            {
                S_MB = ((Total / 3) / MB);
                P_MB = "1/3";
                R_MB = 2;
            }
            else if(MB == 1)
            {
                S_MB = ((Total / 6) / MB);
                P_MB = "1/6";
                R_MB = 2;               
            }
            else
            {
                S_MB = 0;
                P_MB = "0";
                R_MB = 0;             
            }
          }

          if(MS > 0)
          {
            if(MS >= 2)
            {
                S_MS = ((Total / 3) / MS);
                P_MS = "1/3";
                R_MS = 2;
            }
            else if(MS == 1)
            {
                S_MS = ((Total / 6) / MS);
                P_MS = "1/6";
                R_MS = 2;               
            }
            else
            {
                S_MS = 0;
                P_MS = "0";
                R_MS = 0;             
            }
          }
        }
        else
        {
          S_MS = 0;
          P_MS = "0";
          R_MS = 0;  
    
          S_MB = 0;
          P_MB = "0";
          R_MB = 0;  

          S_RS = 0;
          P_RS = "0";
          R_RS = 0;  
    
          S_RB = 0;
          P_RB = "0";
          R_RB = 0;  
    
          S_PS = 0;
          P_PS = "0";
          R_PS = 0;  
    
          S_PB = 0;
          P_PB = "0";
          R_PB = 0;  
    
        }
        // cout<<" Loading........... "<<endl;
        // cout<<endl;
        // cout<<endl;
        // cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        // system("CLS");
        SetConsoleTextAttribute(h,5);
        cout << "\t|"<< "-----|"<< "---------------------------|----" <<"-----"<< "----|----" <<"-----"<< "------|----" <<"---------"<< "--|" << endl;
        cout << "\t|"<< " No. |"<< "           Heir            |    " <<"Share"<< "    |    " <<"Share"<< "      |    " <<"Reference"<< "  |" << endl;
        cout << "\t|"<< "-----|"<< "---------------------------|----" <<"-----"<< "----|----" <<"-----"<< "------|----" <<"---------"<< "--|" << endl;
        cout << "\t|"<< " 1.  |"<< "  Husband                  |\t" << P_H   << "\t|\t" << S_H   << "\t|\t" << R_H       << "\t|" << endl;
        cout << "\t|"<< " 2.  |"<< "  Wife                     |\t" << P_W   << "\t|\t" << S_W   << "\t|\t" << R_W       << "\t|" << endl;
        cout << "\t|"<< " 3.  |"<< "  Father                   |\t" << P_F   << "\t|\t" << S_F   << "\t|\t" << R_F       << "\t|" << endl;
        cout << "\t|"<< " 3.  |"<< "  Father's Father          |\t" << P_FF  << "\t|\t" << S_FF  << "\t|\t" << R_FF      << "\t|" << endl;
        cout << "\t|"<< " 4.  |"<< "  Mother                   |\t" << P_M   << "\t|\t" << S_M   << "\t|\t" << R_M       << "\t|" << endl;
        cout << "\t|"<< " 5.  |"<< "  Son                      |\t" << P_S   << "\t|\t" << S_S   << "\t|\t" << R_S       << "\t|" << endl;
        cout << "\t|"<< " 6.  |"<< "  Son's Son                |\t" << P_SS  << "\t|\t" << S_SS  << "\t|\t" << R_SS      << "\t|" << endl;
        cout << "\t|"<< " 7.  |"<< "  Son's Son's Son          |\t" << P_SSS << "\t|\t" << S_SSS << "\t|\t" << R_SSS     << "\t|" << endl;
        cout << "\t|"<< " 8.  |"<< "  Daughter                 |\t" << P_D   << "\t|\t" << S_D   << "\t|\t" << R_D       << "\t|" << endl;
        cout << "\t|"<< " 9.  |"<< "  Son's Daughter           |\t" << P_SD  << "\t|\t" << S_SD  << "\t|\t" << R_SD      << "\t|" << endl;
        cout << "\t|"<< " 10. |"<< "  Son's Son's Daughter     |\t" << P_SSD << "\t|\t" << S_SSD << "\t|\t" << R_SSD     << "\t|" << endl;
        cout << "\t|"<< " 11. |"<< "  Real Brother             |\t" << P_RB  << "\t|\t" << S_RB  << "\t|\t" << R_RB      << "\t|" << endl;
        cout << "\t|"<< " 12. |"<< "  Real Sister              |\t" << P_RS  << "\t|\t" << S_RS  << "\t|\t" << R_RS      << "\t|" << endl;
        cout << "\t|"<< " 13. |"<< "  Paternal Brother         |\t" << P_PB  << "\t|\t" << S_PB  << "\t|\t" << R_PB      << "\t|" << endl;
        cout << "\t|"<< " 14. |"<< "  Paternal Sister          |\t" << P_PS  << "\t|\t" << S_PS  << "\t|\t" << R_PS      << "\t|" << endl;
        cout << "\t|"<< " 15. |"<< "  Maternal Brother         |\t" << P_MB  << "\t|\t" << S_MB  << "\t|\t" << R_MB      << "\t|" << endl;
        cout << "\t|"<< " 16. |"<< "  Maternal Sister          |\t" << P_MS  << "\t|\t" << S_MS  << "\t|\t" << R_MS      << "\t|" << endl;
        cout << "\t|-------------------------------------------------------------------------------|" <<endl;
        cout<<endl;
        cout<<endl;
        SetConsoleTextAttribute(h,8);
        cout<< "\t-------Reference-----------------------------------------------------------------" << endl;
        cout<<endl;
        cout<<endl;
        if(R_S == 1 || R_SS == 1 || R_SSS == 1 || R_D == 1 || R_SD == 1 || R_SSD == 1 || R_F == 1 || R_FF == 1 || R_M == 1)
        {
        cout<< "1." << endl;
        cout<< "Allah commands you regarding your children: the share of the male will be twice \nthat of the female." << endl;
        cout<< "If you leave only two (or more) females, their share is two-thirds of the estate." << endl;
        cout<< "But if there is only one female, her share will be one-half." << endl;
        cout<< "Each parent is entitled to one-sixth if you leave offspring" << endl;
        cout<< "But if you are childless and your parents are the only heirs, then your mother \nwill receive one-third." << endl;
        cout<< "But if you leave siblings, then your mother will receive one-sixth" << endl;
        cout<< "after the fulfilment of bequests and debts.(Be fair to) your parents and children, \nas you do not (fully) know who is more beneficial to you." << endl;
        cout<< "(This is) an obligation from Allah. Surely Allah is All-Knowing, All-Wise." << endl;
        cout<< "\t (Quran 4:11)" << endl;
        cout<<endl;
        cout<<endl;
        }
        if(R_H == 2 || R_W == 2 || R_MB == 2 || R_MS == 2)
        {
        cout<< "2." << endl;
        cout<< "You will inherit half of what your wives leave if they are childless. But if they \nhave children, then (your share is) one-fourth of the estate after the fulfilment of bequests and debts." << endl;
        cout<< "And your wives will inherit one-fourth of what you leave if you are childless. But \nif you have children, then your wives will receive one-eighth of your estate after the fulfilment of bequests and debts." << endl;
        cout<< "And if a man or a woman leaves neither parents nor children but only a brother or a \nsister (from their mother’s side), they will each inherit one-sixth, but if they are more than one, they (all) will \nshare one-third of the estate after the fulfilment of bequests and debts without harm (to the heirs)." << endl;
        cout<< "(This is) a commandment from Allah. And Allah is All-Knowing, Most Forbearing." << endl;
        cout<< "\t (Quran 4:12)" << endl;
        cout<<endl;
        cout<<endl;
        }
        if(R_RS == 4 || R_RB == 4 || R_PS == 4 || R_PB == 4)
        {
        cout<< "4." << endl;
        cout<< "They ask you (for a ruling, O  Prophet). Say, Allah gives you a ruling regarding \nthose who die without children or parents." << endl;
        cout<< "If a man dies childless and leaves behind a sister, she will inherit one-half of \nhis estate," << endl;
        cout<< "whereas her brother will inherit all of her estate if she dies childless. " << endl;
        cout<< "If this person leaves behind two sisters, they together will inherit two-thirds of \nthe estate." << endl;
        cout<< "But if the deceased leaves male and female siblings, a male’s share will be equal \nto that of two females. " << endl;
        cout<< "Allah makes (this) clear to you so you do not go astray. And Allah has (perfect) \nknowledge of all things. " << endl;
        cout<< "\t (Quran 4:176)" << endl;
        cout<<endl;
        cout<<endl;
        }
        cout<< "\t---------------------------------------------------------------------------------" << endl;
        cout<< "\t=================================================================================" << endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
      }
};

int main()
{
  HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
  inheritance obj;
  string n;
  int ch;

  SetConsoleTextAttribute(h,5);
  cout<<"--------------------------------------------------------------------------------"<<endl;
  cout<<"--|                                                                          |--"<<endl;
  cout<<"--|                         'A commandment from God'                         |--"<<endl;
  cout<<"--|                                                                          |--"<<endl;
  cout<<"--------------------------------------------------------------------------------"<<endl;
  cout<<endl;

  do
  {
    SetConsoleTextAttribute(h,11);
    cout<<endl;
    cout<<"1 -> Calculate "<<endl;
    cout<<"2 -> Quit "<<endl;
    cout<<endl;
    cout<<"  -> ";
    cin>> ch;

    switch (ch)
    {
      case 1:
        cout<<endl;
        obj.Calculate();
        break;  
          
      case 2:
        SetConsoleTextAttribute(h,4);
        cout<<endl;
        cout<<"  Do you really want to Exit...!  (yes/no)"<<endl;
        cout<<"  -> ";
        cin>>n;
        break;
    }
    SetConsoleTextAttribute(h,7);
  } 
  while(n != "yes");

  return 0;
}