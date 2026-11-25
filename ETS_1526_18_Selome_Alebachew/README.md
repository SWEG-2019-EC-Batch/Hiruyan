IPO ANALYSIS for the bus_ticket_fare C++ document 


INPUT
1. Accept the traveller's destination code from the available destination options.
2. Accept the base fare and extra luggage rate for the selected destination.
3. Accept the traveller's age.
4. Accept the traveller's student status (Y/N).
5. Accept the weight of the traveller's bag in kilograms.

PROCESSING
1. Use a switch statement to identify the selected destination based on its assigned code.
2. Validate the entered age, base fare, extra luggage rate, and bag weight.
3. Check whether the bag weight exceeds the free luggage limit of 20 kg.
4. Calculate the extra luggage charge if the bag weight exceeds 20 kg; otherwise, assign zero extra charge.
5. Calculate the age-based discount: 50% for children aged 12 or below and 25% for elders aged 60 or above.
6. Check whether the traveller is a student and add an additional 15% discount if applicable.
7. Calculate the total discount amount based on the base fare.
8. Calculate the final fare by subtracting the discount amount from the base fare and adding the extra luggage charge.

OUTPUT
1. Display the departure place (Addis Ababa).
2. Display the selected destination.
3. Display the base fare.
4. Display the bag weight.
5. Display the extra luggage charge.
6. Display the total discount percentage.
7. Display the discount amount.
8. Display the final total fare
