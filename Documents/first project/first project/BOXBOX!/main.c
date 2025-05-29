#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <string.h>
#define RESET "\x1b[0m"
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN "\x1b[36m"
#define WHITE "\x1b[37m"
#define BRIGHT_BLUE "\x1b[94m"
#define BRIGHT_MAGENTA "\x1b[95m"
#define BRIGHT_GREEN "\x1b[92m"
#define BRIGHT_YELLOW "\x1b[93m"
#define ORANGE "\x1b[38;5;208m"
#define GREY "\x1b[90m"
#define BRIGHT_RED "\x1b[91m"
#define BRIGHT_GREEN "\x1b[92m"
#define RESET "\x1b[0m"

typedef struct teams
{
    char team_name[50];
} teams;
typedef struct drivers
{
    int number;
    char team_name[50];
    char driver_name[50];
    float driver_age;
    float points;
    char nationality[50];
    int driver_rating;
    char tyretype[50];
    int position;
} drivers;
typedef struct laps_node
{
    int current_lap;
    struct laps_node *next;
    struct laps_node *prev;
    drivers position;
} laps_node;
typedef struct laps_node *laps;
typedef struct divers_list_node
{
    drivers data_in_race;
    struct divers_list_node *next;
    struct divers_list_node *prev;
    laps lap_reference;

} divers_list_node;
typedef struct divers_list_node *divers_list;
drivers data_info(drivers data[])
{
    // drivers names
    strcpy(data[0].driver_name, "Lewis Hamilton");
    strcpy(data[1].driver_name, "Max Verstapen");
    strcpy(data[2].driver_name, "Charles Leclerc");
    strcpy(data[3].driver_name, "George Russel");
    strcpy(data[4].driver_name, "Kimi Antonelli");
    strcpy(data[5].driver_name, "Yuki Tsunoda");
    strcpy(data[6].driver_name, "Fernando Alonso");
    strcpy(data[7].driver_name, "Lance Stroll");
    strcpy(data[8].driver_name, "Alexander Albon");
    strcpy(data[9].driver_name, "Carlos Sainz");
    strcpy(data[10].driver_name, "Liam Lawson");
    strcpy(data[11].driver_name, "Isack Hadjar");
    strcpy(data[12].driver_name, "Esteban Ocon");
    strcpy(data[13].driver_name, "Ollie Bearman");
    strcpy(data[14].driver_name, "Lando Norris");
    strcpy(data[15].driver_name, "Oscar Piastri");
    strcpy(data[16].driver_name, "Nico Hulkenberg");
    strcpy(data[17].driver_name, "Gabriel Bortoleto");
    strcpy(data[18].driver_name, "Pierre Gasly");
    strcpy(data[19].driver_name, "Jack Doohan");
    // drivers age
    data[0].driver_age = 40;
    data[1].driver_age = 27;
    data[2].driver_age = 27;
    data[3].driver_age = 26;
    data[4].driver_age = 18;
    data[5].driver_age = 24;
    data[6].driver_age = 43;
    data[7].driver_age = 26;
    data[8].driver_age = 29;
    data[9].driver_age = 30;
    data[10].driver_age = 23;
    data[11].driver_age = 20;
    data[12].driver_age = 28;
    data[13].driver_age = 19;
    data[14].driver_age = 25;
    data[15].driver_age = 23;
    data[16].driver_age = 37;
    data[17].driver_age = 20;
    data[18].driver_age = 29;
    data[19].driver_age = 21;
    int numbers[] = {44, 01, 16, 63, 12, 22, 14, 18, 23, 55, 30, 6, 31, 87, 04, 81, 27, 5, 10, 07};
    for (int i = 0; i < 20; i++)
    {
        data[i].number = numbers[i]; // drivers numbers
        data[i].points = 0;
    }
    // drivers nationality
    strcpy(data[0].nationality, "United Kingdom");
    strcpy(data[1].nationality, "Netherlands");
    strcpy(data[2].nationality, "Monaco");
    strcpy(data[3].nationality, "United Kingdom");
    strcpy(data[4].nationality, "Italy");
    strcpy(data[5].nationality, "Japan");
    strcpy(data[6].nationality, "Spain");
    strcpy(data[7].nationality, "Canada");
    strcpy(data[8].nationality, "Thailand");
    strcpy(data[9].nationality, "Spain");
    strcpy(data[10].nationality, "Australia");
    strcpy(data[11].nationality, "France");
    strcpy(data[12].nationality, "France");
    strcpy(data[13].nationality, "United Kingdom");
    strcpy(data[14].nationality, "United Kingdom");
    strcpy(data[15].nationality, "New Zealand");
    strcpy(data[16].nationality, "Germany");
    strcpy(data[17].nationality, "Brazil");
    strcpy(data[18].nationality, "France");
    strcpy(data[19].nationality, "U.S.A");
    // drivers teams
    strcpy(data[0].team_name, "Scuderia Ferrari");
    strcpy(data[1].team_name, "Oracle Red Bull Racing");
    strcpy(data[2].team_name, "Scuderia Ferrari");
    strcpy(data[3].team_name, "Mercedes-AMG Petronas Formula One Team");
    strcpy(data[4].team_name, "Mercedes-AMG Petronas Formula One Team");
    strcpy(data[5].team_name, "Oracle Red Bull Racing");
    strcpy(data[6].team_name, "Aston Martin Aramco Formula One Team");
    strcpy(data[7].team_name, "Aston Martin Aramco Formula One Team");
    strcpy(data[8].team_name, "Williams Racing");
    strcpy(data[9].team_name, "Williams Racing");
    strcpy(data[10].team_name, "Visa Cash App RB Formula One Team");
    strcpy(data[11].team_name, "Visa Cash App RB Formula One Team");
    strcpy(data[12].team_name, "Haas F1 Team");
    strcpy(data[13].team_name, "Haas F1 Team");
    strcpy(data[14].team_name, "Mclaren Formula 1 Team");
    strcpy(data[15].team_name, "Mclaren Formula 1 Team");
    strcpy(data[16].team_name, "Stake F1 Team Kick Sauber");
    strcpy(data[17].team_name, "Stake F1 Team Kick Sauber");
    strcpy(data[18].team_name, "BWT Alpine F1 Team");
    strcpy(data[19].team_name, "BWT Alpine F1 Team");
    int ratings[] =
    {
        90, // Hamilton
        95, // Verstappen
        85, // Leclerc
        86, // Russell
        79, // Antonelli
        81, // Tsunoda
        89, // Alonso
        75, // Stroll
        82, // Albon
        87, // Sainz
        77, // Lawson
        78, // Hadjar
        83, // Ocon
        80, // Bearman
        88, // Norris
        85, // Piastri
        83, // Hulkenberg
        77, // Bortoleto
        84, // Gasly
        74  // Doohan
    };

    for (int i = 0; i < 20; i++)
    {
        data[i].driver_rating = ratings[i];
    }
    // tyretype
    strcpy(data[0].tyretype, "medium");
    strcpy(data[1].tyretype, "hard");
    strcpy(data[2].tyretype, "medium");
    strcpy(data[3].tyretype, "hard");
    strcpy(data[4].tyretype, "soft");
    strcpy(data[5].tyretype, "medium");
    strcpy(data[6].tyretype, "hard");
    strcpy(data[7].tyretype, "medium");
    strcpy(data[8].tyretype, "soft");
    strcpy(data[9].tyretype, "medium");
    strcpy(data[10].tyretype, "medium");
    strcpy(data[11].tyretype, "medium");
    strcpy(data[12].tyretype, "hard");
    strcpy(data[13].tyretype, "soft");
    strcpy(data[14].tyretype, "hard");
    strcpy(data[15].tyretype, "medium");
    strcpy(data[16].tyretype, "hard");
    strcpy(data[17].tyretype, "hard");
    strcpy(data[18].tyretype, "soft");
    strcpy(data[19].tyretype, "medium");
    return *data;
}
void qualification(drivers *driversArr, size_t n)
{
    srand(time(NULL));
    drivers temp;
    if (n > 1)
    {
        for (size_t i = n - 1; i > 0; i--)
        {
            size_t j = rand() % (i + 1);
            temp = driversArr[i];
            driversArr[i] = driversArr[j];
            driversArr[j] = temp;
        }
    }
}
/*divers_list Create_Your_Own_Driver(drivers data)
{
    // Allocate memory for the actual node structure
    divers_list newDriver = (divers_list)malloc(sizeof(struct divers_list_node));

    if (newDriver == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    // Initialize pointers
    newDriver->next = NULL;
    newDriver->prev = NULL;

    // Copy simple data types
    newDriver->data_in_race.driver_age = data.driver_age;
    newDriver->data_in_race.driver_rating = data.driver_rating;
    newDriver->data_in_race.number = data.number;

    // Copy strings with buffer protection
    // Driver name (assuming 50 char buffer)
    strncpy(newDriver->data_in_race.driver_name, data.driver_name, 49);
    newDriver->data_in_race.driver_name[49] = '\0';

    // Nationality (assuming 50 char buffer)
    strncpy(newDriver->data_in_race.nationality, data.nationality, 49);
    newDriver->data_in_race.nationality[49] = '\0';

    // Team name (assuming 50 char buffer)
    strncpy(newDriver->data_in_race.team_name, data.team_name, 49);
    newDriver->data_in_race.team_name[49] = '\0';

    // Tyre type (assuming 50 char buffer)
    strncpy(newDriver->data_in_race.tyretype, data.tyretype, 49);
    newDriver->data_in_race.tyretype[49] = '\0';

    return newDriver;
}
// Function to clear input buffer
void clean_buffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

divers_list create_custom_driver_node()
{
    drivers new_data;
    int my_choice;

    do
    {
        printf("\nCreate Your Own Driver!\n\n");
        printf("Enter your driver's information\n");

        // FULL NAME
        printf("FULL NAME:\n");
        clean_buffer();
        fgets(new_data.driver_name, 50, stdin);
        new_data.driver_name[strcspn(new_data.driver_name, "\n")] = '\0';

        // AGE
        printf("AGE:\n");
        while(scanf("%d", &new_data.driver_age) != 1)
        {
            clean_buffer();
            printf("Invalid input. Please enter a number for age: ");
        }
        clean_buffer();

        // NATIONALITY
        printf("NATIONALITY:\n");
        clean_buffer();
        fgets(new_data.nationality, 50, stdin);
        new_data.nationality[strcspn(new_data.nationality, "\n")] = '\0';

        // NUMBER
        printf("NUMBER:\n");
        while(scanf("%d", &new_data.number) != 1)
        {
            clean_buffer();
            printf("Invalid input. Please enter a number: ");
        }
        clean_buffer();

        // RATING
        printf("DRIVER RATING (between 68 and 96):\n");
        do
        {
            while(scanf("%d", &new_data.driver_rating) != 1)
            {
                clean_buffer();
                printf("Invalid input. Please enter a number between 68-96: ");
            }
        }
        while(new_data.driver_rating < 68 || new_data.driver_rating > 96);
        clean_buffer();

        // CONFIRMATION
        printf("\nAre you sure about your driver's info?\n");
        printf("1. yes\n2. no\n");
        while(scanf("%d", &my_choice) != 1 || (my_choice != 1 && my_choice != 2))
        {
            clean_buffer();
            printf("Invalid choice. Please enter 1 (yes) or 2 (no): ");
        }

    }
    while(my_choice == 2);

    // Create and return the new node
    return Create_Your_Own_Driver(new_data);
}*/
laps laps_in_race() // AKA newelement function
{
    laps newLap = (laps)malloc(sizeof(laps_node));
    newLap->next = NULL;
    newLap->prev = NULL;
    return newLap;
}
laps lap_insertion(laps head)
{
    laps newLap = laps_in_race();
    if (head == NULL)
    {
        head = newLap;
        return head;
    }
    else
    {
        laps temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = (struct laps_node *)newLap;
        newLap->prev = temp;
        return head;
    }
}
divers_list insert_At_Beginning(divers_list head)
{

}
laps all_race_laps(int user_input) // the user will have the ability to choose how many laps can be in the race
{
    laps head = NULL;
    for (int i = 0; i < user_input; i++)
        head = lap_insertion(head);
    return head;
}
divers_list drivers_in_race() // creating drivers
{
    divers_list newDriver = (divers_list)malloc(sizeof(divers_list_node));
    newDriver->next = NULL;
    newDriver->prev = NULL;
    return newDriver;
}
divers_list driver_insertion(divers_list head2)
{
    divers_list newDriver = drivers_in_race();
    if (head2 == NULL)
    {
        newDriver = head2;
        return newDriver;
    }
    else
    {
        divers_list temp2 = head2;
        while (temp2->next != NULL)
            temp2 = temp2->next;
        temp2->next = newDriver;
        newDriver->prev = temp2;
        return head2;
    }
}
divers_list drivers_lineup_list(divers_list head2, drivers *data)
{
    divers_list tail = NULL;
    qualification(data, 20);
    for (int i = 0; i < 20; i++)
    {
        // 1) allocate a fresh node
        divers_list node = drivers_in_race();
        node->data_in_race = data[i]; // copy all the fields in

        // 2) if list was empty, head2 == node == tail
        if (head2 == NULL)
        {
            head2 = node;
            tail = node;
        }
        // 3) otherwise append to tail
        else
        {
            tail->next = node;
            node->prev = tail;
            tail = node;
        }
    }

    return head2;
}

divers_list race_simulation(divers_list main_head, laps laps_head, int current_lap)
{
    if (main_head == NULL)
    {
        main_head = drivers_in_race();
        main_head->lap_reference = laps_head;
    }
    else
    {
        srand(time(NULL));
        laps temp = laps_head;

        // while (temp != NULL)
        // {
        int overtakes_count = 0;
        divers_list temp2 = main_head;

        int maximum_amount_of_overtakes = rand() % 10;
        while (temp2 != NULL && overtakes_count <= maximum_amount_of_overtakes)
        {
            int commentary_randomness = rand() % 12;
            int opportunity_of_overtake = rand() % 162;
            int crash_randomness = rand() % 15;

            if (temp2->data_in_race.driver_rating > opportunity_of_overtake && temp2->next != NULL)
            {
                divers_list prev = temp2->prev;
                divers_list next = temp2->next;
                divers_list next_next = next->next;

                // Swap positions
                if (prev)
                    prev->next = next;
                else
                    main_head = next;

                next->prev = prev;
                next->next = temp2;
                temp2->prev = next;
                temp2->next = next_next;

                if (next_next)
                    next_next->prev = temp2;

                // Add commentary only if next exists
                if (next)
                {
                    switch (commentary_randomness)
                    {
                    case 0:
                        printf("What a great move from %s! Got in too easily—such masterclass driving!\n", next->data_in_race.driver_name);
                        break;
                    case 1:
                        printf("Here comes %s from behind—and YES! He's pulled it off with style!\n", next->data_in_race.driver_name);
                        break;
                    case 2:
                        printf("Incredible! %s dives down the inside and takes the position brilliantly!\n", next->data_in_race.driver_name);
                        break;
                    case 3:
                        printf("OH MY WORD! %s just sent it and it stuck! That’s racing!\n", next->data_in_race.driver_name);
                        break;
                    case 4:
                        printf("Classy overtake from %s. Calm, calculated, clinical.\n", next->data_in_race.driver_name);
                        break;
                    case 5:
                        printf("Absolutely ruthless from %s! No hesitation, no mercy!\n", next->data_in_race.driver_name);
                        break;
                    case 6:
                        printf("%s with the textbook late braking move! Beautiful execution!\n", next->data_in_race.driver_name);
                        break;
                    case 7:
                        printf("You love to see it! %s just danced around the outside!\n", next->data_in_race.driver_name);
                        break;
                    case 8:
                        printf("%s said 'No thank you' and powered through like a champion!\n", next->data_in_race.driver_name);
                        break;
                    case 9:
                        printf("Lightning reflexes from %s! He caught the other driver napping!\n", next->data_in_race.driver_name);
                        break;
                    case 10:
                        printf("That’s a move right out of the history books. Bravo, %s!\n", next->data_in_race.driver_name);
                        break;
                    case 11:
                        printf("%s might just be the driver of the day after that move!\n", next->data_in_race.driver_name);
                        break;
                    default:
                        break;
                    }
                }

                // Crash logic
                if (crash_randomness == 3)
                {
                    printf("OH NO! %s has crashed after that overtake! That’s racing drama!\n", temp2->data_in_race.driver_name);

                    if (temp2->prev)
                        temp2->prev->next = temp2->next;
                    else
                        main_head = temp2->next;

                    if (temp2->next)
                        temp2->next->prev = temp2->prev;

                    divers_list to_free = temp2;
                    temp2 = temp2->next;
                    free(to_free);

                    overtakes_count++;
                    if (temp2 == NULL)
                        break; // Ensure we don't continue with a NULL pointer
                    continue;
                }

                overtakes_count++;
            }
            temp2 = temp2->next;
        }
        // temp = temp->next;
        // }
    }
    return main_head;
}

void lights_out()
{
    system("cls"); // Clear screen for dramatic effect

    printf(BRIGHT_RED "F1 Race Start Lights:\n\n" RESET);
    for (int i = 1; i <= 5; i++)
    {
        printf(RED"* "RESET); // Light ON
        fflush(stdout);
        Beep(1000, 200); // Beep at 1000 Hz for 200 ms
        Sleep(700);      // Delay between lights
    }

    Sleep(1000); // Pause before lights out
    system("cls");
    printf(GREEN"***** *\n"RESET);
    printf(BRIGHT_GREEN "LIGHTS OUT AND AWAY WE GO!!!\n" RESET);
    Beep(1500, 500); // Higher-pitched launch beep
    Sleep(1500);     // Let the user enjoy the moment a bit
}
void display_race(divers_list main_head, laps head)
{
    if (main_head == NULL || head == NULL)
    {
        printf("No drivers or no laps to display.\n");
        return;
    }

    // Intro header and lights-out sequence
    printf("========================\n");
    printf("\tF1 Race\n");
    lights_out();

    // Iterate over each lap
    laps tempLap = head;
    int lap_count = 1;
    while (tempLap != NULL)
    {
        // Print lap header
        main_head = race_simulation(main_head, tempLap, lap_count);
        Sleep(1000);
        printf("--------------------------------------------\n");
        printf("Lap %d\n", lap_count);

        // Walk the driver list and print positions for this lap
        divers_list tempDriver = main_head;
        int pos = 1;
        while (tempDriver != NULL)
        {
            // Show position, name, tyre type
            printf("%2d. %-20s\t", pos, tempDriver->data_in_race.driver_name);
            if(strcmp(tempDriver->data_in_race.tyretype,"medium") == 0)
                printf(YELLOW"\tmedium\n"RESET);
            else if(strcmp(tempDriver->data_in_race.tyretype,"soft") == 0)
                printf(RED"\tsoft\n"RESET);
            else if(strcmp(tempDriver->data_in_race.tyretype,"hard") == 0)
                printf("\thard\n");
            tempDriver = tempDriver->next;
            pos++;
        }
        printf("\n");

        // Advance to next lap
        lap_count++;
        tempLap = tempLap->next;
    }
}

int check_winner(divers_list main_head, int user_driver_choice)
{
    if (main_head == NULL)
    {
        printf("no drivers to check the winner");
    }
    else
    {
        if (main_head->data_in_race.number == user_driver_choice)
            return 1;
        else
            return 0;
    }
}
int check_Top_3(divers_list main_head, int user_driver_choice)
{
    if (main_head == NULL)
    {
        printf("no drivers to check the winner");
    }
    else
    {
        divers_list temp = main_head;
        int i = 0;
        while (temp != NULL && i < 3)
        {
            if (main_head->data_in_race.number == user_driver_choice)
                return 1;
            i++;
            temp = temp->next;
        }
        return 0;
    }
}
int check_Top_5(divers_list main_head, int user_driver_choice)
{
    if (main_head == NULL)
    {
        printf("no drivers to check the winner");
    }
    else
    {
        divers_list temp = main_head;
        int i = 0;
        while (temp != NULL && i < 5)
        {
            if (temp->data_in_race.number == user_driver_choice)
                return 1;
            i++;
            temp = temp->next;
        }
        return 0;
    }
}
int check_Top_10(divers_list main_head, int user_driver_choice)
{
    if (main_head == NULL)
    {
        printf("no drivers to check the winner");
    }
    else
    {
        divers_list temp = main_head;
        int i = 0;
        while (temp != NULL && i < 10)
        {
            if (temp->data_in_race.number == user_driver_choice)
                return 1;
            i++;
            temp = temp->next;
        }
        return 0;
    }
}
void loading_func()
{

    printf("Loading");
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".\n");
    Sleep(500);
}
void thanks()
{
    printf(YELLOW"THANK YOU FOR PLAYING OUR GAME\n"RESET);
}
/*divers_list insert_at_beginning(divers_list head, drivers data) {
    // Create new node using your existing function
    divers_list new_node = Create_Your_Own_Driver(data);

    // Link the new node to the current head
    new_node->next = head;
    new_node->prev = NULL;

    // If list wasn't empty, update old head's previous pointer
    if (head != NULL) {
        head->prev = new_node;
    }

    // Return new head of the list
    return new_node;
}*/
void display_drivers()
{
    printf("Here's the driver's lineup\n");
    printf("\n");
    printf("\n");
    printf(RED "=======================================================================" RESET "\n");
    printf("\tGeorge Russell 63\t" GREY "Mercedes-AMG Petronas Formula One Team" RESET "\n");
    printf(RED "|" RESET "\n");
    printf("\tKimi Antonelli 12\t" GREY "Mercedes-AMG Petronas Formula One Team" RESET "\n");
    printf(RED "|" RESET "\n");
    printf("\tLewis Hamilton 44\t" RED "Scuderia Ferrari" RESET "\n");
    printf(RED "|" RESET "\n");
    printf("\tCharles Leclerc 16\t" RED "Scuderia Ferrari" RESET "\n");
    printf(RED "|" RESET "\n");
    printf("\tMax Verstappen 01\t" CYAN "Oracle Red Bull Racing" RESET "\n");
    printf(RED "|" RESET "\n");
    printf("\tYuki Tsunoda 22\t\t" CYAN "Oracle Red Bull Racing" RESET "\n");
    printf(RED "|" RESET "\n");
    printf("\tFernando Alonso 14\t" GREEN "Aston Martin Aramco Formula One Team" RESET "\n");
    printf(RED "|" RESET "\n");
    printf("\tLance Stroll 18\t\t" GREEN "Aston Martin Aramco Formula One Team" RESET "\n");
    printf(RED "|" RESET "\n");
    printf("\tAlexander Albon 23\t" BLUE "Williams Racing" RESET "\n");
    printf(RED "|" RESET "\n");
    printf("\tCarlos Sainz 55\t\t" BLUE "Williams Racing" RESET "\n");
    printf(RED "|" RESET "\n");
    printf("\tLiam Lawson 30\t\t" MAGENTA "Visa Cash App RB Formula One Team" RESET "\n");
    printf(RED "|" RESET "\n");
    printf("\tIsack Hadjar 06\t\t" MAGENTA "Visa Cash App RB Formula One Team" RESET "\n");
    printf(RED "|" RESET "\n");
    printf("\tEsteban Ocon 31\t\t" RED "Haas F1 Team" RESET "\n");
    printf(RED "|" RESET "\n");
    printf("\tOllie Bearman 50\t" RED "Haas F1 Team" RESET "\n");
    printf(RED "|" RESET "\n");
    printf("\tLando Norris 4\t\t" YELLOW "McLaren Formula 1 Team" RESET "\n");
    printf(RED "|" RESET "\n");
    printf("\tOscar Piastri 81\t" YELLOW "McLaren Formula 1 Team" RESET "\n");
    printf(RED "|" RESET "\n");
    printf("\tNico Hulkenberg 27\t" ORANGE "Stake F1 Team Kick Sauber" RESET "\n");
    printf(RED "|" RESET "\n");
    printf("\tGabriel Bortoleto 61\t" ORANGE "Stake F1 Team Kick Sauber" RESET "\n");
    printf(RED "|" RESET "\n");
    printf("\tPierre Gasly 10\t\t" BRIGHT_MAGENTA "BWT Alpine F1 Team" RESET "\n");
    printf(RED "|" RESET "\n");
    printf("\tJack Doohan 07\t\t" BRIGHT_MAGENTA "BWT Alpine F1 Team" RESET "\n");
    printf(RED "=======================================================================" RESET "\n");
}
int main()
{
    divers_list list_of_drivers = NULL;
    int player_choice;
    drivers drivers_in_main_fnc[20];
    data_info(drivers_in_main_fnc);
    list_of_drivers = drivers_lineup_list(list_of_drivers, drivers_in_main_fnc);
    laps laps_in_main_fnc = NULL;
    printf(RED"-------"RESET);
    printf("Welcome to BOXBOX game!");
    printf(RED"---------------\n"RESET);
    printf(RED"|"RESET"\t Choose your gamemode!\n");
    printf(RED"|"RESET YELLOW"\t1. Guess the winner\n"RESET);
    printf(RED"|"RESET"\t2. Pick a driver to finish in top 3\n");
    printf(RED"|"RESET"\t3. Pick a driver to finish in top 5\n");
    printf(RED"|"RESET"\t4. Pick a driver to finish in top 10\n");
    printf(RED"---------------------------------------------\n"RESET);
    int gamemode_pick;
    do
    {
        scanf("%d", &gamemode_pick);
        if (gamemode_pick <= 0)
            printf("Oops we haven't coded a gamemode choice that is less than zero, try agin please\n");
        else if (gamemode_pick > 5)
            printf("Other gamemode choice might be added in the coming updates\n");
        else
        {
            switch (gamemode_pick)
            {
            case 1:
                printf("This is what Max Verstapen would've chosen if he was playing this game :)\n");
                break;
            case 2:
                printf("This is what Max Verstapen would've chosen if he was playing this game :)\n");
                break;
            }
        }
    }
    while (gamemode_pick <= 0 || gamemode_pick > 4);
    loading_func();
    printf("How many laps do you want in the race?\n");
    int user_lap_choice;
    do
    {
        scanf("%d", &user_lap_choice);
        if (user_lap_choice <= 0)
            printf("So you wanna race in backwards huh? please try again.\n");
        else if (user_lap_choice >= 50)
            printf("don t you get bored watching 20 millionaires driving in circles for more than 50 laps? Try again please.\n");
    }
    while (user_lap_choice <= 0 || user_lap_choice >= 50);
    laps_in_main_fnc = all_race_laps(user_lap_choice);
    loading_func();
    switch (gamemode_pick)
    {
    case 1:
        printf("Pick a driver ");
        display_drivers();
        scanf("%d", &player_choice);
        printf("Good choice!\n");
        for (int i = 0; i < 20; i++)
        {
            if (player_choice == drivers_in_main_fnc[i].number)
                printf("%d %s\n Rating: %d\n Age: %.0f\n Nationality: %s\n", drivers_in_main_fnc[i].number, drivers_in_main_fnc[i].driver_name, drivers_in_main_fnc[i].driver_rating, drivers_in_main_fnc[i].driver_age, drivers_in_main_fnc[i].nationality);
        }
        display_race(list_of_drivers, laps_in_main_fnc);
        if (check_winner(list_of_drivers, player_choice) == 1)
            printf("Congratulations, you did it in the hardest way, YOU HAVE JUST GUESSED THE WINNER OF THE GRAND PRIX!!\n");
        else
        {
            printf("Wrong guess,would you like to try again?Come on you still got one chance left\n");
            printf("1.yes\n 2.no\n");

            int try_again_var;

            scanf("%d", &try_again_var);
            if (try_again_var == 1)
            {
                printf("Pick a driver \n");
                display_drivers();
                scanf("%d", &player_choice);
                printf("Good choice!\n");
                for (int i = 0; i < 20; i++)
                {
                    if (player_choice == drivers_in_main_fnc[i].number)
                        printf("%d %s\n Rating: %d\n Age: %.0f\n Nationality: %s\n", drivers_in_main_fnc[i].number, drivers_in_main_fnc[i].driver_name, drivers_in_main_fnc[i].driver_rating, drivers_in_main_fnc[i].driver_age, drivers_in_main_fnc[i].nationality);
                }
                //  list_of_drivers = race_simulation(list_of_drivers, laps_in_main_fnc);
                display_race(list_of_drivers, laps_in_main_fnc);
                if (check_winner(list_of_drivers, player_choice) == 1)
                {
                    printf("Congratulations, you did it in the hardest way, YOU HAVE JUST GUESSED THE WINNER OF THE GRAND PRIX!!\n");
                    Sleep(5000);
                    thanks();
                }
                else
                {
                    printf("you lost, GAME OVER\n");
                    thanks();
                }
            }
            else thanks();
        }
        break;
    case 2:
        printf("Choose your driver\n");
        display_drivers();
        scanf("%d", &player_choice);
        printf("Good choice!\n");
        // list_of_drivers = drivers_lineup_list(list_of_drivers, drivers_in_main_fnc);
        for (int i = 0; i < 20; i++)
        {
            if (player_choice == drivers_in_main_fnc[i].number)
                printf("%d %s\n Rating: %d\n Age: %.0f\n Nationality: %s\n", drivers_in_main_fnc[i].number, drivers_in_main_fnc[i].driver_name, drivers_in_main_fnc[i].driver_rating, drivers_in_main_fnc[i].driver_age, drivers_in_main_fnc[i].nationality);
        }
        loading_func();
        display_race(list_of_drivers, laps_in_main_fnc);
        if (check_Top_3(list_of_drivers, player_choice) == 1)
            printf("Good guess! the driver you picked is among the Top 3 \n");
        else
        {
            printf("Wrong guess,you still got one chance left. \nWould you like to try again?\n");
            printf("1.yes\n 2.no\n");
            loading_func();
            int try_again_var;

            scanf("%d", &try_again_var);
            if (try_again_var == 1)
            {
                printf("Pick a driver \n");
                display_drivers();
                scanf("%d", &player_choice);
                printf("Good choice!\n");
                for (int i = 0; i < 20; i++)
                {
                    if (player_choice == drivers_in_main_fnc[i].number)
                        printf("%s %d\n Rating: %d\n Age: %d\nNationality: %s\n", drivers_in_main_fnc[i].number, drivers_in_main_fnc[i].driver_name, drivers_in_main_fnc[i].driver_rating, drivers_in_main_fnc[i].driver_age, drivers_in_main_fnc[i].nationality);
                }
                loading_func();
                display_race(list_of_drivers, laps_in_main_fnc);
                if (check_Top_3(list_of_drivers, player_choice) == 1)
                    printf("Good guess! the driver you picked is among the Top 3 \n");
                else
                {
                    printf("you lost, GAME OVER\n");
                    thanks();
                }
            }
            else thanks();
        }
        break;// ... (previous code remains the same)

    case 3:
        printf("Choose your driver\n");
        display_drivers();
        scanf("%d", &player_choice);
        printf("Good choice!\n");

        // Fixed printf format specifiers
        for (int i = 0; i < 20; i++)
        {
            if (player_choice == drivers_in_main_fnc[i].number)
                printf("%d %s\n Rating: %d\n Age: %.0f\n Nationality: %s\n",  // Changed to %d first
                       drivers_in_main_fnc[i].number,
                       drivers_in_main_fnc[i].driver_name,
                       drivers_in_main_fnc[i].driver_rating,
                       drivers_in_main_fnc[i].driver_age,
                       drivers_in_main_fnc[i].nationality);
        }
        loading_func();
        display_race(list_of_drivers, laps_in_main_fnc);

        if (check_Top_5(list_of_drivers, player_choice) == 1)
        {
            printf("Good guess! The driver you picked is among the Top 5 \n");
        }
        else
        {
            // Fixed menu string
            printf("Wrong guess, you still got one chance left. \nWould you like to try again?\n");
            printf("1.yes\n2.no\n");  // Fixed escape sequence
            loading_func();

            int try_again_var;
            scanf("%d", &try_again_var);

            if (try_again_var == 1)
            {
                printf("Pick a driver \n");
                display_drivers();
                scanf("%d", &player_choice);
                printf("Good choice!\n");

                // Fixed printf format specifiers
                for (int i = 0; i < 20; i++)
                {
                    if (player_choice == drivers_in_main_fnc[i].number)
                        printf("%d %s\n Rating: %d\n Age: %.0f\n Nationality: %s\n",  // Fixed order
                               drivers_in_main_fnc[i].number,
                               drivers_in_main_fnc[i].driver_name,
                               drivers_in_main_fnc[i].driver_rating,
                               drivers_in_main_fnc[i].driver_age,
                               drivers_in_main_fnc[i].nationality);
                }
                loading_func();

                // list_of_drivers = race_simulation(list_of_drivers, laps_in_main_fnc);
                display_race(list_of_drivers, laps_in_main_fnc);

                if (check_Top_5(list_of_drivers, player_choice) == 1)
                {
                    printf("Good guess! The driver you picked is among the Top 5 \n");
                }
                else
                {
                    printf("You lost, GAME OVER\n");
                    thanks();
                }
            }
            else
            {
                thanks();
            }
        }
        break;

    case 4:
        printf("Choose your driver\n");
        display_drivers();
        scanf("%d", &player_choice);
        printf("Good choice!\n");

        // Removed duplicate scanf("%d", player_choice); that was causing a crash

        for (int i = 0; i < 20; i++)
        {
            if (player_choice == drivers_in_main_fnc[i].number)
                printf("%d %s\n Rating: %d\n Age: %.0f\n Nationality: %s\n",  // Fixed format
                       drivers_in_main_fnc[i].number,
                       drivers_in_main_fnc[i].driver_name,
                       drivers_in_main_fnc[i].driver_rating,
                       drivers_in_main_fnc[i].driver_age,
                       drivers_in_main_fnc[i].nationality);
        }
        loading_func();

        // list_of_drivers = race_simulation(list_of_drivers, laps_in_main_fnc);
        display_race(list_of_drivers, laps_in_main_fnc);

        if (check_Top_10(list_of_drivers, player_choice) == 1)
        {
            printf("Good guess! The driver you picked is among the Top 10 \n");
        }
        else
        {
            printf("Wrong guess, you still got one chance left. \nWould you like to try again?\n");
            printf("1.yes\n2.no\n");
            loading_func();

            int try_again_var;
            scanf("%d", &try_again_var);

            if (try_again_var == 1)
            {
                printf("Pick a driver \n");
                display_drivers();
                scanf("%d", &player_choice);
                printf("Good choice!\n");

                for (int i = 0; i < 20; i++)
                {
                    if (player_choice == drivers_in_main_fnc[i].number)
                        printf("%d %s\n Rating: %d\n Age: %.0f\n Nationality: %s\n",
                               drivers_in_main_fnc[i].number,
                               drivers_in_main_fnc[i].driver_name,
                               drivers_in_main_fnc[i].driver_rating,
                               drivers_in_main_fnc[i].driver_age,
                               drivers_in_main_fnc[i].nationality);
                }
                loading_func();

                // list_of_drivers = race_simulation(list_of_drivers, laps_in_main_fnc);
                display_race(list_of_drivers, laps_in_main_fnc);

                if (check_Top_10(list_of_drivers, player_choice) == 1)
                {
                    printf("Good guess! The driver you picked finished in the Top 10 \n");
                }
                else
                {
                    printf("NOOO you lost\n\n\n GAME OVER\n");
                    thanks();
                }
            }
            else
            {
                thanks();
            }
        }
        break;
    /*case 5:
    {
        // Create and insert custom driver
        drivers custom_data;
        Create_Your_Own_Driver(custom_data);
        list_of_drivers = insert_at_beginning(list_of_drivers, custom_data);

        // Get user prediction
        printf("Where do you think your driver will finish?\n");
        int your_choice;
        do
        {
            printf(YELLOW "1. THE WINNER\n" RESET);
            printf("2. TOP 3\n");
            printf("3. TOP 5\n");
            printf("4. TOP 10\n");

            if (scanf("%d", &your_choice) != 1)
            {
                clean_buffer();
                printf("Invalid input. Please enter a number 1-4.\n");
                continue;
            }

            if (your_choice < 1 || your_choice > 4)
            {
                printf("Choice must be between 1-4. Try again.\n");
            }
        }
        while (your_choice < 1 || your_choice > 4);

        // Simulate and check results
        printf(RED "\tHold tight and let the thrill begin\n" RESET);
        Sleep(4000);
        display_race(list_of_drivers, laps_in_main_fnc);

        // Check results based on user's prediction
        int success = 0;
        switch (your_choice)
        {
        case 1:
            success = check_winner(list_of_drivers, custom_data.number);
            break;
        case 2:
            success = check_Top_3(list_of_drivers, custom_data.number);
            break;
        case 3:
            success = check_Top_5(list_of_drivers, custom_data.number);
            break;
        case 4:
            success = check_Top_10(list_of_drivers, custom_data.number);
            break;
        }

        // Display result
        if (success)
        {
            printf(GREEN "\nYOU DID IT! CONGRATULATIONS!!!!!!!!!!!!!!\n" RESET);
        }
        else
        {
            printf(RED "\nNoooooooo you lost.\nGAME OVER\n" RESET);
        }

        // Add celebration or consolation delay
        Sleep(3000);
        break
        */
        printf(RED"MADE WITH PASSION\n"RESET);
    return 0;

    }}
