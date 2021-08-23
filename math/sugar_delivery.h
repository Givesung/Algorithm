int sugar_delivery(int &sugar)
{
    int count = 0;

	while (n>=0) {
		if (n % 5 == 0) {
			count += (n / 5);
			cout << count << endl;
			return 0;
		}
		n -= 3;
		count++;
	}
	cout << -1 << endl;
}
