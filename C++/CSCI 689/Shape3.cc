/*
 Assignment-11	Due:11/28/2016
 Name: Shreyas Javvadhi
 Z-ID: Z1809837
*/

#include "/home/cs689/progs/16f/p11/Shape3.h"

/*Cube*/
Cube::Cube(const double& ln) 
{
length=ln;
width=ln;
}
Cube::Cube(const Cube& cube):Square(cube){} 
Cube& Cube::operator=(const Cube& cube) 
{
   if(this!=&cube)
    {
      length=cube.length;
      width=cube.width;
    }
return *this;
}
Cube& Cube::operator+=(const Cube& cube) 
{
  if(this!=&cube)
   {
     length+=cube.length;
     width+=cube.width;
   }
return *this;
}
Cube::~Cube() {} 
double Cube::perimeter() const 
{
 Square::perimeter();
 return 0;
}
double Cube::area() const {
    double sqr;
    double cur;
    sqr=Square::area();
    cur=6*sqr;
    return cur;
}
double Cube:: volume() const 
{
    double a1,v1;
    a1=Square::area();
    v1=length*a1;
    return v1;
}
void Cube::print() const 
{
    cout<<" length = "<<length;
}

/*Box*/
Box::Box(const double& l,const double& w, const double& h)
{
length=l;
width=w;
height=h;
}

Box::Box(const Box& box):Rectangle(box.length,box.width),height(box.height){}

Box& Box::operator=(const Box& box) 
{
  if(this!=&box)
   {
     length=box.length;
     width=box.width;
     height=box.height;
   }
return *this;
}
Box& Box::operator+=(const Box& box) 
{
  if(this!=&box)
  {
   length+=box.length;
   width+=box.width;
   height+=box.height;
  }
return *this;
}
Box::~Box(){} double Box::perimeter() const 
{
  Rectangle::perimeter();
  return 0;
}
double Box::area() const 
{
 double rperi;
 double rarea;
 double barea;
 rperi=Rectangle::perimeter();
 rarea=Rectangle::area();
 barea=2*rarea+height*rperi;
 return barea;
}
double Box:: volume() const 
{
    double a1,v1;
    a1=Rectangle::area();
    v1=height*a1;
    return v1;
}
void Box::print() const 
{
    cout<<" length = "<<length<<" : width = "<<width<<" : height = "<<height;
}
Cylinder::Cylinder(const double& r,const double& h) 
{
   radius=r;
   height=h;
}
Cylinder::Cylinder(const Cylinder& cylinder):Circle(cylinder.radius),height(cylinder.height){} 
Cylinder& Cylinder::operator=(const Cylinder& cylinder) 
{
 if(this!=&cylinder)
 {
   radius=cylinder.radius;
   height=cylinder.height;
 }
return *this;
}
Cylinder& Cylinder::operator+=(const Cylinder& cylinder) 
{
 if(this!=&cylinder)
  {
   radius+=cylinder.radius;
   height+=cylinder.height;
  }
return *this;
}
Cylinder::~Cylinder(){} double Cylinder::perimeter() const 
{
 Circle::perimeter();
 return 0;
}
double Cylinder::area() const 
{
    double carea;
    double cur;
    double cper;
    carea=Circle::area();
    cper=Circle::perimeter();
    cur=2*carea+height*cper;
    return cur;
}
double Cylinder:: volume() const 
{
    double a1,v1;
    a1=Circle::area();
    v1=height*a1;
    return v1;
}
void Cylinder::print() const 
{
    cout<<" radius = "<<radius<<" : height = "<<height;
}


/*Cone*/
Cone::Cone(const double& rad,const double& H) 
{
	radius=rad;
	height=H;
}
Cone::Cone(const Cone& cone):Circle(cone.radius),height(cone.height){} 
Cone& Cone::operator=(const Cone& cone) 
{
    if(this!=&cone)
    {
        radius=cone.radius;
        height=cone.height;
    }
    return *this;
}
Cone& Cone::operator+=(const Cone& cone) 
{
    if(this!=&cone)
    {
        radius+=cone.radius;
        height+=cone.height;
    }
    return *this;
}
Cone::~Cone(){} double Cone::perimeter() const 
{
    Circle::perimeter();
    return 0;
}
double Cone::area() const 
{
    double Aa,sa,per,car;
    Aa=Circle::area();
    sa=sqrt(radius*radius+height*height);
    per=Circle::perimeter();
    car=Aa+(sa*per)/2;
    return car;
}
double Cone:: volume() const 
{
    double Aa,Vl;
    Aa=Circle::area();
    Vl=(height*Aa)/3;
    return Vl;
}
void Cone::print() const 
{
    cout<<" radius = "<<radius<<" : height = "<<height;
}


/*Sphere*/
Sphere::Sphere(const double& rad) 
{
    radius=rad;
}
Sphere::Sphere(const Sphere& sphere):Circle(sphere.radius){} 
Sphere& Sphere::operator=(const Sphere& sphere) 
{
    if(this!=&sphere) 
    radius=sphere.radius;
    return *this;
}
Sphere& Sphere::operator+=(const Sphere& sphere) 
{
    if(this!=&sphere) 
    radius+=sphere.radius;
    return *this;
}
Sphere::~Sphere(){} 
double Sphere::area() const 
{
    double Aa,sar;
    Aa=Circle::area();
    sar=4*Aa;
    return sar;
}
double Sphere:: volume() const 
{
    double Aa,Vl;
    Aa=Circle::area();
    Vl=(4*radius*Aa)/3;
    return Vl;
}

/*Tetrahedron*/
Tetrahedron::Tetrahedron(const double& s):equTriangle(s){} 
Tetrahedron::Tetrahedron(const Tetrahedron& t):equTriangle(t.a){} 
Tetrahedron& Tetrahedron::operator=(const Tetrahedron& tetra) 
{
   if(this!=&tetra)
    {
     a=tetra.a ;
     b=tetra.b;
     c=tetra.c ;
   }
return *this;
}
Tetrahedron& Tetrahedron::operator+=(const Tetrahedron& tetra) 
{
    if(this!=&tetra)
    {
    a+=tetra.a ;
    b+=tetra.b;
    c+=tetra.c ;
    }
return *this;
}
Tetrahedron::~Tetrahedron(){} double Tetrahedron::perimeter() const 
{
    equTriangle::perimeter();
    return 0;
}
double Tetrahedron::area() const 
{
    double Aa,ear;
    Aa=equTriangle::area();
    ear=4*Aa;
    return ear;
}
double Tetrahedron::volume() const 
{
    double H,Aa,tar;
    H=(sqrt(2)/sqrt(3))*c;
    Aa=equTriangle::area();
    tar=((H*Aa)/3);
    return tar;
}
