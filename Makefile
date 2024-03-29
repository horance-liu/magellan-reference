latexfile = magellan

all: prepare pdf

prepare:
	mkdir -p output
	mkdir -p tmp

pdf: $(latexfile).tex
	xelatex --aux-directory=tmp --output-directory=output $(latexfile).tex

clear:
	rm -rf tmp
	rm -rf output

.PHONY: all prepare clear
