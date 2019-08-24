/**/

#include "xyplotwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    XYPlotWindow wLine;
    XYPlotWindow wCircle;
    XYPlotWindow wHeart;
    XYPlotWindow wButterfly;
    
    double y = 0.00;
    double x = 0.00;
    double increment = 0.01;
    
    // Plot of a segment
    
    for (double t = 0; t < 2*M_PI; t = t + increment) {
        
        x = t;
        y = t;
        
        // add x and y as a point in the graph
        wLine.AddPointToGraph(x,y);
    }
    
    // After all the points have been added, plot and show the graph
    wLine.Plot();
    wLine.show();
    
    
    // Plot of a circle
    
    for (double t = 0; t < 2*M_PI; t = t + increment) {

        x = 3 * cos(t);
        y = 3 * sin(t);

        // add x and y as a point in the graph
        wCircle.AddPointToGraph(x, y);
    }
    wCircle.Plot();
    wCircle.show();

    
    
    // Plot of a heart
    for (double t = 0; t < 2*M_PI; t = t + increment) {

        x = 16 * pow(sin(t), 3);
        y = (13 * cos(t)) - (5 * cos(2 * t)) - (2 * cos(3 * t)) - cos(4 * t) - 3;

        // add x and y as a point in the graph
        wHeart.AddPointToGraph(x, y);
    }
    wHeart.Plot();
    wHeart.show();
    
    
    // Plot of a butterfly
    
    for (double t = 0; t < 16*M_PI; t = t + increment) {
        double q = pow(sin(1.2 * t), 2) + pow(cos(6 * t), 3);
        x = 5 * cos(t) * q;
        y = 10 * sin(t) * q;

        // add points to graph object
        wButterfly.AddPointToGraph(x, y);
    }
    wButterfly.Plot();
    wButterfly.show();
    
    return a.exec();
}
