///Cabecera de los Dependientes económicos
#ifndef TEACHING_H_INCLUDED
#define TEACHING_H_INCLUDED


/*** Cabeceras locales ***/
#include <string>
#include "name.h"
#include "date.h"

class Teaching{
    private:
        Name name;
        Date initialDate;
        Date finishDate;
        int hours;

    public:
        Teaching();                                   ///Constructor base
        Teaching(const Teaching&);                   /// Constructor Copia
        Teaching(const Name&, Date&, Date&, int&);    ///Constructor Parametrizado

        /*** getters ***/
        Name getName();
        Date getInitialDate();
        Date getFinishDate();
        int getHours();

        /*** setters ***/
        void setName(const Name&);
        void setInitialDate(const Date&);
        void setFinishDate(const Date&);
        void setHours(const int&);

        std::string toString();     ///Imprime datos
};


#endif // TEACHING_H_INCLUDED
