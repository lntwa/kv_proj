from http.server import BaseHTTPRequestHandler
from http.server import HTTPServer

class HttpCustomHandler(BaseHTTPRequestHandler):

    def do_GET(self):
        self.send_response(200)
        self.send_header("Content-type", "text/html")
        self.end_headers()
        self.wfile.write('<html><head><meta charset="utf-8">'.encode())
        self.wfile.write('<title>РџСЂРѕСЃС‚РѕР№ HTTP-СЃРµСЂРІРµСЂ.</title></head>'.encode())
        self.wfile.write(open('indq.html', 'r').read().encode())

    def do_POST(self):
      #РѕР±СЂР°Р±РѕС‚РєР° С„РѕСЂРјСѓ Рё РѕС‚Р°РґРµРј РёРЅРґРµРєСЊСЋ С€С‚РјР» 
        content_length = int(self.headers['Content-Length'])  
        post_data = self.rfile.read(content_length)
        self.send_response(200)
        self.send_header("Content-type", "text/html")
        self.end_headers()
        self.wfile.write('<html><head><meta charset="utf-8">'.encode())
        self.wfile.write('<title>РџСЂРѕСЃС‚РѕР№ HTTP-СЃРµСЂРІРµСЂ.</title></head>'.encode())
        self.wfile.write(open('indq.html', 'r').read().encode()) 
        print(post_data)


def run(server_class=HTTPServer, handler_class=HttpCustomHandler):
  server_address = ('', 8000)
  httpd = server_class(server_address, handler_class)
  try:
      httpd.serve_forever()
  except KeyboardInterrupt:
      httpd.server_close()


if __name__ =='__main__':
  run()
