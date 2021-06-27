import javax.servlet.http.*;
import javax.servlet.*;
import java.io.*;

public class Main extends HttpServlet{
	public void doGet(HttpRequest req, HttpResponse Resp) throws servletException, IOException{
		resp.setContentType("text/html");
		PrintWriter pw = resp.getWriter();
		String name=req.getParameter("name");
		pw.println("Welcom "+name);
	}
}