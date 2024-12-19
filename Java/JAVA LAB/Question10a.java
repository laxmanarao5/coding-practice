import java.awt.*;
import java.awt.event.*;
class WindowEx implements WindowListener
{
    public void windowActivated(WindowEvent we)
    {
       System.out.println("Window Activated");
    }
    public void windowDeactivated(WindowEvent we)
    {
       System.out.println("Window DeActivated");
    }
    public void windowIconified(WindowEvent we)
    {
       System.out.println("Normal state to minimize state");
    }
    public void windowDeiconified(WindowEvent we)
    {
       System.out.println("From minimize state to normal state");
    }
    public void windowClosing(WindowEvent we)
    {
       System.out.println("window closed");
       System.exit(0);
    }
    public void windowClosed(WindowEvent we)
    {
       System.out.println("window closed from window closed method");
    }
    public void windowOpened(WindowEvent we)
    {
       System.out.println("window opened");
    }
}
class JkEvent extends Frame
{
   JkEvent()
   {
      setTitle("JK EventHandling");
      setVisible(true);
      setSize(700,300);
      setBackground(Color.green);
      addWindowListener(new WindowEx());
    }
}
class Question10a
{
     public static void main(String args[])
     {
         JkEvent j=new JkEvent();
     }
}
