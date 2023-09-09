#include<bits/stdc++.h>
using namespace std;


//////////////////////////////

class Math{
public:

    long long power(int base, int pow) {
    long long result = 1;
    for(int i=1; i<=pow; i++) {
        result*=base;
    }

    return result;
    }

    double sum(double a , double b) {
        return a+b;
    }

    int sum(int a, int b) {
        return a+b;
    }
    int nSum(int n) {

        int sum = 0;

        for(int i=0; i<=n; i++) {
            sum += i;
        }

    return sum;
    }
    double subtract(double a , double b) {
        return a-b;
    }

    int subtract(int a, int b) {
        return a-b;
    }

    long long factorial(int n) {
        long int fact=1;
        for(int i=1; i<=n; i++) {
            fact*=i;
        }

        return fact;
    }


    double mult(double a, double b) {
        return a*b;
    }
    int mult(int a, int b) {
        return a*b;
    }
    double divide(double a, double b) {
        return a/b;
    }
    int divide(int a, int b) {
        return a/b;
    }
    int rem(int a, int b) {
        return a%b;
    }
    ////round off to desired index:::

    double roundOff(double num, int idx) {

    

        if(idx == 0 || idx < 0) {
            return round(num);
        }

        
        string number = to_string(num);
        string storeNum;
        
        int count = idx+1;
        int i=0;
        for( i; i<number.length(); i++) {
            if(number[i] == '.') {
                
                break;
            }
            storeNum += number[i];
        }

        

        while(count--) {
            if(i>number.length()) {
                break;
            }
            storeNum+=number[i];
            i++;
        }

        

        return stod(storeNum);

    }
        

};

Math math;
////////////////////////////

const char* RecommendFood(char firstLetter) {

    //converting To lowercase:
    //char letter = tolower(firstLetter);
    ///

    if(firstLetter == 'a') {
        return "apple";
    }else if(firstLetter == 'b' ) {
        return "banana";
    }else if(firstLetter == 'c' ) {
        return "Chocolate cake";
    }else {
        return "fuckOff";
    }

    
}



void print(const char* message) {
    std::cout << message << std::endl;
}

bool findWord(string sentence, string word) {

    transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower);

    if (sentence.find(word) != string::npos) {
        // cout << "The word \"" << word << "\" was found in the sentence." << endl;
        return 1;
    } else {
        // cout << "The word \"" << word << "\" was not found in the sentence." << endl;
        return 0;
    }

}

char getLetter(string s, char c) {

    for(int i=0; i<=s.length(); i++) {
        if(tolower(s[i]) == tolower(c)) {
            return s[i];
        }

    }
    
}

bool isPalindrome(string word) {
    string s = word;
    reverse(word.begin(), word.end());

    if(s == word) {
        return 1;
    }
    return 0;
     

}

bool isPalindrome(int number) {

    int storeNum = number;
    int rev=0;
    while(number!=0) {
        int rem = number%10;
        rev = rev*10 + rem;
        number/=10;
    }

    if(storeNum == rev) {
        return 1;
    }
    return 0;
}


long long countWords(string s) {
    long long word = 0;
    for(int i=0; i<=s.length(); i++) {
        if(s[i]==' ' || i==s.length()) {
            
            word++;
        }
        
    }
    return word;
}

long long countLetters(string s) {
    long long count = 0;
    for(int i=0; i<s.length(); i++) {
        
        count++;
    }

    return count;
}





string lowerCase(string name) 
{
    for(int i=0; i<name.length(); i++) 
    {
        name[i] = tolower(name[i]);
    }

    return name;
}


string upperCase(string str) {
    transform(str.begin(), str.end(), str.begin(),::toupper);
    return str;
}
//generating Random Number::

int generateRandInt() {
    srand(time(0));

    int randomNumber = rand()%100 +1;

    return randomNumber;
}


//////////////////////////////////////slangDetector::::::::::::::
void slangDetect(string comment) {
    
    string slangList[] = {"fuck","sex","bsdk","bhosdike"};
    
    bool flag = false;
    for(int i=0; i<slangList->length(); i++) {
        if(findWord(comment, slangList[i])) {

            cout<<"Don't use slangs like "<<slangList[i]<<" in the chat.\n";
            

            flag = true;
            break;
        }else{
            continue;
        }
        
    }

    if(flag==false) {
        cout<<"No slang found!\n";
    }
}


//Armstrong:::
bool isArmstrong(int number) {
    int armStrong =0;
    int stroreNum = number;

    string numStr = to_string(number);

    int numLength = numStr.length();

    while(number !=0) {
        

        int lastDigit = number%10;

        armStrong += math.power(lastDigit,numLength);

        number/=10;
    }

    if(stroreNum == armStrong) {
        return 1;
    }
    return 0;
}

void inputArr(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cin>>arr[i];
    }
}

void inputArr(string arr[], int size) {

    for(int i=0; i<size; i++) {
        getline(cin, arr[i]);
    }
}

void clearArr(string arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        arr[i]="";
    }
}


void printArr(int arr[], int size ) {
    cout<<"[ ";
    for(int i=0 ; i<size; i++) {
        
        cout<<arr[i];
        if(i!=size-1) {
            cout<<", ";
        }
    }
    cout<<" ]";
}

void printArr(string arr[], int size ) {


    if(arr[0] == "")
    {
        cout<<"\n[ ! List is Empty ! ]\n";
        return;
    }
    cout<<"[ ";
    for(int i=0 ; i<size; i++) {
        
        cout<<arr[i];
        if(i!=size-1) {
            cout<<", ";
        }
    }
    cout<<" ]";
}

int getMax(int arr[], int size) {
    int max = arr[0];
    for(int i=0; i<size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int getMin(int arr[], int size) {
    int min = arr[0];
    for(int i=0; i<size; i++) {
        if(arr[i] < min ) {
            min = arr[i];
        }
    }

    return min;
}

///////////////////////////////////////////////////////////////////

///read & Write::::::::::::::::::::::::

void storeData(string fileName, string type ,string data) {
    fstream myFile;
    myFile.open(fileName+".txt", ios::app) ;
    if(myFile.is_open()) {
        myFile<<type<<" : "<<data<<endl;
        myFile.close();
    }
}

void storeFreshData(string fileName,string type ,string data) {
    fstream myFile;
    myFile.open(fileName+".txt", ios::out) ;
    if(myFile.is_open()) {
        myFile<<type<<" : "<<data<<endl;
        myFile.close();
    }
}
void storeFreshData(string fileName ,string data) {
    fstream myFile;
    myFile.open(fileName+".txt", ios::out) ;
    if(myFile.is_open()) {
        myFile<<data<<endl;
        myFile.close();
    }
}

void readData(string fileName) {
    fstream myFile;
    myFile.open(fileName+".txt", ios::in);
    if(myFile.is_open()) {
        string line;
        while(getline(myFile,line)) {
            cout<<line<<endl;
        }
    }
    else {
        cout<<"invalid FileName!"<<endl;
    }
}
string returndData(string fileName) {
    fstream myFile;
    myFile.open(fileName+".txt", ios::in);
    if(myFile.is_open()) {
        string line;
        while(getline(myFile,line)) {
            string str = line;
            return str;
        }
    }else{
        return "null";
    }
}

//////////////Dangerous Function . It can Delete any of Your File and you can't restore that file!!!!!!//////////////
bool removeFile(const char* fileName)
{
    
    int status;
    status = remove(fileName);

    if(status == 0)
    {
        return 1;
    }else {
        return 0;
    }
}

//:::::::::::::::::::::::::::::::::::::::

void printVector(vector<string>v ) {

    cout<<"{ ";
    for(int i=0; i<v.size(); i++) {
        if(i != v.size()-1) {
            cout<<v[i]<<",";
        }
        cout<<v[i]<<" }";
        
    }
}
void printVector(vector<int>v ) {

    cout<<"{ ";
    for(int i=0; i<v.size(); i++) {        
        
        if(i == v.size()-1) {
            cout<<v[i]<<" }";
        }else{
            cout<<v[i]<<", ";
        }
        
        
        
    }
}


//::::::::::::::::
void pressEnterToContinue()
{
    cout<<"\n\n...Press Enter To Continue...";
    char temp = 'x';
    while (temp != '\n')
    cin.get(temp);

}