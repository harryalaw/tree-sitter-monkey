const PREC = {
    LOWEST: 0,
    EQUALS: 1,
    LESSGREATER: 2,
    SUM: 3,
    PRODUCT: 4,
    PREFIX: 5,
    CALL: 6,
    INDEX: 7,
}

/**
    * Creates a rule to match one or more of the rules separated by a comma
    *
    * @param {Rule} rule 
    *
    * @return {SeqRule}
    *
    */
function commaSep1(rule) {
    return seq(rule, repeat(seq(',', rule)));
}

/**
    * Creates a rule to optionally match one or more of the rules separated by a comma
    *
    * @param {Rule} rule 
    *
    * @return {ChoiceRule}
    *
    */
function commaSep(rule) {
    return optional(commaSep1(rule));
}

module.exports = grammar({
    name: 'monkey',

    rules: {
        // TODO: add the actual grammar rules
        source_file: ($) => repeat($._statement),

        _statement: ($) =>
            seq(
                choice(
                    $.let_statement,
                    $.return_statement,
                    $.expression_statement
                ),
                optional(';')
            ),

        let_statement: ($) =>
            seq(
                'let',
                field('name', $.identifier),
                '=',
                field('value', $._expression),
            ),

        return_statement: ($) =>
            seq(
                'return',
                field('value', $._expression)
            ),

        expression_statement: ($) => $._expression,

        _expression: ($) => choice(
            $.identifier,
            $.number,
            $.prefix_expression,
            $.binary_expression,
            $.call_expression,
            $.function_literal,
            $.true,
            $.false,
            $.parenthesized_expression,
        ),

        prefix_expression: ($) => prec(PREC.PREFIX, seq(
            field('operator', choice('+', '-', '!')),
            field('operand', $._expression)
        )),

        binary_expression: ($) => choice(
            prec.left(
                PREC.SUM,
                seq(
                    field('left', $._expression),
                    field('operator', choice('-', '+')),
                    field('right', $._expression)),
            ),
            prec.left(
                PREC.SUM,
                seq(
                    field('left', $._expression),
                    field('operator', choice('*', '/')),
                    field('right', $._expression)),
            ),
            prec.left(
                PREC.LESSGREATER,
                seq(
                    field('left', $._expression),
                    field('operator', choice('<=', '<', '>', '>=')),
                    field('right', $._expression)),
            ),
            prec.left(
                PREC.EQUALS,
                seq(
                    field('left', $._expression),
                    field('operator', choice('==', '!=')),
                    field('right', $._expression)),
            ),
        ),

        parameter_list: ($) => seq(
            '(',
            commaSep($.parameter_declaration),
            ')',
        ),
        parameter_declaration: ($) => prec.left(
            commaSep1(field('name', $.identifier)),
        ),

        block_statement: ($) => seq('{',
            optional(repeat($._statement)),
            '}',
        ),

        function_literal: $ =>
            seq(
                'fn',
                field('parameters', $.parameter_list),
                field('body', $.block_statement)
            ),

        call_expression: ($) => prec(PREC.CALL,
            seq(
                field('function', $._expression),
                field('arguments', $.argument_list)
            )
        ),

        argument_list: ($) => seq(
            '(',
            optional(seq(
                $._expression,
                repeat(seq(',', $._expression)),
                optional(',')
            )),
            ')',
        ),

        parenthesized_expression: ($) => seq(
            '(',
            $._expression,
            ')'),

        true: ($) => 'true',
        false: ($) => 'false',
        identifier: ($) => /[a-zA-Z_]+/,
        number: ($) => /\d+/,
        string: ($) => seq('"', /[^"]*/, '"'),
    },
});
