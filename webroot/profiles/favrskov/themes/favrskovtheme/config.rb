# Require any additional compass plugins here.
if RUBY_VERSION =~ /1.9/
	Encoding.default_external = Encoding::UTF_8
end

# Set this to the root of your project when deployed:
http_path = "/"
css_dir = "css"
sass_dir = "sass"
images_dir = "images"
javascripts_dir = "js"
require "susy"

# Change this to :production when ready to deploy the CSS to the live server.
  environment = :development
# environment = :production

# You can select your preferred output style here (can be overridden via the command line):
# output_style = :expanded or :nested or :compact or :compressed
output_style = (environment == :production) ? :compressed : :expanded

# To enable relative paths to assets via compass helper functions. Uncomment:
# relative_assets = true

# To disable debugging comments that display the original location of your selectors. Uncomment:
# line_comments = false

# While developing, FireSass can be very usefull (https://addons.mozilla.org/en-US/firefox/addon/firesass-for-firebug/)
# firesass = true


# If you prefer the indented syntax, you might want to regenerate this
# project again passing --syntax sass, or you can uncomment this:
# preferred_syntax = :sass
# and then run:
# sass-convert -R --from scss --to sass sass scss && rm -rf sass && mv scss sass
preferred_syntax = :sass

sass_options = { :debug_info => true }
sass_options = {:sourcemap => true}
