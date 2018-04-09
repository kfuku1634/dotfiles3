#!/usr/bin/env perl
$latex            = 'uplatex -synctex=1 -halt-on-error';
$bibtex           = 'upbibtex';
$biber            = 'biber  -u -U --output_safechars';
$dvipdf           = 'dvipdfmx %O -o %D %S';
$makeindex        = 'mendex %O -o %D %S';
$max_repeat       = 5;
$pdf_mode         = 3;
$pvc_view_file_via_temporary = 0;
$pdf_previewer = "open -ga /Applications/Skim.app";


#$latex        = 'uplatex -synctex=1 -halt-on-error';
#$latex_silent = 'uplatex -synctex=1 -halt-on-error -interaction=batchmode';
#$bibtex       = 'upbibtex';
#$makeindex    = 'mendex %O -o %D %S';
#$dvipdf       = 'dvipdfmx %O -o %D %S';
#$pdf_mode     = 3;
