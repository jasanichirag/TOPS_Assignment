#include <iostream>
#include <iomanip>
    using namespace std;
    int n;
    class cricketer
    {
    public:
        int run[7];
        string name;
        void inputRun()
        {
            cout << "\nEnter batsMam Name : ";
            getline(cin, name);
            getline(cin, name);
            int j = 0;
            cout << "\n\t*Enter 7 Matches Run :-\n";
            for (int i = 0; i < 7; i++)
            {
                cout << "Enter match Run [" << ++j << "] : ";
                cin >> run[i];
            }
            cout << "\n\t\t::::" << endl;
        }
    };
    class batsman : public cricketer
    {
    public:
        // input data :
        int TotalRun = 0;
        float AverageRun;
        int bestParformance = 0;
        
       
        void calculateAvrg()
        {
            for (int i = 0; i < 7; i++)
            {
                TotalRun += run[i];
                AverageRun = (float)TotalRun / (float)7;
            }
            for (int i = 0; i < 7; i++)
            {
                if (run[i] > AverageRun)
                {
                    bestParformance++;
                }
            }
        }

        void DisplayData()
        {
            cout << "\nCricketer Name :" << name;
            cout << "\nCricket Match Run : [ ";
            for (int i = 0; i < 7; i++)
            {
                cout << run[i] << ",";
            }
            cout << " ]\nTotal Run : " << TotalRun << endl;
            cout << "Average Run : " << fixed << setprecision(2) << AverageRun << endl;
            cout << "Best Performance : " << bestParformance << endl;
            cout << "\n\t\t::::" << endl;
        }
    };
    int main()
    {

        // ----> Assume a class cricketer is declared. Declare a derived class batsman from        cricketer.Data member of batsman.Total runs, Average runs and best performance.Member functions input data, calculate average runs, Display data.(Single Inheritance) :-
        cout << "\n\n\t\t*CRICKET MATCH FUNCTION ::-\n\n ";
        cout << "Enter Total Batsman : ";
        cin >> n;
        batsman s[n];
        cout << "\n\t\t-:: ENTER BATSMAN INFORMATION ::-" << endl;
        for (int i = 0; i < n; i++)
        {
            s[i].inputRun();
            s[i].calculateAvrg();
        }
        cout << "\n\n\t\t-:: DISPLAY INFORMATION ::-\n";

        for (int i = 0; i < n; i++)
        {
            s[i].DisplayData();
        }

        return 0;
    }

