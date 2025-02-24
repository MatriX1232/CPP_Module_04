/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:52:30 by root              #+#    #+#             */
/*   Updated: 2025/02/18 13:48:07 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    // Animal  *animal = new Animal();
    Animal  *cat = new Cat();
    Animal  *dog = new Dog();

    // animal->makeSound();
    cat->makeSound();
    dog->makeSound();

    // delete animal;
    delete cat;
    delete dog;

    return (0);
}