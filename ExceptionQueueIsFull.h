#include <iostream>
#include <exception>

class ExceptionQueueIsFull : public std::exception
{
	virtual const char* what() const noexcept override
	{
		return "Error 100 - Queue is full\n";
	}
};