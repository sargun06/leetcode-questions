class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> people(num_people,0);
        int candy=1;
        int i=0;
        while(candies)
        {
            people[i]+=min(candies,candy++);
            candies-=min(candies,candy-1);
            i=(i+1)%num_people;
        }
        return people;
    }
};