
import javax.xml.parsers.*;
import org.xml.sax.*;
import org.xml.sax.helpers.*;

public class XML_SAX_Parser extends DefaultHandler {
    public static void main(String[] args) {
        try {
            SAXParserFactory factory = SAXParserFactory.newInstance();
            SAXParser saxParser = factory.newSAXParser();

            DefaultHandler handler = new DefaultHandler() {
                public void startElement(String uri, String localName, String qName, Attributes attributes) {
                    if (qName.equalsIgnoreCase("user")) {
                        System.out.println("Processing User: " + attributes.getValue("id"));
                    }
                }
            };
            saxParser.parse("users.xml", handler);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
