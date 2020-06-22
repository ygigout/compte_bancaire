#ifndef PRO_EXCEPTION_H_INCLUDED
#define PRO_EXCEPTION_H_INCLUDED


#include <iostream>
#include <sstream>
#include <sstream>
using namespace std;


// Déclaration des types
enum ErrPro { ERR_SIRET_MAX, ERR_RAISON_MAX, ERR_EMAIL };


class ProException: public exception
{
    private:
        ErrPro codeErr;

    public:
        ProException(ErrPro err) /* throw() */ : codeErr(err)
        {
        }

        ~ProException() throw()
        {
        }


        const char* what() // const throw()
        {
            switch(codeErr)
            {
                case ERR_SIRET_MAX:  return "ERR_SIRET_MAX";
                case ERR_RAISON_MAX: return "ERR_RAISON_MAX";
                case ERR_EMAIL:      return "ERR_EMAIL";
                default:  return "Autre erreur !!";
            }
        }


        string getMessage()
        {
            ostringstream oss;

            switch(codeErr)
            {
                case ERR_SIRET_MAX:
                    oss << "Le numero SIRET ne fait pas 14 chiffres !";
                    break;
                case ERR_RAISON_MAX:
                    oss << "La raison sociale ne doit pas depasser 50 caracteres !";
                    break;
                case ERR_EMAIL:
                    oss << "Adresse mail incorrecte !";
                    break;
                default:
                    oss << "Autre erreur !!";
                    break;
            }
            return oss.str();
        }
};

#endif // PRO_EXCEPTION_H_INCLUDED
