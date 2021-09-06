#include <iostream>
#include <fstream>

#define BUF_SIZE 10000

void	write_in_file(std::ifstream& ifile, std::ofstream& ofile,
						std::string& s1, std::string& s2)
{
	char		buf[BUF_SIZE];
	std::string buf_str;
	size_t pos;

	while (ifile.getline(buf, BUF_SIZE))
	{
		buf_str = std::string(buf);
		pos = buf_str.find(s1);
		while (pos != std::string::npos)
		{
			
			buf_str.erase(pos, s1.size());
			buf_str.insert(pos, s2);
			pos = buf_str.find(s1, pos + 1);
		}
		ofile << buf_str + '\n';
	}
}

void	get_str(std::string& s, std::string message)
{
	std::cout << message;
	while(std::getline(std::cin, s))
	{
		if (s != "")
			break;
		std::cout << "error: Empty line" << std::endl;
		std::cout << message;
	}
}

int     main(void)
{
	std::string s1;
    std::string s2;
    std::string file_name;
	std::ifstream ifile;
	std::ofstream ofile;

	std::cout << "Enter file name: ";
    while (std::getline(std::cin, file_name) && (file_name != "EXIT"))
    {
		ifile.open(file_name);
		if (ifile.is_open())
		{
			get_str(s1, "Enter s1: ");
			get_str(s2, "Enter s2: ");
			ofile.open(file_name + ".replace");
			if (!ofile.is_open())
				std::cout << "error: Bad file name" << std::endl;
			write_in_file(ifile, ofile, s1, s2);		
			ofile.close();
			ifile.close();
			break ;
		}
		else
			std::cout << "error: Bad file name" << std::endl;	
		std::cout << "Enter file name(EXIT to exit): ";
    }
    return (0);
}