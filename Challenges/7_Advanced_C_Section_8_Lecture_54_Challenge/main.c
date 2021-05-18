#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*BORDER STYLE*/
#define SOLID   0
#define DOTTED  1
#define DASHED  2
/*PRIMARY COLORS*/
#define BLUE  4
#define GREEN 2
#define RED   1

/*MIXED COLORS*/
#define BLACK   0
#define YELLOW  (RED | GREEN)
#define MAGENTA (RED | BLUE)
#define CYAN    (GREEN | BLUE)
#define WHITE   (RED | GREEN | BLUE)

#define TRUE  1
#define FALSE 0
struct box_properties
{
    bool          transparent:1;  //1:Transparent 0:opaque
    bool                shown:1;  //1:shown  0:hidden
    unsigned int   fill_color:3;  //0:black 1:red 2:green 3:yellow 4:blue 5:magenta 6:cyan 7:white
    unsigned int   line_style:2;  //0:solid 1:dotted 2:dashed
    unsigned int             :1;  //padding
    unsigned int border_color:3;  //0:black 1:red 2:green 3:yellow 4:blue 5:magenta 6:cyan 7:white
    unsigned int             :5;  //padding
};

const char * colors[8]={"black","red","green","yellow","blue","magenta","cyan","white"};

void show_settings(const struct box_properties *pb);

int main()
{
    /*create and initialize box_properties structure*/
    struct box_properties box = {true,YELLOW,true,GREEN,DASHED};

    printf("Original box settings: \n");
    show_settings(&box);

    box.transparent = false ;
    box.fill_color = WHITE ;
    box.border_color = MAGENTA ;
    box.line_style = SOLID ;

    printf("\nModified box settings: \n");
    show_settings(&box);

    return 0;
}

void show_settings(const struct box_properties *pb)
{
    printf("Box is %s.\n",pb->transparent == true ? "transparent" : "opaque");
    printf("The fill color is %s.\n", colors[pb->fill_color]);
    printf("Border %s.\n", pb->shown == true ? "shown" : "hidden");
    printf("The border color is %s.\n", colors[pb->border_color]);
    printf("Border style is: ");

    switch(pb->line_style)
    {
    case SOLID  : printf("solid.\n");  break;
    case DOTTED : printf("dotted.\n"); break;
    case DASHED : printf("dashed.\n"); break;
    default     : printf("unknown type.\n");
    }

}
