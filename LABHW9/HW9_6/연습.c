
{
	int cash, bread, cookie, cola, total;

	printf("Enter ±İ¾×:");
	scanf_s("%d", &cash);

	for (bread = 1; ; bread++)
	{
		for (cookie = 1; ; cookie++)
		{
			for (cola = 1; ; cola++)
			{
				total = bread * 500 + cookie * 700 + cola * 400;

				if (total == cash)
					printf("»§: %d	ÄíÅ°: %d	Äİ¶ó: %d\n", bread, cookie, cola);
				else if (total > cash)
					break;
			}
			if (cola != 2)
				cola = 1;

			total = bread * 500 + cookie * 700 + cola * 400;

			if (total == cash)
				printf("»§: %d	ÄíÅ°: %d	Äİ¶ó: %d\n", bread, cookie, cola);
			else if (total > cash)
				break;
		}
		cookie = 1;

		total = bread * 500 + cookie * 700 + cola * 400;

		if (total == cash)
			printf("»§: %d	ÄíÅ°: %d	Äİ¶ó: %d\n", bread, cookie, cola);
		else if (total > cash)
			break;
	}

	return 0;
}