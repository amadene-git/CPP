/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 18:11:24 by admadene          #+#    #+#             */
/*   Updated: 2021/07/01 18:30:38 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main()
{
	std::ifstream	ifs;
	std::string str;
	std::string line;

	ifs.open("file");

	std::string str3 ("There are two needles in this haystack with needles.");
  std::string str2 ("needle");

  // different member versions of find in the same order as above:
  std::size_t found = str3.find(str2);
  if (found!=std::string::npos)
    std::cout << "first 'needle' found at: " << found << '\n';

  found=str3.find("needles are small",found+1,6);
  if (found!=std::string::npos)
    std::cout << "second 'needle' found at: " << found << '\n';

  found=str3.find("haystack");
  if (found!=std::string::npos)
    std::cout << "'haystack' also found at: " << found << '\n';

  found=str3.find('.');
  if (found!=std::string::npos)
    std::cout << "Period found at: " << found << '\n';

  // let's replace the first needle:
  str3.replace(str3.find(str2),str2.length(),"preposition");
  std::cout << str << '\n';



	while (!ifs.eof())
	{
		getline(ifs, line);

		if (!ifs.eof())
		{
		//	std::cout << line << std::endl;
			str.append(line);
			str.append("\n");
	
		}
	}

	std::cout << ifs.eof() << std::endl;
	
	std::cout << str << std::endl;

	ifs.close();

	std::size_t	i = 0;
	std::string	s1 = "rhey\n";
	std::string s2 = "copains";

	while (i != std::string::npos)
	{
		i = str.find(s1);
	

		if (i != std::string::npos)
		{
			str.erase(i, s1.size());
			str.insert(i, s2);
		}
	}
	std::cout << str << std::endl;

	std::ofstream ofs;

	ofs.open("file")
	
	return (0);
}
