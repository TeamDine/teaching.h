///Cabecera de Docencia
#ifndef TEACHING_H_INCLUDED
#define TEACHING_H_INCLUDED

/*** Cabeceras del sistema ***/
#include <string>

/*** Cabeceras locales ***/
#include "name.h"
#include "date.h"

class Teaching{
    private:
        std::string name;
        Date initialDate;
        Date finishDate;
        int hours;

    public:
        Teaching();                                   ///Constructor base
        Teaching(const Teaching&);                   /// Constructor Copia
        Teaching(const std::string&, Date&, Date&, int&);    ///Constructor Parametrizado

        /*** getters ***/
        std::string getName();
        Date getInitialDate();
        Date getFinishDate();
        int getHours();

        /*** setters ***/
        void setName(const std::string&);
        void setInitialDate(const Date&);
        void setFinishDate(const Date&);
        void setHours(const int&);

        std::string toString();     ///Imprime datos
};


#endif // TEACHING_H_INCLUDED



#endif // TEACHING_H_INCLUDED
