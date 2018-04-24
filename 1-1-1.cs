using System;

namespace E111
{
	class MainClass
	{
		public static void Main (string[] args)
		{
			/*
			int age = 25;
			Console.WriteLine ("Zhaoshen Liu and his age is "+age);
			Console.Write ("Enter first altitude: ");
			int firstAltitude = int.Parse (Console.ReadLine ());
			Console.Write ("Enter second altitude: ");
			int secondAltitude = int.Parse (Console.ReadLine ());
			int altitudeChange = firstAltitude - secondAltitude;
			Console.WriteLine ("The altitude change is " + altitudeChange);

            // E6
			Console.WriteLine("Please Input your angle: ");
			float angle = float.Parse (Console.ReadLine ());
			float cosine = (float)Math.Cos (angle / 180 * Math.PI);
			Console.WriteLine (cosine);


			*/

			//Programming Assignment 1
			Console.WriteLine("Welcome! This application will calculate the distance between two points and angle of two points");
			Console.Write("Please enter first X value: ");
			float point1x = float.Parse(Console.ReadLine());
			Console.Write("Please enter first Y value: ");
			float point1y = float.Parse(Console.ReadLine());
			Console.Write("Please enter second X value: ");
			float point2x = float.Parse(Console.ReadLine());
			Console.Write("Please enter second Y value: ");
			float point2y = float.Parse(Console.ReadLine());
			float distance = (float) Math.Sqrt ((point1x - point2x) * (point1x - point2x) + (point1y - point2y) * (point1y - point2y));
			float angle = (float)Math.Atan2 ((point2x - point1x), (point2y - point1y));
			Console.WriteLine ("Distance between points: " + distance);
			Console.WriteLine ("Angle between points: " + (int)(angle*180/Math.PI + " degree");






		




		}
	}
}
