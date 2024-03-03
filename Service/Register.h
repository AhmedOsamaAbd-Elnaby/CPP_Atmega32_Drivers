#ifndef REGISTER_H
#define REGISTER_H
#define uint8_t unsigned char
using Reg_Width=uint8_t;

class Register {

    public:
    Register(Reg_Width address): preg(reinterpret_cast<volatile Reg_Width *> (address))
    {}

    void Set_Bit(Reg_Width BitNum)
    {
        *preg|=(1<<BitNum);

    }
    void Clr_Bit(Reg_Width BitNum)
    {
        *preg&=~(1<<BitNum);

    }
    void Tog_Bit(Reg_Width BitNum)
    {
        *preg^=(1<<BitNum);

    }
    void Write_Bits(Reg_Width start,Reg_Width end,Reg_Width val)
    {

        
        

    }   

    


private:
    volatile uint8_t * preg;


}






#endif // REGISTER_H