#include <iostream>
#include <queue>
#include <string>

using namespace std;

template <class T>
void print(T& c){
   for( typename T::iterator i = c.begin(); i != c.end(); i++ ){
      std::cout << *i << endl;
   }
}

class Vehicle{
   public:
   Vehicle( string description = "Unknown car",string license = "Unknown license", bool wax = false );
   string description() const;
   string license() const;
   bool wax() const;

   private:
   string description_, license_;
   bool wax_;
};
   inline
   Vehicle::Vehicle( string description, string license, bool wax )
      : description_( description ), license_( license ), wax_( wax )
   {} // empty

   string Vehicle::description() const
   {  return description_; }

   string Vehicle::license() const
   {  return license_; }

   bool Vehicle::wax() const
   {  return wax_; }

   int main( )
   {
      const char* description[] = { "A", "B","C", "D","E" };
      const char* license[] = { "a", "b", "c","d", "e" };
      const bool wax[] = { false, true, false, true, false };
      const int num_cars = sizeof( wax ) / sizeof( wax[0] );

      queue<Vehicle> line;

      int count = 0;
      while( count < num_cars || !line.empty() )
      {
         for( int i = 0; i < 2; ++i )
            if( count < num_cars )
            {
               cout << "A " << description[count] << ", license " << license[count] << ", is here for a wash";
               if( wax[count] )
                  cout << " and a wax";
               cout << endl << endl;

               line.push( Vehicle( description[count], license[count],wax[count] ) );
               ++count;
            }
            else
            break;
         cout << "ATTENTION PLEASE: a " << line.front().description()
         << ", license " << line.front().license()
         << ",\n has been carefully washed ";
         if( line.front().wax() )
           cout << "and waxed ";
         cout << "and is available for pick-up\n\n";
         line.pop();
      }
}
