/**
 * Returns the larger of the two roots of the quadratic equation
 *     A*x*x + B*x + C = 0.  
 * Precondition: A != 0 and B*B - 4*A*C >= 0.
 */
static public double root( double A, double B, double C )  {
   assert A != 0 : "Leading coefficient of quadratic equation cannot be zero.";
   double disc = B*B - 4*A*C;
   assert disc >= 0 : "Discriminant of quadratic equation cannot be negative.";
   return  (-B + Math.sqrt(disc)) / (2*A);
}