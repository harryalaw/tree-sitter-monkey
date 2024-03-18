; Keywords

[
 "if"
 "else"
 "let"
 "return"
 "fn"
] @keyword


; Operators
[
 "+"
 "-"
 "/"
 "*"
 "=="
 "!="
 "<="
 ">="
 ">"
 "<"
 "!"
] @operator

[
 ";"
] @punctuation.delimiter

[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
]  @punctuation.bracket
 

(call_expression
    function: (identifier) @function)

(identifier) @variable
(number) @number
