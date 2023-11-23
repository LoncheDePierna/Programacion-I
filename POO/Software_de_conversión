#include <iostream>
#include <string>

//Decimal a Binario
std::string dec2bin(int n) {
    if (n == 0) {
        return "";
    }
    return dec2bin(n / 2) + std::to_string(n % 2);
}
//Binario a Decimal
int bin2dec(std::string bin) {
    int dec = 0;
    int longitud = bin.length();
    
    for (int i = 0; i < longitud; ++i) {
        if (bin[i] == '1') {
            dec += 1 << (longitud - 1 - i);
        } 
        else if (bin[i] != '0') {
            std::cout << "Error ¡" <<bin[i] << " no es binario!" << std::endl;
            return 0;
        }
    }
    return dec;
}
//Decimal a Hexadecimal
std::string dec2hex(int n) {
    std::string hexa = "";
    int r;
    
    while (n != 0) {
        r = n % 16;
        if (r < 10) {
            hexa = std::to_string(r) + hexa;
        } else {
            hexa = char(r + 55) + hexa;
        }
        n /= 16;
    }
    return hexa;
} 
//Hexadecimal a Decimal
int hex2dec(std::string hex){
    int dec = 0;
    int longitud = hex.length();
    
    for (int i = 0 ; i<longitud ; ++i){
        char digito = hex[i];
        if (digito >= '0' && digito <= '9') {
            dec = dec * 16 + (digito - '0');
        }
        else if (digito >= 'A' && digito <= 'F') {
            dec = dec * 16 + (digito - 'A' + 10);
        }
        else if (digito >= 'a' && digito <= 'f') {
            dec = dec * 16 + (digito - 'a' + 10);
        }
        else {
            std::cout << "Error ¡"<<"el digito (" << digito << ") no es valido!" << std::endl;
            return 0;
        }
    }
    return dec;
}

int main() {

    int inicio = 0;
while(inicio == 0){
    int modo;
    std::cout << " Decimal a Binario (1)" << std::endl << " Binario a Decimal (2)" << std::endl;
    std::cout << " Decimal a   Hex   (3)" << std::endl << "   Hex   a Decimal (4)" << std::endl;
    std::cout << "              info (5)" << std::endl;
    std::cout << std::endl;
    
    std::cout << " Modo: ";    
    std::cin >> modo;
    std::cout << std::endl;
    
switch(modo){
    
    case 1:{
        int n;
        std::cout << "Inserta número Decimal:  ";
        std::cin >> n;
        std::cout << "Binario -->  " << dec2bin(n) << std::endl;
        inicio = inicio + 1;
        break;
    }    
    case 2:{
        std::string bin;
        std::cout << "Inserta número binario: ";
        std::cin >> bin;
        std::cout << "Decimal --> " << bin2dec(bin) << std::endl;
        inicio = inicio + 1;        
        break;
    }    
    case 3: {
        int n;
        std::cout << "Inserta número Decimal:  ";
        std::cin >> n;
        std::cout << "Hexadecimal -->  " << dec2hex(n) << std::endl;
        inicio = inicio + 1;        
        break;
    }
    case 4: {
        std::string hex;
        std::cout << "Inserta número Hexadecimal: ";
        std::cin >> hex;
        std::cout << "Decimal -->  " << hex2dec(hex) << std::endl;
        inicio = inicio + 1;        
        break;
    }
    case 5: {
        std::cout << "El calculo Decimal a Binario no toma en cuenta las letras para el calculo"<< std::endl;
        std::cout << "El calculo Decimal a   Hex   no toma en cuenta las letras para el calculo"<< std::endl;
        std::cout << std::endl;
        break;
    }
    default:
    std::cout << "Error Error - Modo desconocido - Activando protocolo de seguridad - Apagando sistema..."<< std::endl;
    inicio = inicio + 1;  
}
}
    return 0;
}
