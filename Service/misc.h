#ifndef MISC_H
#define MISC_H
using uint_8=unsigned char;
namespace service{
namespace error{

class MyException
{
    const char* message_;

public:
    MyException(const char* message) : message_(message) {}

    const char* what() const
    {
        return message_;
    }
};
};

namespace misc{


//Get_Ones(3) --> 0b111
uint_8 Get_Ones(uint_8 num_of_ones)
{
   return (1 << num_of_ones)-1;
}


uint_8 Extract_Bits(uint_8 val, uint_8 start, uint_8 end)
{
   try
    {
         if (start > end){

        throw error::MyException("An exception occurred");
                         }
    else{
        uint_8 num_of_bits=(end-start)+1;
        return (val>>start) & Get_Ones(num_of_bits);
    }
    
    }
    catch (const error::MyException& e)
    {
        // Handle the exception
        // For example, you can print an error message or take appropriate action
        e.what();
    }
    
}
 
}    

}




#endif // MISC_H