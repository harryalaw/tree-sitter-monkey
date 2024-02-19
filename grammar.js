module.exports = grammar({
    name: 'YOUR_LANGUAGE_NAME',

    rules: {
        // TODO: add the actual grammar rules
        source_file: $ => repeat($._statement),

        _statement: $ => seq(choice(
            $.let_statement,
            $.return_statement
        ), /;?/),

        let_statement: $ => seq(
            'let',
            field('Name', $.identifier),
            '=',
            field('Value', $._expression),
        ),

        return_statement: $ => seq(
            'return',
            field('Value', $._expression),
        ),

        _expression: $ => choice(
            $.identifier,
            $.number
        ),

        identifier: $ => /[a-zA-Z]+/,
        number: $ => /\d+/

    }
});
