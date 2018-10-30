#include <iostream>
#include <string>


int main()
{
    std::string url = "https//www.reddit.com/r/nevertellmethebots";

    std::string from = "https//www.reddit.com/r/nevertellmethebots";

    int start_pos = url.find(from);
    if(start_pos == std::string::npos) //does the sentence contain cat?
        std::cout << "Cannot replace" << std::endl;
    else
        url.replace(start_pos, from.length(), "https://www.reddit.com/r/nevertellmetheodds");

    std::cout << url << std::endl;

    return 0;
}

