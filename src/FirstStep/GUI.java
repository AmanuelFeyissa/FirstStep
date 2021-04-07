package FirstStep;
import javax.swing.*;
import java.awt.*;
public class GUI {
        public static void main(String[] args)
        {
            JFrame frame = new JFrame("Rectangle Area & Perimeter");
            frame.setSize(400, 300);
            frame.setDefaultCloseOperation(frame.EXIT_ON_CLOSE);

            frame.setLayout( new GridLayout(5, 2) );

            JLabel lengthL, widthL, areaL, perimeterL;
            lengthL = new JLabel("Enter the length: ", SwingConstants.RIGHT);
            widthL = new JLabel("Enter the width: ", SwingConstants.RIGHT);
            areaL = new JLabel("The area is: ", SwingConstants.RIGHT);
            perimeterL = new JLabel("Perimeter: ", SwingConstants.RIGHT);

            JTextField lengthTF, widthTF, areaTF, perimeterTF;
            lengthTF = new JTextField(10);
            widthTF = new JTextField(10);
            areaTF = new JTextField(10);
            perimeterTF = new JTextField(10);

            JButton calculateB, exitB;
            calculateB = new JButton("Calculate");
            exitB = new JButton("Exit");

            frame.add(lengthL);
            frame.add(lengthTF);
            frame.add(widthL);
            frame.add(widthTF);
            frame.add(areaL);
            frame.add(areaTF);
            frame.add(perimeterL);
            frame.add(perimeterTF);
            frame.add(calculateB);
            frame.add(exitB);

            frame.setVisible(true);

        } //end main()
    } //end class RectangleCalculator


