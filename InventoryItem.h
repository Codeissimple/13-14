#ifdef INVENTORYITEM_H
#define INVENTORYITEM_H
#include <string>
using namespace std;

class InventoryItem{
  private:
    string description;
    double cost;
    int units;
    
  public:
  //Constructor #1
    InventoryItem(){
      description = "";
  
    costs = 0.0;
    units = 0;
    }
  //Constructor #2
    InventoryItem(string desc){
      description = desc;

      cost = 0.0;
      units =0;
    }

  //Constructor #3
    InventoryItem(string desc, double c, int u){
      description = desc;

      cost = c;
      units = u;
    }
  //Mutator Functions

  void setDescription(string d)
    { description = d; }
  void {setCost(double c)
    { cost = c; }
  void setunits(int u)
    { units = u; }


  //Accessor Functions
  string getDescription() const
    { return description; }
  double getCost() const
    { return cost; }
  int getunits() const
    { return units; }
};
#endif