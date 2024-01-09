rect1_x = [-2 2 2 -2];
rect1_y = [5 5 -5 -5];
plot(rect1_x,rect1_y);
fill(rect1_x,rect1_y,'k');
axis([-10 10 -10 10]);
hold on;
rect2_x = [-1 1 1 -1];
rect2_y = [-5 -5 -15 -15];
plot(rect2_x,rect2_y);
fill(rect2_x,rect2_y,'k');
hold on;
theta = 0:0.1:360;
circ1_x = 1*cosd(theta);
circ1_y = 1*sind(theta)+ 3;
plot(circ1_x,circ1_y);
fill(circ1_x,circ1_y,[0.5,0.5,0.5]);
hold on;
circ2_x = 1*cosd(theta);
circ2_y = 1*sind(theta);
plot(circ2_x,circ2_y);
fill(circ2_x,circ2_y,[0.5,0.5,0.5]);
hold on;
circ3_x = 1*cosd(theta);
circ3_y = 1*sind(theta)- 3;
plot(circ3_x,circ3_y);
fill(circ3_x,circ3_y,[0.5,0.5,0.5]);

while (1)
    pause(3);
    fill(circ1_x,circ1_y,'r');
    fill(circ2_x,circ2_y,[0.5,0.5,0.5]);
    fill(circ3_x,circ3_y,[0.5,0.5,0.5]);
    
    pause(3);
    fill(circ1_x,circ1_y,[0.5,0.5,0.5]);
    fill(circ2_x,circ2_y,'y');
    fill(circ3_x,circ3_y,[0.5,0.5,0.5]);
    
    pause(3);
    fill(circ1_x,circ1_y,[0.5,0.5,0.5]);
    fill(circ2_x,circ2_y,[0.5,0.5,0.5]);
    fill(circ3_x,circ3_y,'g');


    
end