int __io_putchar(int c)
{
	HAL_UART_Transmit(&huart2, &c, 1, 10);
	return c;
}
