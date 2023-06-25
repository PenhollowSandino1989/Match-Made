#include<iostream> 
#include <string>
using namespace std;

// Declaring Class 
class matchmaking_service
{ 
    string name;
    string gender;
    string interests;
    
public: 
    // Constructors 
    matchmaking_service(){
        name = "";
        gender= "";
        interests= "";
    }
    // Constructors with parameters
    matchmaking_service(string n, string g, string i){
        name = n;
        gender = g;
        interests = i;
    }
    // Getters
    string get_name(){
        return name;
    }
    string get_gender(){
        return gender;
    }
    string get_interests(){
        return interests;
    }
    // Setters
    void set_name(string n){
        name = n;
    }
    void set_gender(string g){
        gender = g;
    }
    void set_interests(string i){
        interests = i;
    }
    // Function to create a profile 
    void create_profile(){
        cout<<"Creating Profile..."<<endl;
        cout<<"Please enter your name: ";
        getline(cin,name);
        cout<<"Please enter your gender: ";
        getline(cin,gender);
        cout<<"Please enter your interests: ";
        getline(cin,interests);
        cout<<"Profile created successfully"<<endl;
    }
    // Function to match user with potential partners
    void match_user(){
        cout<<"Matching you with potential partners..."<<endl;
        cout<<"Matching Completed"<<endl;
        display_match_partners();
    }
    // Function to display user matches 
    void display_match_partners(){
        cout<<"Following are your potential partners: "<<endl;
        cout<<"Name: John, Gender: Male, Interests: Movies"<<endl;
        cout<<"Name: Sarah, Gender: Female, Interests: Art"<<endl;
        cout<<"Name: Andy, Gender: Male, Interests: Video Games"<<endl;
        cout<<"Name: Emma, Gender: Female, Interests: Music"<<endl;
    }
}; 

int main() 
{ 

// creating object of matchmaking_service 
matchmaking_service user1; 

// Calling create_profile() 
user1.create_profile(); 

// calling match_user() 
user1.match_user(); 

return 0; 

}