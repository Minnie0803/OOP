# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"

double Cylinder :: SurfaceArea(){ //ªí­±¿n
    return 2.0*M_PI*radius*(height+radius);
}

double Cylinder :: Volume(){ //Åé¿n
    return M_PI*radius*radius*height;
}

double Cylinder :: Circumference(){ //¶ê©P
    return 2.0*M_PI*radius;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out << "Circumference: "<< fixed << std::setprecision(3) << cldr.Circumference() << endl;
    out << "SurfaceArea: " << fixed << std::setprecision(3) << cldr.SurfaceArea() << endl;
    out << "Volume: " << fixed << std::setprecision(3) << cldr.Volume() << endl;
    return out;
}

# endif