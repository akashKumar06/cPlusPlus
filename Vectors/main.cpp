#include <iostream>
#include <vector>


using namespace std;

int main(){
//    vector <char> vowles //empty
//    vector <char> vowels (5); //vowles initialized to 0;
    vector <char> vowels {'a','e','i','o','u'};
    
    cout<<vowels[0]<<endl;
    cout<<vowels[4]<<endl;
    //array syntax does not do biunce checking;
    
//    vector <int> test_scores (3); // 3 elements all initialized to zero
//    vector <int> test_scores (3,100);  //3 elements all initialized to 100
    
    vector <int> test_scores {100,98,89};
    
    cout<<"\nTest scores using array syntax: "<<endl;
    cout<< test_scores[0]<<endl;
    cout<< test_scores[1]<<endl;
    cout<< test_scores[2]<<endl;
    
    cout<<"\nTest scores using vector syntax: "<<endl;
    cout<<test_scores.at(0)<<endl;
    cout<<test_scores.at(1)<<endl;
    cout<<test_scores.at(2)<<endl;
    cout<<"\nThere are "<<test_scores.size()<<" scores in the vector"<<endl;
    
    cout<<"Enter three test socres: ";
    cin>> test_scores.at(0);
    cin>> test_scores.at(1);
    cin>> test_scores.at(2);
    
    cout<<"\nUpdated test scores: "<<endl;
    cout<<test_scores.at(0)<<endl;
    cout<<test_scores.at(1)<<endl;
    cout<<test_scores.at(2)<<endl;
    
    cout<<"\nEnter a test score to add to the vector: ";
    int score_to_add;
    cin>>score_to_add;
    test_scores.push_back(score_to_add);
    
    cout<<"\nEnter one more test score to add: "<<endl;
    cin>>score_to_add;
    test_scores.push_back(score_to_add);
    

    cout<< "\nTest scores are now: "<<endl;
    cout<<test_scores.at(0)<<endl;
    cout<<test_scores.at(1)<<endl;
    cout<<test_scores.at(2)<<endl;
    cout<<test_scores.at(3)<<endl;
    cout<<test_scores.at(4)<<endl;
    
    cout<<"\nThere are "<<test_scores.size()<<" scores in the vector";
    
//    cout<<"This sholud cause an exception!!!"<<test_scores.at(10);
    
    //example of a 2D vector
    vector <vector<int>> movie_ratings{
      {1,2,4,5},
      {1,4,3,4},
      {2,3,4,5}  
    };
    
    cout<<"\nHere are the movie ratings for reviewer #1 array syntax: "<<endl;
    cout<<movie_ratings[0][0]<<endl;
    cout<<movie_ratings[0][1]<<endl;
    cout<<movie_ratings[0][2]<<endl;
    cout<<movie_ratings[0][3]<<endl;

    cout<<"\nHere are the movie ratings for reviewer #1 vector syntax: "<<endl;
    cout<<movie_ratings.at(0).at(0)<<endl;
    cout<<movie_ratings.at(0).at(1)<<endl;
    cout<<movie_ratings.at(0).at(2)<<endl;
    cout<<movie_ratings.at(0).at(3)<<endl;

    return 0;
}