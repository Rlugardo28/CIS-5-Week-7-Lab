#include <iostream>
// Lab 7 — Raymundo Lugardo
// CIS 5 Week 07 · Two arrays
  using namespace std;

  int main() {
    const int N = 5;

    
    int quiz[N] = {88, 92, 70, 95, 81};
    int lab[N] = {70, 70, 70, 70, 70};

    cout << "Quiz\n";
    int quizSum = 0;
    int quizHigh = quiz[0]; 

    for (int i = 0; i < N; ++i) {
       
        cout << "[" << i << "] " << quiz[i] << "\n";
        
        quizSum += quiz[i];
        
         if (quiz[i] > quizHigh) {
            quizHigh = quiz[i];
        }
    }
    cout << "Sum: " << quizSum << "\n";
    cout << "High: " << quizHigh << "\n";

    cout << "\nLab\n";
    int labSum = 0;
    int labHigh = lab[0]; 

    for (int i = 0; i < N; ++i) {
        
        cout << "[" << i << "] " << lab[i] << "\n";
        
        
        labSum += lab[i];
        
        
        if (lab[i] > labHigh) {
            labHigh = lab[i];
        }
    }
    cout << "Sum: " << labSum << "\n";
    cout << "High: " << labHigh << "\n";

  return 0;
}
