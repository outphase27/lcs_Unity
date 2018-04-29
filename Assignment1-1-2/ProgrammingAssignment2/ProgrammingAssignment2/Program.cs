using System;

namespace ProgrammingAssignment2
{
    /// <summary>
    /// Programming Assignment 2 solution
    /// </summary>
    class MainClass
    {
        /// <summary>
        /// Deals 2 cards to 3 players and displays cards for players
        /// </summary>
        /// <param name="args">command-line arguments</param>
        public static void Main(string[] args)
        {
            // print welcome message
			Console.WriteLine("Welcome to the game!");
            // create and shuffle a deck
			Deck deck = new Deck();
			deck.Shuffle();
            // deal 2 cards each to 3 players (deal properly, dealing
            // the first card to each player before dealing the
            // second card to each player)
			Card a_1 = deck.TakeTopCard();
			Card b_1 = deck.TakeTopCard();
			Card c_1 = deck.TakeTopCard();
			Card a_2 = deck.TakeTopCard();
			Card b_2 = deck.TakeTopCard();
			Card c_2 = deck.TakeTopCard();
            // flip all the cards over
			a_1.FlipOver();
			a_2.FlipOver();
			b_1.FlipOver();
			b_2.FlipOver();
			c_1.FlipOver();
			c_2.FlipOver();
            // print the cards for player 1
			Console.WriteLine("The cards of player 1 are "+a_1.Rank+" of "+a_1.Suit+" and "+a_2.Rank+" of "+a_2.Suit);
            // print the cards for player 2
			Console.WriteLine("The cards of player 2 are "+b_1.Rank+" of "+b_1.Suit+" and "+b_2.Rank+" of "+b_2.Suit);
            // print the cards for player 3
			Console.WriteLine("The cards of player 3 are "+c_1.Rank+" of "+c_1.Suit+" and "+c_2.Rank+" of "+c_2.Suit);
            Console.WriteLine();
        }
    }
}
