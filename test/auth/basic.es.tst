/*
    basic.tst - Basic authentication tests
 */

const HTTP = tget('TM_HTTP') || '127.0.0.1:4100'

let http: Http = new Http

http.setCredentials("anybody", "PASSWORD WONT MATTER")
http.get(HTTP + "/index.html")
ttrue(http.status == 200)

//  Access to basic/basic.html accepts by any valid user. This should fail.
http.get(HTTP + "/auth/basic/basic.html")
ttrue(http.status == 401)

http.setCredentials("joshua", "pass1")
http.get(HTTP + "/auth/basic/basic.html")
ttrue(http.status == 200)

http.setCredentials("mary", "pass2")
http.get(HTTP + "/auth/basic/basic.html")
ttrue(http.status == 200)


//  Access accepts joshua only
http.setCredentials(null, null)
http.get(HTTP + "/auth/basic/joshua/user.html")
ttrue(http.status == 401)

http.setCredentials("joshua", "pass1")
http.get(HTTP + "/auth/basic/joshua/user.html")
ttrue(http.status == 200)

http.setCredentials("mary", "pass2")
http.get(HTTP + "/auth/basic/joshua/user.html")
ttrue(http.status == 403)
http.close()

if (thas('ME_CGI')) {
    // Requires /bin/sh 
    http.setCredentials(null, null)
    http.get(HTTP + "/auth/basic/basic.cgi")
    ttrue(http.status == 401)
    http.setCredentials("joshua", "pass1")
    http.get(HTTP + "/auth/basic/basic.cgi")
    ttrue(http.status == 200)
    ttrue(http.response.contains("\"SCRIPT_NAME\": \"/auth/basic/basic.cgi\""))
    ttrue(!http.response.contains("PATH_INFO"))
    ttrue(!http.response.contains("PATH_TRANSLATED"))
    ttrue(http.response.contains("\"REMOTE_USER\": \"joshua\""))
    http.close();
}
