import java.awt.*;
import java.awt.event.*;
class MenuEx extends Frame implements ActionListener
{
    MenuBar mb;
    Menu m1,m2,m3,m4;
    MenuItem mi1,mi2,mi3,mi4,mi5,mi6,mi7,mi8,mi9;
    CheckboxMenuItem cmi1,cmi2,cmi3;
    Label l;
    MenuEx()
    {
       setTitle("JK Menu and MenuBar");
       setVisible(true);
       setSize(400,300);
       setBackground(Color.green);
       mb=new MenuBar();//create a menu bar
       setMenuBar(mb);// add menu bar to the frame
       m1=new Menu("File");
       m2=new Menu("Edit");
       m3=new Menu("Window");
       m4=new Menu("NewFlipBook");
       mi1=new MenuItem("New");
       mi2=new MenuItem("Open");
       mi3=new MenuItem("Save");
       mi4=new MenuItem("New Empty FB");
       mi5=new MenuItem("New Image Sequence");
       mi6=new MenuItem("Exit");
       mi7=new MenuItem("Undo");
       mi8=new MenuItem("Cut");
       mi9=new MenuItem("Copy");
       cmi1=new CheckboxMenuItem("Lagoon");
       cmi2=new CheckboxMenuItem("Brush Palletee");
       cmi3=new CheckboxMenuItem("Brush Library");
       mb.add(m1);
       mb.add(m2);
       mb.add(m3);
       m1.add(mi1);
       m1.add(mi2);
       m1.add(mi3);
       m1.add(m4); //add New Flip Book to File Menu
       m4.add(mi4);
       m4.add(mi5);
       m1.add(mi6);
       m2.add(mi7);
       m2.add(mi8);
       m2.add(mi9);
       m3.add(cmi1);
       m3.add(cmi2);
       m3.add(cmi3);
       l=new Label("Displaying here",Label.CENTER);
       add(l);
       mi1.addActionListener(this);
       mi2.addActionListener(this);
       mi3.addActionListener(this);
       mi6.addActionListener(this);
       addWindowListener(new WindowAdapter()
       {
          public void windowClosing(WindowEvent we)
          {
             System.exit(0);
          }
       }//Anonymous Inner class
      );
    }
    public void actionPerformed(ActionEvent ae)
    {
       if(ae.getActionCommand().equals("New"))
       {
           l.setText("New Menu Item clicked");
       }
       else if(ae.getActionCommand().equals("Open"))
       {
           l.setText("Open Menu Item clicked");
       }
       else if(ae.getActionCommand().equals("Save"))
       {
           l.setText("Save Menu Item clicked");
       }
       else if(ae.getActionCommand().equals("Exit"))
       {
           System.exit(0);
       }
     }
}
class Question10b
{
      public static void main(String args[])
      {
         new MenuEx();
      }
}