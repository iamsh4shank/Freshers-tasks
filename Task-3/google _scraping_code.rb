    
# This is the file which contains information about doing Google Scrappimg using Ruby.
# in this file I had imported some module using "require" command.These module are nokogiri , byebug , httparty.

#imporitng module
require 'nokogiri'
require 'httparty'
require 'byebug'

#defining a function
def scraper
	
	url= "https://en.wikipedia.org/wiki"+ gets.chomp
	
	unparsed_page = HTTParty.get(url)
	parsed_page = Nokogiri::HTML(unparsed_page)
	title = Array.new
	contents = parsed_page.css('span.toctext')
	contents.each do |content|
		txt=content.text
		title << txt
	end
	title.each do |elm|
		puts elm
	end
	byebug
end
scraper
