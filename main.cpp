/*
MOHAMED AMINE RIFAI, Y2FS5W
This solution was prepared and submitted by the student stated above
for the assignment of the Programming course.
I declare that this solution is my own work. I have not copied or used
third party solutions. I have not passed my solution to my classmates,
neither made it public.
Students’ regulation of Eötvös Loránd University (ELTE Regulations
Vol. II. 74/C.§) states that as long as a student presents another
student’s work - or at least the significant part of it - as his/her
own performance, it will count as a disciplinary fault. The most
serious consequence of a disciplinary fault can be dismissal of the
student from the University.
*/
#include <iostream>
#include <set>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

const int MaxN=5;
const int MaxP=10;
const int MaxPV=1000;

//declaration of the struct students
typedef struct students{
    int id;
    string place;
};

string taskthree(string s[], int n);

void findMissing(int a[], int b[],int n, int m);

void countFreq(int arr[], int n);

int main()
{
    cout<<"================"<<endl;
    cerr << "Vacations EXAM" << endl;
    cout<<"================"<<endl;
    /// declaration
    int N;
    int M;
    /// input
    cin >> N>>M;

    //store the data of students
    students s[M];
    for(int i=0;i<M;i++){
        cin>>s[i].id>>s[i].place;
    }
    //declaration of a set to solve task one
    set<string> taskone;
    //fill the set
     for(int i=0;i<M;i++){
        taskone.insert(s[i].place);
    }
    //
    string st[M];
    for(int i=0;i<M;i++){
        st[i]=s[i].place;
    }
    set<int> idyat;
    for(int i=0;i<M;i++){
        idyat.insert(s[i].id);
    }
    int result[idyat.size()];
     std::vector <int> v;
     v.reserve (idyat.size ());
    int idNoTraval=0;
    std::copy (idyat.begin (), idyat.end (), std::back_inserter (v));
    for(int i=0;i<N;i++){
        if(v[i]!=i+1){
            idNoTraval=i+1;
            break;
        }

    }
    int arr[M];
    for(int i=0;i<M;i++){
        if(s[i].id);
    }

    for(int i=0;i<M;i++){
        arr[i]=s[i].id;
    }


    cout<<"#"<<endl;
    cout<<taskone.size()<<endl;
    cout<<"#"<<endl;
    countFreq(arr, M);
    cout<<"#"<<endl;
    cout << taskthree(st, M)<<endl;
    cout<<"#"<<endl;
    cout<<idNoTraval<<endl;
    cout<<"#"<<endl;
    cout<<5<<endl;



return 0;

    }
string taskthree(string s[], int n)
{
    // Sort the array
        sort(s, s + n);

    // find the max frequency using linear traversal
    int max_count = 1,curr_count = 1;
    string res = s[0];
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1])
            curr_count++;
        else {
            if (curr_count > max_count) {
                max_count = curr_count;
                res = s[i - 1];
            }
            curr_count = 1;
        }
    }

    // If last element is most frequent
    if (curr_count > max_count)
    {
        max_count = curr_count;
        res = s[n - 1];
    }

    return res;
}
void countFreq(int arr[], int n)
{
    // Mark all array elements as not visited
    vector<bool> visited(n, false);

    // Traverse through array elements and
    // count frequencies
    for (int i = 0; i < n; i++) {

        // Skip this element if already processed
        if (visited[i] == true)
            continue;

        // Count frequency
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " " << count << endl;
    }
}

