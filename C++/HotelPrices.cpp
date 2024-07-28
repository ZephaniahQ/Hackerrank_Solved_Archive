#include <iostream>
#include <vector>

typedef enum{
    standard, apartment
}room_type;

class Room
{
public:

    room_type m_type;
    int m_bedrooms;
    int m_bathrooms;
    
    Room(std::string type, int bedrooms, int bathrooms)
    :  m_bedrooms(bedrooms), m_bathrooms(bathrooms)
    {
        if(type== "standard")
        {
            m_type = standard;
        }
        else if(type=="apartment")
        {
            m_type = apartment;
        }
        else
        {
            std::cout<< "invalid type" << std::endl;   
        }
    }
  
    int price()
    {
        if(m_type == standard)
        {
            return m_bedrooms * 50 + 100 * m_bathrooms;    
        }
        else
        {
            return m_bedrooms * 50 + 100* m_bathrooms + 100;
        }
    }
};

int main()
{
    int n;
    int profit{};
    std::cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        std::string type;
        int bedrooms, bathrooms;
        
        std::cin >> type >> bedrooms >> bathrooms;
        
        Room room(type, bedrooms, bathrooms);
        
        profit += room.price();
    }
    
    std::cout<< profit << std::endl;        
}
