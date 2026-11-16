#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include <conio.h>
#include <iostream>

#define CATEGORY_COUNT 4
#define ITEM_COUNT 3
#define PRICE_COUNT 2
#define PRICE_TYPE 2
#define MAX_CART_SIZE 100

using namespace std;

const char *categories[CATEGORY_COUNT] =
    {
        /* Categories */ "Milk Tea", "Iced Coffee", "Fruit Tea", "Praf"};

const char *menuItem[CATEGORY_COUNT][ITEM_COUNT] =
    {
        /* Milk Tea */ {"Okinawa", "Dark Choco", "WinterMelon"},
        /* Iced Coffee */ {"Macchiato", "White Chocolate", "Chocolate Fudge"},
        /* Fruit Tea */ {"Kiwi", "Green Apple", "Lemon"},
        /* Praf */ {"Mocha", "Vanilla Coffee", "Caramel"}};

const float itemPrice[PRICE_COUNT][PRICE_TYPE] =
    {
        /* Regular Prices */ {29, 39},
        /* Praf Prices */ {49, 59}};

typedef struct
{
    int category;
    int item;
    int size;
    int quantity;
} CartItem;

void separator(int length)
{
    cout.fill(196);
    cout.width(length);
    cout << (char)196;
}

void displayCategories()
{
    separator(30);
    printf("\n Categories:\n\n");
    for (int i = 0; i < CATEGORY_COUNT; i++)
        printf(" %d. %s \n", i + 1, categories[i]);
    printf(" 5. Return\n");
    separator(30);
    printf("\n");
}

void addToCart(CartItem cart[], int *cartSize, int category, int item, int size, int quantity)
{
    if (*cartSize < MAX_CART_SIZE)
    {
        cart[*cartSize].category = category;
        cart[*cartSize].item = item;
        cart[*cartSize].size = size;
        cart[*cartSize].quantity = quantity;
        (*cartSize)++;
        printf("Item added to cart successfully.\n");
    }
    else
    {
        printf("Order is full.\n");
    }
}

void displayCart(CartItem cart[], int cartSize)
{
    printf("Order List:\n");
    separator(40);
    printf("\n");
    for (int i = 0; i < cartSize; i++)
    {
        printf(" %d. %s - %s [Size %d] x %d\n", i + 1, categories[cart[i].category - 1],
               menuItem[cart[i].category - 1][cart[i].item - 1], cart[i].size, cart[i].quantity);
    }
    separator(40);
    printf("\n");
}

float calculateTotal(CartItem cart[], int cartSize)
{
    float total = 0.0;
    for (int i = 0; i < cartSize; i++)
    {
        int category = cart[i].category - 1;
        int item = cart[i].item - 1;
        total += itemPrice[category > 2][cart[i].size - 1] * cart[i].quantity;
    }
    return total;
}

void createReceipt(CartItem cart[], int cartSize, double total, double cash, double change)
{
    FILE *receiptFile;
    FILE *logFile;
    char receiptFilename[50];
    char logFilename[] = "transaction-logs.txt";

    srand(time(NULL));
    int receiptCode = rand() % 1000000; // Generate a random 6-digit receipt code

    sprintf(receiptFilename, "receipt_%06d.txt", receiptCode); // Create a filename with the receipt code
    receiptFile = fopen(receiptFilename, "w");                 // Open receipt file for writing

    if (receiptFile != NULL)
    {
        // Get current date and time
        time_t t = time(NULL);
        struct tm *tm = localtime(&t);
        char date[64];
        strftime(date, sizeof(date), "%Y-%m-%d %H:%M:%S", tm);

        fprintf(receiptFile, "Receipt Code: %06d\n", receiptCode); // Write receipt code to file
        fprintf(receiptFile, "Date: %s\n\n", date);                // Write date of transaction to file

        fprintf(receiptFile, "Order List:\n");
        for (int i = 0; i < cartSize; i++)
        {
            fprintf(receiptFile, "%d. %s - %s [Size %d] x %d\n", i + 1, categories[cart[i].category - 1],
                    menuItem[cart[i].category - 1][cart[i].item - 1], cart[i].size, cart[i].quantity);
        }

        fprintf(receiptFile, "\nTotal Price: PHP %.2f\n", total);
        fprintf(receiptFile, "Cash Received: PHP %.2f\n", cash);
        fprintf(receiptFile, "Change: PHP %.2f\n", change);

        fclose(receiptFile); // Close receipt file
        printf("Receipt created successfully: %s\n", receiptFilename);
    }
    else
    {
        printf("Error creating receipt.\n");
        return;
    }

    // Append receipt code to transaction log file
    logFile = fopen(logFilename, "a"); // Open log file for appending

    if (logFile != NULL)
    {
        fprintf(logFile, "Receipt Code: %06d\n", receiptCode);
        fclose(logFile); // Close log file
        printf("Receipt code added to transaction log.\n");
    }
    else
    {
        printf("Error adding receipt code to transaction log.\n");
    }
}

// Function to display transaction logs
void displayTransactionLogs()
{
    FILE *logFile;
    char line[256];
    char logFilename[] = "transaction-logs.txt";

    logFile = fopen(logFilename, "r");
    if (logFile != NULL)
    {
        printf("Transaction Logs:\n");
        while (fgets(line, sizeof(line), logFile))
        {
            printf("%s", line);
        }
        fclose(logFile);
    }
    else
    {
        printf("Unable to open transaction log file.\n");
    }
}

// Function to view receipt by receipt code
void viewReceipt(int receiptCode)
{
    FILE *receiptFile;
    char filename[50];
    sprintf(filename, "receipt_%06d.txt", receiptCode);

    receiptFile = fopen(filename, "r");
    if (receiptFile != NULL)
    {
        system("cls");
        char line[256];
        separator(40);
        cout << endl;
        printf("Receipt:\n");
        cout << endl;
        while (fgets(line, sizeof(line), receiptFile))
        {
            printf("%s", line);
        }
        cout << endl;
        separator(40);
        cout << endl;
        fclose(receiptFile);
        cout << endl;
    }
    else
    {
        printf("Receipt not found.\n");
    }
}

int main()
{
    int menuchoice = 0;
    system("Color 0F");

    while (true)
    {
        system("cls");

        const char *menutitle = " Brew Big! ";

        const char *options[] = {
            (menuchoice == 0 ? " [Purchase]            " : " Purchase            "),
            (menuchoice == 1 ? " [Items]               " : " Items               "),
            (menuchoice == 2 ? " [Reports]             " : " Reports             "),
            (menuchoice == 3 ? " [Exit]                " : " Exit                ")};

        separator(13);
        printf("%s", menutitle);
        separator(13);
        printf("\v\v");
        for (int i = 0; i < 4; i++)
        {
            printf("%s\n", options[i]);
        }

        printf("\v");
        separator(37);
        printf("\v\v\v\v\v\v");

        char ch = _getch();
        int purchase, items;

        switch (ch)
        {
        case 72:
            if (menuchoice > 0)
            {
                menuchoice--;
            }
            else if (menuchoice == 0)
            {
                menuchoice = 3;
            }
            break;
        case 80:
            if (menuchoice < 3)
            {
                menuchoice++;
            }
            else if (menuchoice == 3)
            {
                menuchoice = 0;
            }
            break;
        case 13:
            if (menuchoice == 0)
            {
                int purchase = 1;
                double total = 0.0;
                CartItem cart[MAX_CART_SIZE];
                int cartSize = 0;
                int cate_Choice = 0; // Initialize category choice outside the loop

                while (purchase == 1)
                {
                    system("cls");

                    displayCategories();

                    printf("Select a category (or 0 to Check Out): ");
                    scanf("%d", &cate_Choice);

                    switch (cate_Choice)
                    {
                    case 0:
                        system("cls");
                        if (cartSize == 0)
                        {
                            printf("Your order is empty. Please add items to your cart before checking out.\n");
                            break;
                        }
                        displayCart(cart, cartSize);
                        total = calculateTotal(cart, cartSize);
                        printf("\nTotal Price: PHP %.2f\n", total);
                        double cash;
                        while (1)
                        {
                            printf("Enter amount of cash: ");
                            scanf("%lf", &cash);

                            if (cash < total)
                            {
                                printf("\nInsufficient funds.\n\n");
                                continue;
                            }
                            else
                            {
                                break;
                            }
                        }
                        if (cash >= total)
                        {
                            double change = cash - total;
                            printf("\nChange: PHP %.2f\n", change);
                            createReceipt(cart, cartSize, total, cash, change); // Create receipt
                            cartSize = 0;                                       // Reset cart size after checkout
                            printf("\nPress any key to return to the main menu...");
                            _getwch(); // Wait for user input before returning to main menu
                        }
                        else
                        {
                            printf("Insufficient cash.\n");
                        }
                        cout << endl;
                        printf("Thank you for shopping!\n");
                        break;
                    case 1:
                    case 2:
                    case 3:
                    case 4:
                        while (true)
                        {
                            system("cls");

                            int item_num;
                            int item_qty;
                            int item_size;

                            separator(30);
                            printf("\n\n");
                            printf(" %s \n", categories[cate_Choice - 1]);
                            for (int j = 0; j < ITEM_COUNT; j++)
                            {
                                printf(" %d. %s [PHP %0.2f | PHP %0.2f] \n", j + 1, menuItem[cate_Choice - 1][j], itemPrice[cate_Choice > 3 ? 1 : 0][0], itemPrice[cate_Choice > 3 ? 1 : 0][1]);
                            }
                            printf("\n");
                            separator(30);
                            printf("\n\n");

                            while (1)
                            {
                                printf("Select item: ");
                                scanf("%d", &item_num);

                                if (item_num < 1 || item_num > ITEM_COUNT)
                                {

                                    printf("\nInvalid Input. Try again! \n\n");
                                    continue;
                                }
                                else
                                {
                                    break;
                                }
                            }
                            while (1)
                            {
                                printf("\nSelect size number [1 | 2]: ");
                                scanf("%d", &item_size);

                                if (item_size < 1 || item_size > 2)
                                {

                                    printf("\nInvalid Input. Try again! \n\n");
                                    continue;
                                }
                                else
                                {
                                    break;
                                }
                            }
                            printf("\nItem quantity: ");
                            scanf("%d", &item_qty);

                            addToCart(cart, &cartSize, cate_Choice, item_num, item_size, item_qty);

                            break;
                        }
                        break;
                    case 5:
                        purchase = 0;
                        break;
                    default:
                        printf("Invalid Choice. Please try again.\n");
                        break;
                    }
                }
            }
            else if (menuchoice == 1)
            {
                system("cls");
                separator(20);
                printf(" Brew Big Menu ");
                separator(20);
                printf("\n\n");
                for (int i = 0; i < CATEGORY_COUNT; i++)
                {
                    printf(" %s\n", categories[i]);
                    for (int j = 0; j < ITEM_COUNT; j++)
                    {
                        printf(" %d. %s [PHP %.2f | PHP %.2f]\n", j + 1, menuItem[i][j], itemPrice[i > 2 ? 1 : 0][0], itemPrice[i > 2 ? 1 : 0][1]);
                    }
                    printf("\n");
                }
                separator(55);
                printf("\n\n");
                printf("Press any key to return to the main menu...");
                _getwch();
            }
            else if (menuchoice == 2)
            {	
            	int report = 1;
            	while (report == 1) {
            		
                system("cls");
                separator(30);
                cout << endl;
                printf(" Reports Menu:\n\n");
                printf(" 1. Display Transaction Logs\n");
                printf(" 2. Back to main menu\n");
                cout << endl;
                separator(30);
                cout << endl;

                char reportsOption;
                printf("Select option: ");
                scanf(" %c", &reportsOption);

                switch (reportsOption)
                {
                case '1':
                    system("cls");
					separator(50);
                    cout << endl;
                    displayTransactionLogs();
					separator(50);
                    cout << endl;
                    printf("\n1. View receipt\n");
                    printf("2. Back to menu\n");
					cout << endl;
					
                    char subOption;
                    printf("Select option: ");
                    scanf(" %c", &subOption);
                    while (true)
                    {
                        switch (subOption)
                        {
                        case '1':
                            system("cls");
                            int receiptCode;
							separator(50);
                            cout << endl;
                   			displayTransactionLogs();
                            separator(50);
                            cout << endl;
                            cout << endl;
                            
                            printf("Enter receipt code: ");
                            scanf("%d", &receiptCode);
                            viewReceipt(receiptCode); // View receipt by receipt code
                            getch();
                            break;
                        case '2':
                            system("cls");
                            break; // Return to main menu
                        default:
                            printf("Invalid option.\n");
                        }
                        if (subOption == '4')
                            break;
                        
                        break;
                    }
                    break;
                case '2':
                    system("cls");
                    report = 0;
                    
                    break;
                default:
                    printf("Invalid option.\n");
                	}	
				}

                break;
            }
            else if (menuchoice == 3)
            {
                system("cls");
                printf("\vClosing Program..\n\n");
                return 0;
            }
            break;
        }
    }

    return 0;
}
