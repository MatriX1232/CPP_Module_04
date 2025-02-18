/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 20:15:55 by root              #+#    #+#             */
/*   Updated: 2025/02/18 14:09:50 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    public:
        Brain();
        Brain(const Brain &other);
        virtual ~Brain();

        Brain   &operator=(const Brain &source);

        void        setIdea(std::string idea, int index);
        std::string getIdea(int index) const;

    private:
	    std::string _ideas[100];
};

#endif