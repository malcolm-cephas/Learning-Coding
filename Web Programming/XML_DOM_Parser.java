/**
 * Aim: 23. Java program parsing XML data using the DOM model.
 */
import javax.xml.parsers.*;
import org.w3c.dom.*;
import java.io.*;

public class XML_DOM_Parser {
    public static void main(String[] args) {
        try {
            File xmlFile = new File("users.xml");
            DocumentBuilderFactory dbFactory = DocumentBuilderFactory.newInstance();
            DocumentBuilder dBuilder = dbFactory.newDocumentBuilder();
            Document doc = dBuilder.parse(xmlFile);
            
            doc.getDocumentElement().normalize();
            NodeList nList = doc.getElementsByTagName("user");
            
            for (int i = 0; i < nList.getLength(); i++) {
                org.w3c.dom.Node nNode = nList.item(i);
                if (nNode.getNodeType() == org.w3c.dom.Node.ELEMENT_NODE) {
                    Element eElement = (Element) nNode;
                    System.out.println("User ID: " + eElement.getAttribute("id"));
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
