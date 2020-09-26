#include <iostream>
#include <string>
#include <cstdlib>

int main() {

    int correct = 0;
    int total = 0;

    //GET https://api.twitter.com/1.1/statuses/user_timeline.json?screen_name=twitterapi?count=100

    //Can not figure out how to load tweets from twitter
    std::string kTweets[10] = {"This is who we really are",
                               "Ernesto Neto",
                               "You guys like stuff ? Hedgehog",
                               "Bowl",
                               "2020 hoodie",
                               "Pockets",
                               "Color",
                               "Food",
                               "Bianca Saunders",
                               "David Koma      I liked this collection a lot"};

    std::string eTweets[10] = {"What can’t we predict?",
                               "Only thing beyond ludicrous is plaid",
                               "Cybertruck, ATV, Roadster & Semi\nC A R S",
                               "Important note about Tesla Battery Day unveil tomorrow. This affects long-term production, especially Semi, Cybertruck & Roadster, but what we announce will not reach serious high-volume production until 2022.",
                               "We intend to increase, not reduce battery cell purchases from Panasonic, LG & CATL (possibly other partners too). However, even with our cell suppliers going at maximum speed, we still foresee significant shortages in 2022 & beyond unless we also take action ourselves.",
                               "The extreme difficulty of scaling production of new technology is not well understood. It’s 1000% to 10,000% harder than making a few prototypes. The machine that makes the machine is vastly harder than the machine itself.",
                               "If you feel Neuralink might have incorrectly overlooked your resume or declined to  make an offer, please lmk in comment below",
                               "of course I still love you",
                               "Speedrunning Factorio in real life …",
                               "Fallout Shelter is on your Tesla. Tap the Entertainment button."};

    bool play = true;
    while(play) {
        int kOrE = rand() % 2 + 1;
        int tweet = rand() % 10;
        if (kOrE == 1) {
            std::cout << kTweets[tweet] << std::endl;
        } else std::cout << eTweets[tweet] << std::endl;
        std::cout << "\nWho do you think tweeted this?\nType 1 for Kanyewest and 2 for Elon Musk!" << std::endl;

        int guess;
        std::cin >> guess;

        if (guess == kOrE) {
            correct++;
            std::cout << "That right!"<<std::endl;
        } else std::cout<<"Nope, that's not it!"<<std::endl;
        std::cout<<"Want to play again?\nType Y for yes and N for no" << std::endl;
        char again;
        std::cin >> again;
        if(again=='n'||again=='N'){
            play = false;
        } else play = true;
        total++;
    }
    std::cout<<"Thanks for playing!"<<std::endl;
    std::cout<<"Total times played: ";
    std::cout<<total<<std::endl;
    std::cout<<"Total correct guesses: ";
    std::cout<<correct<<std::endl;

    return 0;
}
