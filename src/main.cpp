#include "page_title.h"
#define STR(text) #text
#define PRINT_TASK(SRT) \
    std::cout << STR(30.4 Practical Work.Task 2. Web Page Title Capture\n-- -- -- -- -- -- -- -- -- -- -- -- -- -- -\n)

int main()
{
PRINT_TASK(STR);
     requestHtml();
    return 0;
}