TEX=pdflatex --synctex=1 -shell-escape -interaction=nonstopmode

.PHONY: all

all: ComNote.pdf

ComNote.pdf: ComNote.tex #ComNote.listing
	$(TEX) ComNote.tex
	$(TEX) ComNote.tex
	rm -f *.out *.dvi *.aux
	okular ComNote.pdf&

clean:
	rm -f ComNote.pdf *.out *.dvi *.aux *.log
