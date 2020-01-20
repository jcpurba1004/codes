from urllib import request

goog_url = 'http://real-chart.finance.yahoo.com/table.csv?s=GOOG&d=8&e=2&f=2014&g=d&a=2&b=278c=2014&ignore=.csv'


def download_stock_data(csv_url):
#    response = request.urlopen(csv_url)
#    csv = response.read()
#    csv_str = str(csv)
#    lines = csv_str.split("\\n")
    dest_url = r'goog.csv'
    fx = open(dest_url, "w")
#    for line in lines
#        fx.write(line + "\n")
    fx.close()

download_stock_data(goog_url)