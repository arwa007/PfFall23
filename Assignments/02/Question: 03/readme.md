# Arwa Feroze 23k-0022
## Pseudocode:

    Function main():
    Declare flights as a 2D array representing flight availability
    Initialize flights with availability and prices
    
    Display "Flight Availability Analysis"
    Display "Day    Morning    Price    Evening    Price"
    For i from 0 to 4:
        Display ith Day, Morning availability, Morning Price, Evening availability, Evening Price
    
    Initialize bestMorningDay = -1, bestMorningPrice = -1
    For i from 0 to 4:
        If flights[i][0] == 1 AND (bestMorningDay == -1 OR flights[i][1] < bestMorningPrice):
            Set bestMorningDay = i + 1
            Set bestMorningPrice = flights[i][1]
    If bestMorningDay != -1:
        Display "Best morning flight option: Day", bestMorningDay, "- Price:", bestMorningPrice
    Else:
        Display "No morning flights available."
    
    Initialize bestEveningDay = -1, bestEveningPrice = -1
    For i from 0 to 4:
        If flights[i][2] == 1 AND (bestEveningDay == -1 OR flights[i][3] < bestEveningPrice):
            Set bestEveningDay = i + 1
            Set bestEveningPrice = flights[i][3]
    If bestEveningDay != -1:
        Display "Best evening flight option: Day", bestEveningDay, "- Price:", bestEveningPrice
    Else:
        Display "No evening flights available."
    
    Set specificDay = 3  // Wednesday
    Display "Flight information for Wednesday"
    Display "Day 3: Morning: ", flights[specificDay - 1][0]
    If flights[specificDay - 1][0] == 1:
        Display " Price:", flights[specificDay - 1][1]
    Else:
        Display " Not available"
    Display "  Evening: ", flights[specificDay - 1][2]
    If flights[specificDay - 1][2] == 1:
        Display " Price:", flights[specificDay - 1][3]
    Else:
        Display " Not available"

