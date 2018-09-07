int main()
{
	cout << "\n-----------*** Slect one of theme ***--------------"<< endl;
	cout << "1. hollow square star pattern\n";
	cout << "2. hollow square star pattern with diagonal\n";
	cout << "3. Hollow Right Triangle Star Pattern\n";
	cout << "4. Mirrored Right Triangle Star Pattern\n";
	cout << "5. Hollow Mirrored Right Triangle Star Pattern\n";
	cout << "6. Hollow Inverted Mirrored Right Triangle Star Pattern\n";
	cout << "7. Pyramid Star Pattern\n";
	cout << "8. Mirrored Half Diamond Star Pattern\n";
	cout << "9. Hollow Diamond Star Pattern\n";
	cout << "10.Diamond Star Pattern.\n";
	cout << "Chose from 1 to 10 :";

	int choise=0;
	cin >> choise;
	clear();
	switch(choise)
	{
		case 1: pro_1(); break;
		case 2: pro_2();break;
		case 3: pro_3();break;
		case 4: pro_4();break;
		case 5: pro_5();break;
		case 6: pro_6();break;
		case 7: pro_7();break;
		case 8: pro_8();break;
		case 9: pro_9();break;
		case 10:pro_10();break;
		default :cout <<" --------------*** please enter courrect option ***------------------------";
	} 
	return 0;
}
