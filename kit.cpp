Use Cases
Use Case of Link Shortner API:-

Custom Telegram bot
Make custom function
Increase the tweaks of shareus
API
What is an API?
An API (Application Programming Interface) is a set of functions that allows applications to access data and interact with external software components, operating systems, or microservices. For example, an API delivers a user response to a system and sends the system’s response back to a user. You click “add to cart;” an API tells the site you added a product to your cart; the website puts the product in your cart, and your cart is updated.
How an API works
APIs consist of three parts: User: the person who makes a request Client: the computer that sends the request to the server Server: the computer that responds to the request A client application initiates an API call to retrieve information—also known as a request. This request is processed from an application to the web server via the API’s Uniform Resource Identifier (URI) and includes a request verb, headers, and sometimes, a request body. After receiving a valid request, the API makes a call to the external program or web server. The server sends a response to the API with the requested information. The API transfers the data to the initial requesting application.
Shareus API & Info
We are providing publishers with a simple and powerful API. Users can get the response in both text and JSON.
          The API is simple to use just send a GET request to the following endpoint with your “Shareus API Token” and the link you want to short.
https://api.shareus.in/shortLink?token= paste your shareus api token here &link=mylink.com
The above method sends response in text format. If you want to receive the response in JSON format just append ?format=json like below. https://api.shareus.in/shortLink?token= paste your shareus api token here &format=json&link=mylink.com You will receive JSON response like below {“status”:”success”,”shortlink”:”https://shareus.in/?i=fhow79″}
JS Implementation const token = “YOUR_SHAREUS_API_TOKEN” const link = “LINK_TO_SHORTEN” const http = new XMLHttpRequest() http.open(“GET”, `https://api.shareus.in/shortLink?token=${uid}&link=${link}`) http.send() http.onload = () =>{ console.log(http.responseText) }
Php Implementation $shareus_token = “YOUR_SHAREUS_API_TOKEN”; $link_to_short = “LINK_TO_SHORTEN”; $shareus_response = file_get_contente(“https://api.shareus.in/shortLink?token={$shareus_token}&link={$link_to_short}”)
These requests may be written as URLs so that the communication between client and server is dictated by the rules of Hyper-Text Transfer Protocol (HTTP). The four most basic request methods to a server are: GET: To retrieve a resource POST: To create a new resource PUT: To edit or update an existing resource DELETE: To delete a resource
Why you should use an API
Computers make a lot of things easier, especially tasks that involve collecting and sorting through tons of data. Let’s say you wanted to know how many times a particular business partner submitted invoices to your company. If you have an API set up on the invoice database, you could feasibly go into your company’s invoice records, scan the “from” data input, and print each invoice individually for your audit. On the other hand, if all invoices were uploaded to a central database, you could write a simple program that accesses that database and finds all the instances of the partner’s name. This would take much less time and be much more accurate.