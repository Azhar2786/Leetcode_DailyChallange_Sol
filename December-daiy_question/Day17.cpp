
//! 2353. Design a Food Rating System





class FoodRatings {
public:

    unordered_map<string, set<pair<int,string>>>cuisinesRating;
    unordered_map<string, int>foodRating;
    unordered_map<string, string>foodToCuisines;

    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for(int i=0 ; i<foods.size() ; i++){
           cuisinesRating[cuisines[i]].insert({-ratings[i],foods[i]});
           foodRating[foods[i]] = ratings[i];
           foodToCuisines[foods[i]] = cuisines[i];
        }
    }
    
    void changeRating(string food, int newRating){
       int oldr = foodRating[food];

       cuisinesRating[foodToCuisines[food]].erase({-oldr,food});

       cuisinesRating[foodToCuisines[food]].insert({-newRating,food});

       foodRating[food]=newRating;
    }
    
    string highestRated(string cuisine){

        return begin(cuisinesRating[cuisine])->second;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */