# coding: utf-8

Gem::Specification.new do |spec|
  spec.name          = "jekyll-theme-type"
  spec.version       = "1.1"
  spec.authors       = ["Ahad"]
  spec.email         = ["syed.ahad.sagheer@gmail.com"]

  spec.summary       = %q{A website.}
  spec.homepage      = "http://www.ahadsagheer.me/"
  spec.license       = "MIT"

  spec.files         = `git ls-files -z`.split("\x0").select do |f|
    f.match(%r{^(assets|pages|_(includes|layouts|sass)/|(LICENSE|README|search.html)((\.(txt|md|markdown)|$)))}i)
  end

  spec.add_runtime_dependency "jekyll", "~> 3.4"
  spec.add_runtime_dependency "jekyll-paginate", "~> 1.1"

  spec.add_development_dependency "bundler", "~> 2.0.1"
  spec.add_development_dependency "rake", "~> 10.0"
end
