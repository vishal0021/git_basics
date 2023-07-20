#include<iostream>
#include<vector>


using namespace std;

//code to muliply 2 vector element wise using cpp vectors

void display(vector <int> arr)
{
    for(int i =0; i<arr.size();i++)
    {
        cout<<arr[i]<<endl;
    }

}

int main()
{
    vector<int> vect1 = {1,2,3,4,5,6};
    vector<int> vect2 = {1,2,3,4,5,6};
    vector<int> vect3;


    for(int x =0; x<vect1.size(); x++)
    {
        vect3.push_back(vect1[x] * vect2[x]);
    }

    display(vect3);
    
    return 0;
}