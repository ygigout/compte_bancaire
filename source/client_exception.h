#ifndef CLIENT_EXCEPTION_H_INCLUDED
#define CLIENT_EXCEPTION_H_INCLUDED


#include <iostream>
#include <sstream>
#include <sstream>
using namespace std;


// Déclaration des types
enum ErrClient { ERR_NOM_MAX, ERR_PRENOM_MAX, ERR_SEXE,
                 ERR_TEL };


class ClientException: public exception
{
    private:
        ErrClient codeErr;

    public:
        ClientException(ErrClient err) /* throw() */ : codeErr(err)
        {
        }

        ~ClientException() throw()
        {
        }


        const char* what() // const throw()
        {
            switch(codeErr)
            {
                case ERR_NOM_MAX:    return "ERR_NOM_MAX";
                case ERR_PRENOM_MAX: return "ERR_PRENOM_MAX";
                case ERR_SEXE:       return "ERR_SEXE";
                case ERR_TEL:        return "ERR_TEL";
                default:  return "Autre erreur !!";
            }
        }


        string getMessage()
        {
            ostringstream oss;

            switch(codeErr)
            {
                case ERR_NOM_MAX:
                    oss << "Le nom ne doit pas depasser 50 caracteres !";
                    break;
                case ERR_PRENOM_MAX:
                    oss << "Le prenom ne doit pas depasser 50 caracteres !";
                    break;
                case ERR_SEXE:
                    oss << "Genre incorrect !";
                    break;
                case ERR_TEL:
                    oss << "Numero de telephone incorrect !";
                    break;
                default:
                    oss << "Autre erreur !!";
                    break;
            }
            return oss.str();
        }
};

#endif // CLIENT_EXCEPTION_H_INCLUDED
