#ifndef Calculadora
#define Calculadora

#include <iostream>
#include <string>

template <typename TipoN>
class operaciones {
public:
TipoN suma()
{
    std::cout << std::endl << a << " más " << b << " = ";    
    return a + b;
}
TipoN resta()
{
    std::cout << std::endl << a << " menos " << b <<" = ";
    return a - b;
}
TipoN multi()
{
    std::cout << std::endl << a << " multiplicado " << b << " = ";
    return a * b;
}
TipoN divi()
{
    std::cout << std::endl << a << " dividido " << b << " = ";
    return a / b;
}
TipoN porcentaje()
{
    std::cout << std::endl << b << "%" << " de " << a << " = ";
    return a * (b* 0.01);
   
}
TipoN potencia()
{
    c = 1;
    std::cout << std::endl << a << " elevado a la " << b << " = ";
    for(int i = 0; i < b; i++){
        c *= a;
    }
    return c;
}

void setA()
{
    std::cout << "Numero 1: ";
    std::cin >> a;
    this -> a=a;
}
void setB()
{
    std::cout << "Numero 2: ";
    std::cin >> b;
    this -> b=b;
         
}
TipoN setmodo()
{
    std::cout << std::endl << "suma  / 1" << std::endl << "resta / 2" << std::endl << "multi / 3" << std::endl << "divi  / 4" << std::endl << "porce / 5" << std::endl << "poten / 6" << std::endl;
    std::cin >> modo;
    
switch(modo)
{
    
    case 1:
    {
    std::cout << suma() << std::endl;        
    break;
    }
    case 2:
    {
    std::cout << resta() << std::endl;
    break;
    }
    case 3:
    {
    std::cout << multi() << std::endl;
    break;
    }
    case 4:
    {
    std::cout << divi() << std::endl;
    break;
    }
    case 5:
    {
    std::cout << porcentaje() << std::endl;
    break;
    }
    case 6:
    {
    std::cout << potencia() << std::endl;
    break;
    }    
    default:
    std::cout << "Ingresa un modo valido";
}        
return 1;
}

private:
TipoN a;
TipoN b;
TipoN c;
int modo;

};

int main()
{
    operaciones<int>o;
    o.setA();
    o.setB();    
    o.setmodo();
    
    return 0;
}

#endif
