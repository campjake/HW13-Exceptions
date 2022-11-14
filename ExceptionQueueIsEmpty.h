#include <iostream>
#include <exception>

class ExceptionQueueIsEmpty : public std::exception
{
	const char* what() const noexcept
	{
		return "Error 200 - Cannot Dequeue from an empty list\n";
	}
};