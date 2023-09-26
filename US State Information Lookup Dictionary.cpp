// US State Information Dictionary
// Websites and References:
// source 1: https://capitalizemytitle.com/50-us-states-in-alphabetical-order/
// source 2: https://www.50states.com/nickname.htm
// source 3: https://www.statsamerica.org/sip/rank_list.aspx?rank_label=pop1
// source 4: https://en.wikipedia.org/wiki/List_of_current_United_States_governors
// source 5: https://www.insider.com/largest-city-every-us-state-2018-1
// source 6: https://www.enchantedlearning.com/usa/states/area.shtml
// source 7: https://www.justice.gov/ust/eo/bapcpa/20220401/bci_data/median_income_table.htm
// source 8: https://www.experian.com/blogs/ask-experian/research/median-home-values-by-state/
// source 9: https://wisevoter.com/state-rankings/states-with-the-most-counties

#include <iostream>
struct inflatable
{
    char name[30];
    char state_nickname[50];

    int population_hundreds;
    int population_thousands;
    int population_millions;

    char governor[50];
    char capitol[30];
    char largest_city[50];

    int area_in_square_miles_hundreds;
    int area_in_square_miles_thousands;

    int median_income_for_one_person_hundreds;
    int median_income_for_one_person_thousands;

    int average_home_value_hundreds;
    int average_home_value_thousands;

    int number_of_counties;

    // demographics
    float white_population;
    float black_population;
    float asian_population;
    float hispanic_population;
};

int main() {
    using namespace std;
    inflatable AL =
            {
                    "Alabama",
                    "Yellowhammer State",
                    5,074,296,
                    "Kay Ivey",
                    "Montgomery",
                    "Birmingham",
                    52,419,
                    52,138,
                    134,300,
                    67,
                    63.12, 25.64, 1.51, 5.26,
            };
    inflatable AK =
            {
                    "Alaska",
                    "The Last Frontier",
                    0,733,583,
                    "Mike Dunleavy",
                    "Juneau",
                    "Anchorage",
                    663,267,
                    67,010,
                    326,000,
                    30,
                    57.51, 2.83, 5.92, 6.79,
            };
    inflatable AZ =
            {
                    "Arizona",
                    "The Grand Canyon State",
                    7,359,197,
                    "Katie Hobbs",
                    "Phoenix",
                    "Phoenix",
                    113,998,
                    58,462,
                    257,600,
                    15,
                    53.37, 4.43, 3.48, 30.65,
            };
    inflatable AR=
            {
                    "Arkansas",
                    "The Natural State",
                    3,045,637,
                    "Sarah Huckabee Sanders",
                    "Little Rock",
                    "Little Rock",
                    53,179,
                    48,882,
                    129,500,
                    75,
                    68.52, 14.94, 1.70, 8.53,
            };
    inflatable CA =
            {
                    "California",
                    "The Golden State",
                    39,027,342,
                    "Gavin Newsom",
                    "Sacramento",
                    "Los Angeles",
                    163,695,
                    65,895,
                    550,800,
                    58,
                    34.69, 5.36, 15.12, 39.40,
            };
    inflatable CO =
            {
                    "Colorado",
                    "The Centennial State",
                    5,839,926,
                    "Jared Polis",
                    "Denver",
                    "Denver",
                    104,100,
                    70,952,
                    381,300,
                    64,
                    65.13, 3.83, 3.38, 21.88,
            };
    inflatable CT =
            {
                    "Connecticut",
                    "The Constitution State",
                    3,626,205,
                    "Led Lamont",
                    "Hartford",
                    "Bridgeport",
                    5,544,
                    72,497,
                    244,800,
                    8,
                    63.21, 10.01, 4.73, 17.29,
            };
    inflatable DE =
            {
                    "Delaware",
                    "The First State",
                    1,017,396,
                    "John Carney",
                    "Dover",
                    "Wilmington",
                    2,489,
                    65,072,
                    236,300,
                    3,
                    58.57, 21.51, 4.28, 10.53,
            };
    inflatable FL =
            {
                    "Florida",
                    "The Sunshine State",
                    22,244,823,
                    "Ron Desantis",
                    "Tallahassee",
                    "Jacksonville",
                    65,755,
                    55,681,
                    237,900,
                    67,
                    51.54, 14.52, 2.92, 26.45,
            };
    inflatable GA =
            {
                    "Georgia",
                    "The Peach State",
                    10,912,876,
                    "Brian Kemp",
                    "Atlanta",
                    "Atlanta",
                    59,425,
                    55,600,
                    193,500,
                    159,
                    50.06, 30.60, 4.44, 10.49,
            };
    inflatable HI =
            {
                    "Hawaii",
                    "The Aloha State",
                    1,440,196,
                    "Josh Green",
                    "Honolulu",
                    "Honolulu",
                    10,931,
                    75,797,
                    619,000,
                    5,
                    21.60, 1.50, 36.53, 9.55,
            };
    inflatable ID =
            {
                    "Idaho",
                    "The Gem State",
                    1,939,033,
                    "Brad Little",
                    "Boise",
                    "Boise",
                    83,570,
                    54,942,
                    274,200,
                    44,
                    78.87, 0.80, 1.42, 13.02,
            };
    inflatable IL =
            {
                    "Illinois",
                    "Praire State",
                    12,582,032,
                    "J.B. Pritzker",
                    "Springfield",
                    "Chicago",
                    57,914,
                    61,456,
                    183,500,
                    102,
                    58.32, 13.86, 5.83, 18.24,
            };
    inflatable IN =
            {
                    "Indiana",
                    "The Hoosier State",
                    6,833,037,
                    "Eric Holcomb",
                    "Indianapolis",
                    "Indianapolis",
                    36,418,
                    54,785,
                    148,700,
                    92,
                    75.47, 9.39, 2.46, 8.17,
            };
    inflatable IA =
            {
                    "Iowa",
                    "The Hawkeye State",
                    3,200,517,
                    "Kim Reynolds",
                    "Des Moines",
                    "Des Moines",
                    56,271,
                    54,155,
                    146,500,
                    99,
                    82.69, 4.05, 2.35, 6.77,
            };
    inflatable KS =
            {
                    "Kansas",
                    "The Sunflower State",
                    2,937,150,
                    "Laura Kelly",
                    "Topeka",
                    "Wichita",
                    82,276,
                    55,070,
                    141,500,
                    105,
                    72.25, 5.56, 2.90, 13.02,
            };
    inflatable KY =
            {
                    "Kentucky",
                    "The Bluegrass State",
                    4,512,310,
                    "Andy Beshear",
                    "Frankfort",
                    "Louisville",
                    40,410,
                    51,978,
                    148,400,
                    120,
                    81.33, 7.94, 1.64, 4.61,
            };
    inflatable LA =
            {
                    "Louisiana",
                    "The Pelican State",
                    4,590,241,
                    "John Bel Edwards",
                    "Baton Rouge",
                    "New Orleans",
                    51,840,
                    49,719,
                    147,600,
                    64,
                    55.75, 31.18, 1.83, 6.92,
            };
    inflatable ME =
            {
                    "Maine",
                    "The Pine Tree State",
                    1,385,340,
                    "Janet Mills",
                    "Augusta",
                    "Portland",
                    35,385,
                    57,955,
                    237,800,
                    16,
                    90.16, 1.84, 1.22, 1.95,
            };
    inflatable MD =
            {
                    "Maryland",
                    "The Old Line State",
                    6,164,660,
                    "Wes Moore",
                    "Annapolis",
                    "Baltimore",
                    12,407,
                    75,214,
                    290,500,
                    24,
                    47.17, 29.06, 6.77, 11.81,
            };
    inflatable MA =
            {
                    "Massachusetts",
                    "The Bay State",
                    6,981,974,
                    "Maura Healey",
                    "Boston",
                    "Boston",
                    10,555,
                    75,077,
                    408,100,
                    14,
                    67.55, 6.50, 7.18, 12.63,
            };
    inflatable MI =
            {
                    "Michigan",
                    "The Great Lakes State",
                    10,034,113,
                    "Gretchen Whitmer",
                    "Lansing",
                    "Detroit",
                    96,716,
                    56,343,
                    154,500,
                    83,
                    72.40, 13.48, 3.30, 5.60,
            };
    inflatable MN =
            {
                    "Minnesota",
                    "The North Star State",
                    5,717,184,
                    "Tim Walz",
                    "Saint Paul",
                    "Minneapolis",
                    86,938,
                    65,514,
                    239,900,
                    87,
                    76.30, 6.88, 5.21, 6.06,
            };
    inflatable MS =
            {
                    "Mississippi",
                    "The Magnolia State",
                    2,940,057,
                    "Tate Reeves",
                    "Jackson",
                    "Jackson",
                    48,431,
                    47,446,
                    130,200,
                    82,
                    55.35, 36.44, 1.09, 3.55,
            };
    inflatable MO =
            {
                    "Missouri",
                    "The Show Me State",
                    6,177,957,
                    "Mike Parson",
                    "Jefferson City",
                    "Kansas City",
                    69,704,
                    53,547,
                    163,700,
                    115,
                    75.78, 11.26, 2.15, 4.92,
            };
    inflatable MT =
            {
                    "Montana",
                    "The Treasure State",
                    1,122,867,
                    "Greg Gianforte",
                    "Helena",
                    "Billings",
                    147,042,
                    57,448,
                    242,100,
                    56,
                    83.13, 0.47, 0.74, 4.17,
            };
    inflatable NE =
            {
                    "Nebraska",
                    "The Cornhusker State",
                    1,967,923,
                    "Jim Pillen",
                    "Lincoln",
                    "Omaha",
                    77,358,
                    53,892,
                    169,900,
                    93,
                    75.69, 4.81, 2.67, 11.97,
            };
    inflatable NV =
            {
                    "Nevada",
                    "The Silver State",
                    3,177,772,
                    "Joe Lombardo",
                    "Carson City",
                    "Las Vegas",
                    110,560,
                    56,949,
                    291,800,
                    17,
                    45.93, 9.40, 8.57, 28.68,
            };
    inflatable NH =
            {
                    "New Hampshire",
                    "The Granite State",
                    1,395,231,
                    "Chris Sununu",
                    "Concord",
                    "Manchester",
                    9,350,
                    75,432,
                    280,400,
                    10,
                    87.16, 1.35, 2.58, 4.32,
            };
    inflatable NJ =
            {
                    "New Jersey",
                    "The Garden State",
                    9,261,699,
                    "Phil Murphy",
                    "Trenton",
                    "Newark",
                    8,722,
                    75,321,
                    329,000,
                    21,
                    51.85, 12.42, 10.15, 21.56,
            };
    inflatable NM =
            {
                    "New Mexico",
                    "The Land of Enchantment",
                    2,113,344,
                    "Michelle Lujan Grisham",
                    "Santa Fe",
                    "Albuquerque",
                    121,589,
                    49,757,
                    197,400,
                    33,
                    36.50, 1.81, 1.67,47.74,
            };
    inflatable NY =
            {
                    "New York",
                    "The Empire State",
                    19,677,151,
                    "Kathy Hochul",
                    "Albany",
                    "New York City",
                    54,556,
                    63,548,
                    305,300,
                    62,
                    52.47, 13.66, 9.49, 19.54,
            };
    inflatable NC =
            {
                    "North Carolina",
                    "The Tar Heel State",
                    10,698,973,
                    "Roy Cooper",
                    "Raleigh",
                    "Charlotte",
                    53,818,
                    53,687,
                    189,900,
                    100,
                    60.46, 20.19, 3.26, 10.72,
            };
    inflatable ND =
            {
                    "North Dakota",
                    "The Peach Garden State",
                    0,779,261,
                    "Doug Burgum",
                    "Bismarck",
                    "Fargo",
                    70,700,
                    58,318,
                    210,000,
                    53,
                    81.65, 3.36, 1.68, 4.29,
            };
    inflatable OH =
            {
                    "Ohio",
                    "The Buckeye State",
                    11,756,057,
                    "Mike DeWine",
                    "Columbus",
                    "Columbus",
                    44,825,
                    54,877,
                    142,600,
                    88,
                    75.89, 12.35, 2.51, 4.42,
            };
    inflatable OK =
            {
                    "Oklahoma",
                    "The Sooner State",
                    4,020,000,
                    "Kevin Stitt",
                    "Oklahoma City",
                    "Oklahoma City",
                    69,899,
                    51,435,
                    125,400,
                    77,
                    60.80, 7.15, 2.26, 11.92,
            };
    inflatable OR =
            {
                    "Oregon",
                    "The Beaver State",
                    4,240,137,
                    "Tina Kotek",
                    "Salem",
                    "Portland",
                    98,380,
                    64,975,
                    350,600,
                    36,
                    71.65, 1.86, 4.53, 13.89,
            };
    inflatable PA =
            {
                    "Pennsylvania",
                    "The Keystone State",
                    12,972,010,
                    "Josh Shapiro",
                    "Harrisburg",
                    "Philadelphia",
                    46,056,
                    60,640,
                    176,500,
                    67,
                    73.47, 10.53, 3.90, 8.07,
            };
    inflatable RI =
            {
                    "Rhode Island",
                    "The Ocean State",
                    1,073,734,
                    "Dan McKee",
                    "Providence",
                    "Providence",
                    1,545,
                    67,541,
                    284,200,
                    5,
                    68.71, 5.05, 3.50, 16.59,
            };
    inflatable SC =
            {
                    "South Carolina",
                    "The Palmetto State",
                    5,282,634,
                    "Henry McMaster",
                    "Columbia",
                    "Charleston",
                    32,020,
                    52,348,
                    170,700,
                    46,
                    62.10, 24.79, 1.75,6.89,
            };
    inflatable SD =
            {
                    "South Dakota",
                    "Mount Rushmore State",
                    0,909,824,
                    "Krisi Noem",
                    "Pierre",
                    "Sioux Falls",
                    77,121,
                    54,821,
                    194,700,
                    66,
                    79.58, 1.97, 1.50, 4.37,
            };
    inflatable TN =
            {
                    "Tennessee",
                    "The Volunteer State",
                    7,051,339,
                    "Bill Lee",
                    "Nashville",
                    "Nashville",
                    42,144,
                    53,188,
                    170,800,
                    95,
                    70.91, 15.68, 1.94, 6.93,
            };
    inflatable TX =
            {
                    "Texas",
                    "The Lone Star State",
                    30,027,572,
                    "Greg Abbott",
                    "Austin",
                    "Houston",
                    268,580,
                    55,441,
                    199,900,
                    254,
                    39.75, 11.82, 5.36, 39.26,
            };
    inflatable UT =
            {
                    "Utah",
                    "The Beehive State",
                    3,380,800,
                    "Spencer Cox",
                    "Salt Lake City",
                    "Salt Lake City",
                    84,898,
                    70,425,
                    351,100,
                    29,
                    75.36, 1.14, 2.40, 15.07,
            };
    inflatable VT =
            {
                    "Vermont",
                    "The Green Mountain State",
                    0,647,064,
                    "Phil Scott",
                    "Montpelier",
                    "Burlington",
                    9,615,
                    58,728,
                    210,600,
                    14,
                    89.13, 1.34, 1.78, 2.41,
            };
    inflatable VA =
            {
                    "Virginia",
                    "The Old Dominion State",
                    8,683,619,
                    "Glenn Youngkin",
                    "Richmond",
                    "Virginia Beach",
                    42,774,
                    67,918,
                    264,200,
                    133,
                    58.60, 18.28, 7.07, 10.53,
            };
    inflatable WA =
            {
                    "Washington State",
                    "The Evergreen State",
                    7,785,786,
                    "Jay Inslee",
                    "Olympia",
                    "Seattle",
                    71,300,
                    74,398,
                    393,800,
                    39,
                    63.84, 3.84, 9.38, 13.75,
            };
    inflatable WV =
            {
                    "West Virginia",
                    "The Mountain State",
                    1,775,156,
                    "Jim Justice",
                    "Charleston",
                    "Charleston",
                    24,230,
                    53,244,
                    99,000,
                    55,
                    89.14, 3.61, 0.83, 1.94,
            };
    inflatable WI =
            {
                    "Wisconsin",
                    "The Badger State",
                    5,892,539,
                    "Tony Evers",
                    "Madison",
                    "Milwaukee",
                    65,498,
                    57,934,
                    191,600,
                    72,
                    78.63, 6.22, 2.96, 7.59,
            };
    inflatable WY =
            {
                    "Wyoming",
                    "The Equality or Cowboy State",
                    0,581,381,
                    "Mark Gordon",
                    "Cheyenne",
                    "Cheyenne",
                    97,813,
                    60,510,
                    236,100,
                    23,
                    81.42, 0.82, 0.87, 10.24,
            };


    cout << "CHOOSE A NUMBER IN THE MENU SHOWN BELOW (1-50) TO DISCOVER THE INFORMATION ABOUT A US STATE: \n";
    cout << "1. Alabama         2. Alaska        3. Arizona          4. Arkansas        5. California\n";
    cout << "6. Colorado        7. Connecticut   8. Delaware         9. Florida         10. Georgia\n";
    cout << "11. Hawaii         12. Idaho        13. Illinois        14. Indiana        15. Iowa\n";
    cout << "16. Kansas         17. Kentucky     18. Louisiana       19. Maine          20. Maryland\n";
    cout << "21. Massachusetts  22. Michigan     23. Minnesota       24. Mississippi    25. Missouri\n";
    cout << "26. Montana        27. Nebraska     28. Nevada          29. New Hampshire  30. New Jersey\n";
    cout << "31. New Mexico     32. New York     33. North Carolina  34. North Dakota   35. Ohio\n";
    cout << "36. Oklahoma       37. Oregon       38. Pennsylvania    39. Rhode Island   40. South Carolina\n";
    cout << "41. South Dakota   42. Tennessee    43. Texas           44. Utah           45. Vermont\n";
    cout << "46. Virginia       47. Washington   48. West Virginia   49. Wisconsin      50. Wyoming\n";

    cout << "PLEASE ENTER A NUMBER HERE: ";
    int number;
    cin >> number;
    while (number != 0)
    {
        if (number == 1)
            cout << "State: " << AL.name << "\n"
                 << "State's Nickname: " << AL.state_nickname << "\n"
                 << "Population: " << AL.population_hundreds << ",0" << AL.population_thousands << "," << AL.population_millions << "\n"
                 << "Governor: " << AL.governor << "\n"
                 << "Capitol: " << AL.capitol << "\n"
                 << "Largest City: " << AL.largest_city << "\n"
                 << "Area in Square Miles: " << AL.area_in_square_miles_hundreds << "," << AL.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << AL.median_income_for_one_person_hundreds << "," << AL.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << AL.average_home_value_hundreds << "," << AL.average_home_value_thousands << "\n"
                 << "Number of Counties: " << AL.number_of_counties << "\n"
                 << "Demographics: " << AL.white_population << " % White, " << AL.black_population << " % Black, " << AL.asian_population << " % Asian, " << AL.hispanic_population << " % Hispanic" << "\n";

        else if (number == 2)
            cout << "State: " << AK.name << "\n"
                 << "State's Nickname: " << AK.state_nickname << "\n"
                 << "Population: " << AK.population_thousands << "," << AK.population_millions << "\n"
                 << "Governor: " << AK.governor << "\n"
                 << "Capitol: " << AK.capitol << "\n"
                 << "Largest City: " << AK.largest_city << "\n"
                 << "Area in Square Miles: " << AK.area_in_square_miles_hundreds << "," << AK.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << AK.median_income_for_one_person_hundreds << "," << AK.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << AK.average_home_value_hundreds << ",00" << AK.average_home_value_thousands << "\n"
                 << "Number of Counties: " << AK.number_of_counties << "\n"
                 << "Demographics: " << AK.white_population << " % White, " << AK.black_population << " % Black, " << AK.asian_population << " % Asian, " << AK.hispanic_population << " % Hispanic" << "\n";

        else if (number == 3)
            cout << "State: " << AZ.name << "\n"
                 << "State's Nickname: " << AZ.state_nickname << "\n"
                 << "Population: " << AZ.population_hundreds << ",0" << AZ.population_thousands << "," << AZ.population_millions << "\n"
                 << "Governor: " << AZ.governor << "\n"
                 << "Capitol: " << AZ.capitol << "\n"
                 << "Largest City: " << AZ.largest_city << "\n"
                 << "Area in Square Miles: " << AZ.area_in_square_miles_hundreds << "," << AZ.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << AZ.median_income_for_one_person_hundreds << "," << AZ.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << AZ.average_home_value_hundreds << "," << AZ.average_home_value_thousands << "\n"
                 << "Number of Counties: " << AZ.number_of_counties << "\n"
                 << "Demographics: " << AZ.white_population << " % White, " << AZ.black_population << " % Black, " << AZ.asian_population << " % Asian, " << AZ.hispanic_population << " % Hispanic" << "\n";

        else if (number == 4)
            cout << "State: " << AR.name << "\n"
                 << "State's Nickname: " << AR.state_nickname << "\n"
                 << "Population: " << AR.population_hundreds << "," << AR.population_thousands << "," << AR.population_millions << "\n"
                 << "Governor: " << AR.governor << "\n"
                 << "Capitol: " << AR.capitol << "\n"
                 << "Largest City: " << AR.largest_city << "\n"
                 << "Area in Square Miles: " << AR.area_in_square_miles_hundreds << "," << AR.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << AR.median_income_for_one_person_hundreds << "," << AR.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << AR.average_home_value_hundreds << "," << AR.average_home_value_thousands << "\n"
                 << "Number of Counties: " << AR.number_of_counties << "\n"
                 << "Demographics: " << AR.white_population << " % White, " << AR.black_population << " % Black, " << AR.asian_population << " % Asian, " << AR.hispanic_population << " % Hispanic" << "\n";

        else if (number == 5)
            cout << "State: " << CA.name << "\n"
                 << "State's Nickname: " << CA.state_nickname << "\n"
                 << "Population: " << CA.population_hundreds << "," << CA.population_thousands << "," << CA.population_millions << "\n"
                 << "Governor: " << CA.governor << "\n"
                 << "Capitol: " << CA.capitol << "\n"
                 << "Largest City: " << CA.largest_city << "\n"
                 << "Area in Square Miles: " << CA.area_in_square_miles_hundreds << "," << CA.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << CA.median_income_for_one_person_hundreds << "," << CA.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << CA.average_home_value_hundreds << "," << CA.average_home_value_thousands << "\n"
                 << "Number of Counties: " << CA.number_of_counties << "\n"
                 << "Demographics: " << CA.white_population << " % White, " << CA.black_population << " % Black, " << CA.asian_population << " % Asian, " << CA.hispanic_population << " % Hispanic" << "\n";

        else if (number == 6)
            cout << "State: " << CO.name << "\n"
                 << "State's Nickname: " << CO.state_nickname << "\n"
                 << "Population: " << CO.population_hundreds << "," << CO.population_thousands << "," << CO.population_millions << "\n"
                 << "Governor: " << CO.governor << "\n"
                 << "Capitol: " << CO.capitol << "\n"
                 << "Largest City: " << CO.largest_city << "\n"
                 << "Area in Square Miles: " << CO.area_in_square_miles_hundreds << "," << CO.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << CO.median_income_for_one_person_hundreds << "," << CO.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << CO.average_home_value_hundreds << "," << CO.average_home_value_thousands << "\n"
                 << "Number of Counties: " << CO.number_of_counties << "\n"
                 << "Demographics: " << CO.white_population << " % White, " << CO.black_population << " % Black, " << CO.asian_population << " % Asian, " << CO.hispanic_population << " % Hispanic" << "\n";

        else if (number == 7)
            cout << "State: " << CT.name << "\n"
                 << "State's Nickname: " << CT.state_nickname << "\n"
                 << "Population: " << CT.population_hundreds << "," << CT.population_thousands << "," << CT.population_millions << "\n"
                 << "Governor: " << CT.governor << "\n"
                 << "Capitol: " << CT.capitol << "\n"
                 << "Largest City: " << CT.largest_city << "\n"
                 << "Area in Square Miles: " << CT.area_in_square_miles_hundreds << "," << CT.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << CT.median_income_for_one_person_hundreds << "," << CT.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << CT.average_home_value_hundreds << "," << CT.average_home_value_thousands << "\n"
                 << "Number of Counties: " << CT.number_of_counties << "\n"
                 << "Demographics: " << CT.white_population << " % White, " << CT.black_population << " % Black, " << CT.asian_population << " % Asian, " << CT.hispanic_population << " % Hispanic" << "\n";

        else if (number == 8)
            cout << "State: " << DE.name << "\n"
                 << "State's Nickname: " << DE.state_nickname << "\n"
                 << "Population: " << DE.population_hundreds << "," << DE.population_thousands << "," << DE.population_millions << "\n"
                 << "Governor: " << DE.governor << "\n"
                 << "Capitol: " << DE.capitol << "\n"
                 << "Largest City: " << DE.largest_city << "\n"
                 << "Area in Square Miles: " << DE.area_in_square_miles_hundreds << "," << DE.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << DE.median_income_for_one_person_hundreds << "," << DE.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << DE.average_home_value_hundreds << "," << DE.average_home_value_thousands << "\n"
                 << "Number of Counties: " << DE.number_of_counties << "\n"
                 << "Demographics: " << DE.white_population << " % White, " << DE.black_population << " % Black, " << DE.asian_population << " % Asian, " << DE.hispanic_population << " % Hispanic" << "\n";

        else if (number == 9)
            cout << "State: " << FL.name << "\n"
                 << "State's Nickname: " << FL.state_nickname << "\n"
                 << "Population: " << FL.population_hundreds << "," << FL.population_thousands << "," << FL.population_millions << "\n"
                 << "Governor: " << FL.governor << "\n"
                 << "Capitol: " << FL.capitol << "\n"
                 << "Largest City: " << FL.largest_city << "\n"
                 << "Area in Square Miles: " << FL.area_in_square_miles_hundreds << "," << FL.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << FL.median_income_for_one_person_hundreds << "," << FL.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << FL.average_home_value_hundreds << "," << FL.average_home_value_thousands << "\n"
                 << "Number of Counties: " << FL.number_of_counties << "\n"
                 << "Demographics: " << FL.white_population << " % White, " << FL.black_population << " % Black, " << FL.asian_population << " % Asian, " << FL.hispanic_population << " % Hispanic" << "\n";

        else if (number == 10)
            cout << "State: " << GA.name << "\n"
                 << "State's Nickname: " << GA.state_nickname << "\n"
                 << "Population: " << GA.population_hundreds << "," << GA.population_thousands << "," << GA.population_millions << "\n"
                 << "Governor: " << GA.governor << "\n"
                 << "Capitol: " << GA.capitol << "\n"
                 << "Largest City: " << GA.largest_city << "\n"
                 << "Area in Square Miles: " << GA.area_in_square_miles_hundreds << "," << GA.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << GA.median_income_for_one_person_hundreds << "," << GA.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << GA.average_home_value_hundreds << "," << GA.average_home_value_thousands << "\n"
                 << "Number of Counties: " << GA.number_of_counties << "\n"
                 << "Demographics: " << GA.white_population << " % White, " << GA.black_population << " % Black, " << GA.asian_population << " % Asian, " << GA.hispanic_population << " % Hispanic" << "\n";

        else if (number == 11)
            cout << "State: " << HI.name << "\n"
                 << "State's Nickname: " << HI.state_nickname << "\n"
                 << "Population: " << HI.population_hundreds << "," << HI.population_thousands << "," << HI.population_millions << "\n"
                 << "Governor: " << HI.governor << "\n"
                 << "Capitol: " << HI.capitol << "\n"
                 << "Largest City: " << HI.largest_city << "\n"
                 << "Area in Square Miles: " << HI.area_in_square_miles_hundreds << "," << HI.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << HI.median_income_for_one_person_hundreds << "," << HI.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << HI.average_home_value_hundreds << "," << HI.average_home_value_thousands << "\n"
                 << "Number of Counties: " << HI.number_of_counties << "\n"
                 << "Demographics: " << HI.white_population << " % White, " << HI.black_population << " % Black, " << HI.asian_population << " % Asian, " << HI.hispanic_population << " % Hispanic" << "\n";

        else if (number == 12)
            cout << "State: " << ID.name << "\n"
                 << "State's Nickname: " << ID.state_nickname << "\n"
                 << "Population: " << ID.population_hundreds << "," << ID.population_thousands << "," << ID.population_millions << "\n"
                 << "Governor: " << ID.governor << "\n"
                 << "Capitol: " << ID.capitol << "\n"
                 << "Largest City: " << ID.largest_city << "\n"
                 << "Area in Square Miles: " << ID.area_in_square_miles_hundreds << "," << ID.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << ID.median_income_for_one_person_hundreds << "," << ID.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << ID.average_home_value_hundreds << "," << ID.average_home_value_thousands << "\n"
                 << "Number of Counties: " << ID.number_of_counties << "\n"
                 << "Demographics: " << ID.white_population << " % White, " << ID.black_population << " % Black, " << ID.asian_population << " % Asian, " << ID.hispanic_population << " % Hispanic" << "\n";

        else if (number == 13)
            cout << "State: " << IL.name << "\n"
                 << "State's Nickname: " << IL.state_nickname << "\n"
                 << "Population: " << IL.population_hundreds << "," << IL.population_thousands << "," << IL.population_millions << "\n"
                 << "Governor: " << IL.governor << "\n"
                 << "Capitol: " << IL.capitol << "\n"
                 << "Largest City: " << IL.largest_city << "\n"
                 << "Area in Square Miles: " << IL.area_in_square_miles_hundreds << "," << IL.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << IL.median_income_for_one_person_hundreds << "," << IL.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << IL.average_home_value_hundreds << "," << IL.average_home_value_thousands << "\n"
                 << "Number of Counties: " << IL.number_of_counties << "\n"
                 << "Demographics: " << IL.white_population << " % White, " << IL.black_population << " % Black, " << IL.asian_population << " % Asian, " << IL.hispanic_population << " % Hispanic" << "\n";

        else if (number == 14)
            cout << "State: " << IN.name << "\n"
                 << "State's Nickname: " << IN.state_nickname << "\n"
                 << "Population: " << IN.population_hundreds << "," << IN.population_thousands << "," << IN.population_millions << "\n"
                 << "Governor: " << IN.governor << "\n"
                 << "Capitol: " << IN.capitol << "\n"
                 << "Largest City: " << IN.largest_city << "\n"
                 << "Area in Square Miles: " << IN.area_in_square_miles_hundreds << "," << IN.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << IN.median_income_for_one_person_hundreds << "," << IN.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << IN.average_home_value_hundreds << "," << IN.average_home_value_thousands << "\n"
                 << "Number of Counties: " << IN.number_of_counties << "\n"
                 << "Demographics: " << IN.white_population << " % White, " << IN.black_population << " % Black, " << IN.asian_population << " % Asian, " << IN.hispanic_population << " % Hispanic" << "\n";

        else if (number == 15)
            cout << "State: " << IA.name << "\n"
                 << "State's Nickname: " << IA.state_nickname << "\n"
                 << "Population: " << IA.population_hundreds << "," << IA.population_thousands << "," << IA.population_millions << "\n"
                 << "Governor: " << IA.governor << "\n"
                 << "Capitol: " << IA.capitol << "\n"
                 << "Largest City: " << IA.largest_city << "\n"
                 << "Area in Square Miles: " << IA.area_in_square_miles_hundreds << "," << IA.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << IA.median_income_for_one_person_hundreds << "," << IA.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << IA.average_home_value_hundreds << "," << IA.average_home_value_thousands << "\n"
                 << "Number of Counties: " << IA.number_of_counties << "\n"
                 << "Demographics: " << IA.white_population << " % White, " << IA.black_population << " % Black, " << IA.asian_population << " % Asian, " << IA.hispanic_population << " % Hispanic" << "\n";

        else if (number == 16)
            cout << "State: " << KS.name << "\n"
                 << "State's Nickname: " << KS.state_nickname << "\n"
                 << "Population: " << KS.population_hundreds << "," << KS.population_thousands << "," << KS.population_millions << "\n"
                 << "Governor: " << KS.governor << "\n"
                 << "Capitol: " << KS.capitol << "\n"
                 << "Largest City: " << KS.largest_city << "\n"
                 << "Area in Square Miles: " << KS.area_in_square_miles_hundreds << "," << KS.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << KS.median_income_for_one_person_hundreds << "," << KS.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << KS.average_home_value_hundreds << "," << KS.average_home_value_thousands << "\n"
                 << "Number of Counties: " << KS.number_of_counties << "\n"
                 << "Demographics: " << KS.white_population << " % White, " << KS.black_population << " % Black, " << KS.asian_population << " % Asian, " << KS.hispanic_population << " % Hispanic" << "\n";

        else if (number == 17)
            cout << "State: " << KY.name << "\n"
                 << "State's Nickname: " << KY.state_nickname << "\n"
                 << "Population: " << KY.population_hundreds << "," << KY.population_thousands << "," << KY.population_millions << "\n"
                 << "Governor: " << KY.governor << "\n"
                 << "Capitol: " << KY.capitol << "\n"
                 << "Largest City: " << KY.largest_city << "\n"
                 << "Area in Square Miles: " << KY.area_in_square_miles_hundreds << "," << KY.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << KY.median_income_for_one_person_hundreds << "," << KY.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << KY.average_home_value_hundreds << "," << KY.average_home_value_thousands << "\n"
                 << "Number of Counties: " << KY.number_of_counties << "\n"
                 << "Demographics: " << KY.white_population << " % White, " << KY.black_population << " % Black, " << KY.asian_population << " % Asian, " << KY.hispanic_population << " % Hispanic" << "\n";

        else if (number == 18)
            cout << "State: " << LA.name << "\n"
                 << "State's Nickname: " << LA.state_nickname << "\n"
                 << "Population: " << LA.population_hundreds << "," << LA.population_thousands << "," << LA.population_millions << "\n"
                 << "Governor: " << LA.governor << "\n"
                 << "Capitol: " << LA.capitol << "\n"
                 << "Largest City: " << LA.largest_city << "\n"
                 << "Area in Square Miles: " << LA.area_in_square_miles_hundreds << "," << LA.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << LA.median_income_for_one_person_hundreds << "," << LA.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << LA.average_home_value_hundreds << "," << LA.average_home_value_thousands << "\n"
                 << "Number of Counties: " << LA.number_of_counties << "\n"
                 << "Demographics: " << LA.white_population << " % White, " << LA.black_population << " % Black, " << LA.asian_population << " % Asian, " << LA.hispanic_population << " % Hispanic" << "\n";

        else if (number == 19)
            cout << "State: " << ME.name << "\n"
                 << "State's Nickname: " << ME.state_nickname << "\n"
                 << "Population: " << ME.population_hundreds << "," << ME.population_thousands << "," << ME.population_millions << "\n"
                 << "Governor: " << ME.governor << "\n"
                 << "Capitol: " << ME.capitol << "\n"
                 << "Largest City: " << ME.largest_city << "\n"
                 << "Area in Square Miles: " << ME.area_in_square_miles_hundreds << "," << ME.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << ME.median_income_for_one_person_hundreds << "," << ME.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << ME.average_home_value_hundreds << "," << ME.average_home_value_thousands << "\n"
                 << "Number of Counties: " << ME.number_of_counties << "\n"
                 << "Demographics: " << ME.white_population << " % White, " << ME.black_population << " % Black, " << ME.asian_population << " % Asian, " << ME.hispanic_population << " % Hispanic" << "\n";

        else if (number == 20)
            cout << "State: " << MD.name << "\n"
                 << "State's Nickname: " << MD.state_nickname << "\n"
                 << "Population: " << MD.population_hundreds << "," << MD.population_thousands << "," << MD.population_millions << "\n"
                 << "Governor: " << MD.governor << "\n"
                 << "Capitol: " << MD.capitol << "\n"
                 << "Largest City: " << MD.largest_city << "\n"
                 << "Area in Square Miles: " << MD.area_in_square_miles_hundreds << "," << MD.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << MD.median_income_for_one_person_hundreds << "," << MD.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << MD.average_home_value_hundreds << "," << MD.average_home_value_thousands << "\n"
                 << "Number of Counties: " << MD.number_of_counties << "\n"
                 << "Demographics: " << MD.white_population << " % White, " << MD.black_population << " % Black, " << MD.asian_population << " % Asian, " << MD.hispanic_population << " % Hispanic" << "\n";

        else if (number == 21)
            cout << "State: " << MA.name << "\n"
                 << "State's Nickname: " << MA.state_nickname << "\n"
                 << "Population: " << MA.population_hundreds << "," << MA.population_thousands << "," << MA.population_millions << "\n"
                 << "Governor: " << MA.governor << "\n"
                 << "Capitol: " << MA.capitol << "\n"
                 << "Largest City: " << MA.largest_city << "\n"
                 << "Area in Square Miles: " << MA.area_in_square_miles_hundreds << "," << MA.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << MA.median_income_for_one_person_hundreds << "," << MA.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << MA.average_home_value_hundreds << "," << MA.average_home_value_thousands << "\n"
                 << "Number of Counties: " << MA.number_of_counties << "\n"
                 << "Demographics: " << MA.white_population << " % White, " << MA.black_population << " % Black, " << MA.asian_population << " % Asian, " << MA.hispanic_population << " % Hispanic" << "\n";

        else if (number == 22)
            cout << "State: " << MI.name << "\n"
                 << "State's Nickname: " << MI.state_nickname << "\n"
                 << "Population: " << MI.population_hundreds << "," << MI.population_thousands << "," << MI.population_millions << "\n"
                 << "Governor: " << MI.governor << "\n"
                 << "Capitol: " << MI.capitol << "\n"
                 << "Largest City: " << MI.largest_city << "\n"
                 << "Area in Square Miles: " << MI.area_in_square_miles_hundreds << "," << MI.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << MI.median_income_for_one_person_hundreds << "," << MI.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << MI.average_home_value_hundreds << "," << MI.average_home_value_thousands << "\n"
                 << "Number of Counties: " << MI.number_of_counties << "\n"
                 << "Demographics: " << MI.white_population << " % White, " << MI.black_population << " % Black, " << MI.asian_population << " % Asian, " << MI.hispanic_population << " % Hispanic" << "\n";

        else if (number == 23)
            cout << "State: " << MN.name << "\n"
                 << "State's Nickname: " << MN.state_nickname << "\n"
                 << "Population: " << MN.population_hundreds << "," << MN.population_thousands << "," << MN.population_millions << "\n"
                 << "Governor: " << MN.governor << "\n"
                 << "Capitol: " << MN.capitol << "\n"
                 << "Largest City: " << MN.largest_city << "\n"
                 << "Area in Square Miles: " << MN.area_in_square_miles_hundreds << "," << MN.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << MN.median_income_for_one_person_hundreds << "," << MN.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << MN.average_home_value_hundreds << "," << MN.average_home_value_thousands << "\n"
                 << "Number of Counties: " << MN.number_of_counties << "\n"
                 << "Demographics: " << MN.white_population << " % White, " << MN.black_population << " % Black, " << MN.asian_population << " % Asian, " << MN.hispanic_population << " % Hispanic" << "\n";

        else if (number == 24)
            cout << "State: " << MS.name << "\n"
                 << "State's Nickname: " << MS.state_nickname << "\n"
                 << "Population: " << MS.population_hundreds << "," << MS.population_thousands << "," << MS.population_millions << "\n"
                 << "Governor: " << MS.governor << "\n"
                 << "Capitol: " << MS.capitol << "\n"
                 << "Largest City: " << MS.largest_city << "\n"
                 << "Area in Square Miles: " << MS.area_in_square_miles_hundreds << "," << MS.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << MS.median_income_for_one_person_hundreds << "," << ME.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << MS.average_home_value_hundreds << "," << MS.average_home_value_thousands << "\n"
                 << "Number of Counties: " << MS.number_of_counties << "\n"
                 << "Demographics: " << MS.white_population << " % White, " << MS.black_population << " % Black, " << MS.asian_population << " % Asian, " << MS.hispanic_population << " % Hispanic" << "\n";

        else if (number == 25)
            cout << "State: " << MO.name << "\n"
                 << "State's Nickname: " << MO.state_nickname << "\n"
                 << "Population: " << MO.population_hundreds << "," << MO.population_thousands << "," << MO.population_millions << "\n"
                 << "Governor: " << MO.governor << "\n"
                 << "Capitol: " << MO.capitol << "\n"
                 << "Largest City: " << MO.largest_city << "\n"
                 << "Area in Square Miles: " << MO.area_in_square_miles_hundreds << "," << MO.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << MO.median_income_for_one_person_hundreds << "," << MO.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << MO.average_home_value_hundreds << "," << MO.average_home_value_thousands << "\n"
                 << "Number of Counties: " << MO.number_of_counties << "\n"
                 << "Demographics: " << MO.white_population << " % White, " << MO.black_population << " % Black, " << MO.asian_population << " % Asian, " << MO.hispanic_population << " % Hispanic" << "\n";

        else if (number == 26)
            cout << "State: " << MT.name << "\n"
                 << "State's Nickname: " << MT.state_nickname << "\n"
                 << "Population: " << MT.population_hundreds << "," << MT.population_thousands << "," << MT.population_millions << "\n"
                 << "Governor: " << MT.governor << "\n"
                 << "Capitol: " << MT.capitol << "\n"
                 << "Largest City: " << MT.largest_city << "\n"
                 << "Area in Square Miles: " << MT.area_in_square_miles_hundreds << "," << MT.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << MT.median_income_for_one_person_hundreds << "," << MT.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << MT.average_home_value_hundreds << "," << MT.average_home_value_thousands << "\n"
                 << "Number of Counties: " << MT.number_of_counties << "\n"
                 << "Demographics: " << MT.white_population << " % White, " << MT.black_population << " % Black, " << MT.asian_population << " % Asian, " << MT.hispanic_population << " % Hispanic" << "\n";

        else if (number == 27)
            cout << "State: " << NE.name << "\n"
                 << "State's Nickname: " << NE.state_nickname << "\n"
                 << "Population: " << NE.population_hundreds << "," << NE.population_thousands << "," << NE.population_millions << "\n"
                 << "Governor: " << NE.governor << "\n"
                 << "Capitol: " << NE.capitol << "\n"
                 << "Largest City: " << NE.largest_city << "\n"
                 << "Area in Square Miles: " << NE.area_in_square_miles_hundreds << "," << NE.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << NE.median_income_for_one_person_hundreds << "," << NE.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << NE.average_home_value_hundreds << "," << NE.average_home_value_thousands << "\n"
                 << "Number of Counties: " << NE.number_of_counties << "\n"
                 << "Demographics: " << NE.white_population << " % White, " << NE.black_population << " % Black, " << NE.asian_population << " % Asian, " << NE.hispanic_population << " % Hispanic" << "\n";

        else if (number == 28)
            cout << "State: " << NV.name << "\n"
                 << "State's Nickname: " << NV.state_nickname << "\n"
                 << "Population: " << NV.population_hundreds << "," << NV.population_thousands << "," << NV.population_millions << "\n"
                 << "Governor: " << NV.governor << "\n"
                 << "Capitol: " << NV.capitol << "\n"
                 << "Largest City: " << NV.largest_city << "\n"
                 << "Area in Square Miles: " << NV.area_in_square_miles_hundreds << "," << NV.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << NV.median_income_for_one_person_hundreds << "," << NV.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << NV.average_home_value_hundreds << "," << NV.average_home_value_thousands << "\n"
                 << "Number of Counties: " << NV.number_of_counties << "\n"
                 << "Demographics: " << NV.white_population << " % White, " << NV.black_population << " % Black, " << NV.asian_population << " % Asian, " << NV.hispanic_population << " % Hispanic" << "\n";

        else if (number == 29)
            cout << "State: " << NH.name << "\n"
                 << "State's Nickname: " << NH.state_nickname << "\n"
                 << "Population: " << NH.population_hundreds << "," << NH.population_thousands << "," << NH.population_millions << "\n"
                 << "Governor: " << NH.governor << "\n"
                 << "Capitol: " << NH.capitol << "\n"
                 << "Largest City: " << NH.largest_city << "\n"
                 << "Area in Square Miles: " << NH.area_in_square_miles_hundreds << "," << NH.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << NH.median_income_for_one_person_hundreds << "," << NH.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << NH.average_home_value_hundreds << "," << NH.average_home_value_thousands << "\n"
                 << "Number of Counties: " << NH.number_of_counties << "\n"
                 << "Demographics: " << NH.white_population << " % White, " << NH.black_population << " % Black, " << NH.asian_population << " % Asian, " << NH.hispanic_population << " % Hispanic" << "\n";

        else if (number == 30)
            cout << "State: " << NJ.name << "\n"
                 << "State's Nickname: " << NJ.state_nickname << "\n"
                 << "Population: " << NJ.population_hundreds << "," << NJ.population_thousands << "," << NJ.population_millions << "\n"
                 << "Governor: " << NJ.governor << "\n"
                 << "Capitol: " << NJ.capitol << "\n"
                 << "Largest City: " << NJ.largest_city << "\n"
                 << "Area in Square Miles: " << NJ.area_in_square_miles_hundreds << "," << NJ.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << NJ.median_income_for_one_person_hundreds << "," << NJ.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << NJ.average_home_value_hundreds << "," << NJ.average_home_value_thousands << "\n"
                 << "Number of Counties: " << NJ.number_of_counties << "\n"
                 << "Demographics: " << NJ.white_population << " % White, " << NJ.black_population << " % Black, " << NJ.asian_population << " % Asian, " << NJ.hispanic_population << " % Hispanic" << "\n";

        else if (number == 31)
            cout << "State: " << NM.name << "\n"
                 << "State's Nickname: " << NM.state_nickname << "\n"
                 << "Population: " << NM.population_hundreds << "," << NM.population_thousands << "," << NM.population_millions << "\n"
                 << "Governor: " << NM.governor << "\n"
                 << "Capitol: " << NM.capitol << "\n"
                 << "Largest City: " << NM.largest_city << "\n"
                 << "Area in Square Miles: " << NM.area_in_square_miles_hundreds << "," << NM.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << NM.median_income_for_one_person_hundreds << "," << NM.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << NM.average_home_value_hundreds << "," << NM.average_home_value_thousands << "\n"
                 << "Number of Counties: " << NM.number_of_counties << "\n"
                 << "Demographics: " << NM.white_population << " % White, " << NM.black_population << " % Black, " << NM.asian_population << " % Asian, " << NM.hispanic_population << " % Hispanic" << "\n";

        else if (number == 32)
            cout << "State: " << NY.name << "\n"
                 << "State's Nickname: " << NY.state_nickname << "\n"
                 << "Population: " << NY.population_hundreds << "," << NY.population_thousands << "," << NY.population_millions << "\n"
                 << "Governor: " << NY.governor << "\n"
                 << "Capitol: " << NY.capitol << "\n"
                 << "Largest City: " << NY.largest_city << "\n"
                 << "Area in Square Miles: " << NY.area_in_square_miles_hundreds << "," << NY.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << NY.median_income_for_one_person_hundreds << "," << NY.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << NY.average_home_value_hundreds << "," << NY.average_home_value_thousands << "\n"
                 << "Number of Counties: " << NY.number_of_counties << "\n"
                 << "Demographics: " << NY.white_population << " % White, " << NY.black_population << " % Black, " << NY.asian_population << " % Asian, " << NY.hispanic_population << " % Hispanic" << "\n";

        else if (number == 33)
            cout << "State: " << NC.name << "\n"
                 << "State's Nickname: " << NC.state_nickname << "\n"
                 << "Population: " << NC.population_hundreds << "," << NC.population_thousands << "," << NC.population_millions << "\n"
                 << "Governor: " << NC.governor << "\n"
                 << "Capitol: " << NC.capitol << "\n"
                 << "Largest City: " << NC.largest_city << "\n"
                 << "Area in Square Miles: " << NC.area_in_square_miles_hundreds << "," << NC.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << NC.median_income_for_one_person_hundreds << "," << NC.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << NC.average_home_value_hundreds << "," << NC.average_home_value_thousands << "\n"
                 << "Number of Counties: " << NC.number_of_counties << "\n"
                 << "Demographics: " << NC.white_population << " % White, " << NC.black_population << " % Black, " << NC.asian_population << " % Asian, " << NC.hispanic_population << " % Hispanic" << "\n";

        else if (number == 34)
            cout << "State: " << ND.name << "\n"
                 << "State's Nickname: " << ND.state_nickname << "\n"
                 << "Population: " << ND.population_hundreds << "," << ND.population_thousands << "," << ND.population_millions << "\n"
                 << "Governor: " << ND.governor << "\n"
                 << "Capitol: " << ND.capitol << "\n"
                 << "Largest City: " << ND.largest_city << "\n"
                 << "Area in Square Miles: " << ND.area_in_square_miles_hundreds << "," << ND.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << ND.median_income_for_one_person_hundreds << "," << ND.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << ND.average_home_value_hundreds << "," << ND.average_home_value_thousands << "\n"
                 << "Number of Counties: " << ND.number_of_counties << "\n"
                 << "Demographics: " << ND.white_population << " % White, " << ND.black_population << " % Black, " << ND.asian_population << " % Asian, " << ND.hispanic_population << " % Hispanic" << "\n";

        else if (number == 35)
            cout << "State: " << OH.name << "\n"
                 << "State's Nickname: " << OH.state_nickname << "\n"
                 << "Population: " << OH.population_hundreds << "," << OH.population_thousands << "," << OH.population_millions << "\n"
                 << "Governor: " << OH.governor << "\n"
                 << "Capitol: " << OH.capitol << "\n"
                 << "Largest City: " << OH.largest_city << "\n"
                 << "Area in Square Miles: " << OH.area_in_square_miles_hundreds << "," << OH.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << OH.median_income_for_one_person_hundreds << "," << OH.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << OH.average_home_value_hundreds << "," << OH.average_home_value_thousands << "\n"
                 << "Number of Counties: " << OH.number_of_counties << "\n"
                 << "Demographics: " << OH.white_population << " % White, " << OH.black_population << " % Black, " << OH.asian_population << " % Asian, " << OH.hispanic_population << " % Hispanic" << "\n";

        else if (number == 36)
            cout << "State: " << OK.name << "\n"
                 << "State's Nickname: " << OK.state_nickname << "\n"
                 << "Population: " << OK.population_hundreds << "," << OK.population_thousands << "," << OK.population_millions << "\n"
                 << "Governor: " << OK.governor << "\n"
                 << "Capitol: " << OK.capitol << "\n"
                 << "Largest City: " << OK.largest_city << "\n"
                 << "Area in Square Miles: " << OK.area_in_square_miles_hundreds << "," << OK.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << OK.median_income_for_one_person_hundreds << "," << OK.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << OK.average_home_value_hundreds << "," << OK.average_home_value_thousands << "\n"
                 << "Number of Counties: " << OK.number_of_counties << "\n"
                 << "Demographics: " << OK.white_population << " % White, " << OK.black_population << " % Black, " << OK.asian_population << " % Asian, " << OK.hispanic_population << " % Hispanic" << "\n";

        else if (number == 37)
            cout << "State: " << OR.name << "\n"
                 << "State's Nickname: " << OR.state_nickname << "\n"
                 << "Population: " << OR.population_hundreds << "," << OR.population_thousands << "," << OR.population_millions << "\n"
                 << "Governor: " << OR.governor << "\n"
                 << "Capitol: " << OR.capitol << "\n"
                 << "Largest City: " << OR.largest_city << "\n"
                 << "Area in Square Miles: " << OR.area_in_square_miles_hundreds << "," << OR.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << OR.median_income_for_one_person_hundreds << "," << OR.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << OR.average_home_value_hundreds << "," << OR.average_home_value_thousands << "\n"
                 << "Number of Counties: " << OR.number_of_counties << "\n"
                 << "Demographics: " << OR.white_population << " % White, " << OR.black_population << " % Black, " << OR.asian_population << " % Asian, " << OR.hispanic_population << " % Hispanic" << "\n";

        else if (number == 38)
            cout << "State: " << PA.name << "\n"
                 << "State's Nickname: " << PA.state_nickname << "\n"
                 << "Population: " << PA.population_hundreds << "," << PA.population_thousands << "," << PA.population_millions << "\n"
                 << "Governor: " << PA.governor << "\n"
                 << "Capitol: " << PA.capitol << "\n"
                 << "Largest City: " << PA.largest_city << "\n"
                 << "Area in Square Miles: " << PA.area_in_square_miles_hundreds << "," << PA.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << PA.median_income_for_one_person_hundreds << "," << PA.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << PA.average_home_value_hundreds << "," << PA.average_home_value_thousands << "\n"
                 << "Number of Counties: " << PA.number_of_counties << "\n"
                 << "Demographics: " << PA.white_population << " % White, " << PA.black_population << " % Black, " << PA.asian_population << " % Asian, " << PA.hispanic_population << " % Hispanic" << "\n";

        else if (number == 39)
            cout << "State: " << RI.name << "\n"
                 << "State's Nickname: " << RI.state_nickname << "\n"
                 << "Population: " << RI.population_hundreds << "," << RI.population_thousands << "," << RI.population_millions << "\n"
                 << "Governor: " << RI.governor << "\n"
                 << "Capitol: " << RI.capitol << "\n"
                 << "Largest City: " << RI.largest_city << "\n"
                 << "Area in Square Miles: " << RI.area_in_square_miles_hundreds << "," << RI.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << RI.median_income_for_one_person_hundreds << "," << RI.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << RI.average_home_value_hundreds << "," << RI.average_home_value_thousands << "\n"
                 << "Number of Counties: " << RI.number_of_counties << "\n"
                 << "Demographics: " << RI.white_population << " % White, " << RI.black_population << " % Black, " << RI.asian_population << " % Asian, " << RI.hispanic_population << " % Hispanic" << "\n";

        else if (number == 40)
            cout << "State: " << SC.name << "\n"
                 << "State's Nickname: " << SC.state_nickname << "\n"
                 << "Population: " << SC.population_hundreds << "," << SC.population_thousands << "," << SC.population_millions << "\n"
                 << "Governor: " << SC.governor << "\n"
                 << "Capitol: " << SC.capitol << "\n"
                 << "Largest City: " << SC.largest_city << "\n"
                 << "Area in Square Miles: " << SC.area_in_square_miles_hundreds << "," << SC.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << SC.median_income_for_one_person_hundreds << "," << SC.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << SC.average_home_value_hundreds << "," << SC.average_home_value_thousands << "\n"
                 << "Number of Counties: " << SC.number_of_counties << "\n"
                 << "Demographics: " << SC.white_population << " % White, " << SC.black_population << " % Black, " << SC.asian_population << " % Asian, " << SC.hispanic_population << " % Hispanic" << "\n";

        else if (number == 41)
            cout << "State: " << SD.name << "\n"
                 << "State's Nickname: " << SD.state_nickname << "\n"
                 << "Population: " << SD.population_hundreds << "," << SD.population_thousands << "," << SD.population_millions << "\n"
                 << "Governor: " << SD.governor << "\n"
                 << "Capitol: " << SD.capitol << "\n"
                 << "Largest City: " << SD.largest_city << "\n"
                 << "Area in Square Miles: " << SD.area_in_square_miles_hundreds << "," << SD.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << SD.median_income_for_one_person_hundreds << "," << SD.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << SD.average_home_value_hundreds << "," << SD.average_home_value_thousands << "\n"
                 << "Number of Counties: " << SD.number_of_counties << "\n"
                 << "Demographics: " << SD.white_population << " % White, " << SD.black_population << " % Black, " << SD.asian_population << " % Asian, " << SD.hispanic_population << " % Hispanic" << "\n";

        else if (number == 42)
            cout << "State: " << TN.name << "\n"
                 << "State's Nickname: " << TN.state_nickname << "\n"
                 << "Population: " << TN.population_hundreds << "," << TN.population_thousands << "," << TN.population_millions << "\n"
                 << "Governor: " << TN.governor << "\n"
                 << "Capitol: " << TN.capitol << "\n"
                 << "Largest City: " << TN.largest_city << "\n"
                 << "Area in Square Miles: " << TN.area_in_square_miles_hundreds << "," << TN.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << TN.median_income_for_one_person_hundreds << "," << TN.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << TN.average_home_value_hundreds << "," << TN.average_home_value_thousands << "\n"
                 << "Number of Counties: " << TN.number_of_counties << "\n"
                 << "Demographics: " << TN.white_population << " % White, " << TN.black_population << " % Black, " << TN.asian_population << " % Asian, " << TN.hispanic_population << " % Hispanic" << "\n";

        else if (number == 43)
            cout << "State: " << TX.name << "\n"
                 << "State's Nickname: " << TX.state_nickname << "\n"
                 << "Population: " << TX.population_hundreds << "," << TX.population_thousands << "," << TX.population_millions << "\n"
                 << "Governor: " << TX.governor << "\n"
                 << "Capitol: " << TX.capitol << "\n"
                 << "Largest City: " << TX.largest_city << "\n"
                 << "Area in Square Miles: " << TX.area_in_square_miles_hundreds << "," << TX.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << TX.median_income_for_one_person_hundreds << "," << TX.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << TX.average_home_value_hundreds << "," << TX.average_home_value_thousands << "\n"
                 << "Number of Counties: " << TX.number_of_counties << "\n"
                 << "Demographics: " << TX.white_population << " % White, " << TX.black_population << " % Black, " << TX.asian_population << " % Asian, " << TX.hispanic_population << " % Hispanic" << "\n";

        else if (number == 44)
            cout << "State: " << UT.name << "\n"
                 << "State's Nickname: " << UT.state_nickname << "\n"
                 << "Population: " << UT.population_hundreds << "," << UT.population_thousands << "," << UT.population_millions << "\n"
                 << "Governor: " << UT.governor << "\n"
                 << "Capitol: " << UT.capitol << "\n"
                 << "Largest City: " << UT.largest_city << "\n"
                 << "Area in Square Miles: " << UT.area_in_square_miles_hundreds << "," << UT.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << UT.median_income_for_one_person_hundreds << "," << UT.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << UT.average_home_value_hundreds << "," << UT.average_home_value_thousands << "\n"
                 << "Number of Counties: " << UT.number_of_counties << "\n"
                 << "Demographics: " << UT.white_population << " % White, " << UT.black_population << " % Black, " << UT.asian_population << " % Asian, " << UT.hispanic_population << " % Hispanic" << "\n";

        else if (number == 45)
            cout << "State: " << VT.name << "\n"
                 << "State's Nickname: " << VT.state_nickname << "\n"
                 << "Population: " << VT.population_hundreds << "," << VT.population_thousands << "," << VT.population_millions << "\n"
                 << "Governor: " << VT.governor << "\n"
                 << "Capitol: " << VT.capitol << "\n"
                 << "Largest City: " << VT.largest_city << "\n"
                 << "Area in Square Miles: " << VT.area_in_square_miles_hundreds << "," << VT.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << VT.median_income_for_one_person_hundreds << "," << VT.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << VT.average_home_value_hundreds << "," << VT.average_home_value_thousands << "\n"
                 << "Number of Counties: " << VT.number_of_counties << "\n"
                 << "Demographics: " << VT.white_population << " % White, " << VT.black_population << " % Black, " << VT.asian_population << " % Asian, " << VT.hispanic_population << " % Hispanic" << "\n";

        else if (number == 46)
            cout << "State: " << VA.name << "\n"
                 << "State's Nickname: " << VA.state_nickname << "\n"
                 << "Population: " << VA.population_hundreds << "," << VA.population_thousands << "," << VA.population_millions << "\n"
                 << "Governor: " << VA.governor << "\n"
                 << "Capitol: " << VA.capitol << "\n"
                 << "Largest City: " << VA.largest_city << "\n"
                 << "Area in Square Miles: " << VA.area_in_square_miles_hundreds << "," << VA.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << VA.median_income_for_one_person_hundreds << "," << VA.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << VA.average_home_value_hundreds << "," << VA.average_home_value_thousands << "\n"
                 << "Number of Counties: " << VA.number_of_counties << "\n"
                 << "Demographics: " << VA.white_population << " % White, " << VA.black_population << " % Black, " << VA.asian_population << " % Asian, " << VA.hispanic_population << " % Hispanic" << "\n";

        else if (number == 47)
            cout << "State: " << WA.name << "\n"
                 << "State's Nickname: " << WA.state_nickname << "\n"
                 << "Population: " << WA.population_hundreds << "," << WA.population_thousands << "," << WA.population_millions << "\n"
                 << "Governor: " << WA.governor << "\n"
                 << "Capitol: " << WA.capitol << "\n"
                 << "Largest City: " << WA.largest_city << "\n"
                 << "Area in Square Miles: " << WA.area_in_square_miles_hundreds << "," << WA.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << WA.median_income_for_one_person_hundreds << "," << WA.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << WA.average_home_value_hundreds << "," << WA.average_home_value_thousands << "\n"
                 << "Number of Counties: " << WA.number_of_counties << "\n"
                 << "Demographics: " << WA.white_population << " % White, " << WA.black_population << " % Black, " << WA.asian_population << " % Asian, " << WA.hispanic_population << " % Hispanic" << "\n";

        else if (number == 48)
            cout << "State: " << WV.name << "\n"
                 << "State's Nickname: " << WV.state_nickname << "\n"
                 << "Population: " << WV.population_hundreds << "," << WV.population_thousands << "," << WV.population_millions << "\n"
                 << "Governor: " << WV.governor << "\n"
                 << "Capitol: " << WV.capitol << "\n"
                 << "Largest City: " << WV.largest_city << "\n"
                 << "Area in Square Miles: " << WV.area_in_square_miles_hundreds << "," << WV.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << WV.median_income_for_one_person_hundreds << "," << WV.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << WV.average_home_value_hundreds << "," << WV.average_home_value_thousands << "\n"
                 << "Number of Counties: " << WV.number_of_counties << "\n"
                 << "Demographics: " << WV.white_population << " % White, " << WV.black_population << " % Black, " << WV.asian_population << " % Asian, " << WV.hispanic_population << " % Hispanic" << "\n";

        else if (number == 49)
            cout << "State: " << WI.name << "\n"
                 << "State's Nickname: " << WI.state_nickname << "\n"
                 << "Population: " << WI.population_hundreds << "," << WI.population_thousands << "," << WI.population_millions << "\n"
                 << "Governor: " << WI.governor << "\n"
                 << "Capitol: " << WI.capitol << "\n"
                 << "Largest City: " << WI.largest_city << "\n"
                 << "Area in Square Miles: " << WI.area_in_square_miles_hundreds << "," << WI.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << WI.median_income_for_one_person_hundreds << "," << WI.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << WI.average_home_value_hundreds << "," << WI.average_home_value_thousands << "\n"
                 << "Number of Counties: " << WI.number_of_counties << "\n"
                 << "Demographics: " << WI.white_population << " % White, " << WI.black_population << " % Black, " << WI.asian_population << " % Asian, " << WI.hispanic_population << " % Hispanic" << "\n";

        else if (number == 50)
            cout << "State: " << WY.name << "\n"
                 << "State's Nickname: " << WY.state_nickname << "\n"
                 << "Population: " << WY.population_hundreds << "," << WY.population_thousands << "," << WY.population_millions << "\n"
                 << "Governor: " << WY.governor << "\n"
                 << "Capitol: " << WY.capitol << "\n"
                 << "Largest City: " << WY.largest_city << "\n"
                 << "Area in Square Miles: " << WY.area_in_square_miles_hundreds << "," << WY.area_in_square_miles_thousands << " Square Miles" << "\n"
                 << "Median Income for One Person: " << "$ " << WY.median_income_for_one_person_hundreds << "," << WY.median_income_for_one_person_thousands << "\n"
                 << "Average Home Value: " << "$ " << WY.average_home_value_hundreds << "," << WY.average_home_value_thousands << "\n"
                 << "Number of Counties: " << WY.number_of_counties << "\n"
                 << "Demographics: " << WY.white_population << " % White, " << WY.black_population << " % Black, " << WY.asian_population << " % Asian, " << WY.hispanic_population << " % Hispanic" << "\n";

        else
            cout << "Please enter a valid number 1-50 or enter 0 to quit: ";
        cout << "Please enter another number 1-50 or enter 0 to quit: ";
        cin >> number;
    }
    return 0;
}











































