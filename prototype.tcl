set fh [open "all.c" r]
set contents [read $fh]
close $fh
set fileLines [split $contents \n]
set lineNum 0
set funcCount 0
set funcRegexp {^\s*(?:(?:inline|static)\s+){0,2}(?!else|typedef|return)\w+\s+\*?\s*(\w+)\s*\([^0]+\)\s*;?}
foreach line $fileLines {
    incr lineNum
    if {[regexp $funcRegexp $line -> funcName]} {
        set line [string map { \{ ;} $line]
        puts "$line"
        incr funcCount
    }; #end if

}; #end foreach
