#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 59
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 11

enum {
  anon_sym_SEMI = 1,
  anon_sym_let = 2,
  anon_sym_EQ = 3,
  anon_sym_return = 4,
  anon_sym_PLUS = 5,
  anon_sym_DASH = 6,
  anon_sym_BANG = 7,
  anon_sym_STAR = 8,
  anon_sym_SLASH = 9,
  anon_sym_LT_EQ = 10,
  anon_sym_LT = 11,
  anon_sym_GT = 12,
  anon_sym_GT_EQ = 13,
  anon_sym_EQ_EQ = 14,
  anon_sym_BANG_EQ = 15,
  anon_sym_LPAREN = 16,
  anon_sym_COMMA = 17,
  anon_sym_RPAREN = 18,
  anon_sym_LBRACE = 19,
  anon_sym_RBRACE = 20,
  anon_sym_fn = 21,
  sym_true = 22,
  sym_false = 23,
  sym_identifier = 24,
  sym_number = 25,
  anon_sym_DQUOTE = 26,
  sym_source_file = 27,
  sym__statement = 28,
  sym_let_statement = 29,
  sym_return_statement = 30,
  sym_expression_statement = 31,
  sym__expression = 32,
  sym_prefix_expression = 33,
  sym_binary_expression = 34,
  sym_parameter_list = 35,
  sym_parameter_declaration = 36,
  sym_block_statement = 37,
  sym_function_literal = 38,
  sym_call_expression = 39,
  sym_argument_list = 40,
  sym_parenthesized_expression = 41,
  aux_sym_source_file_repeat1 = 42,
  aux_sym_parameter_list_repeat1 = 43,
  aux_sym_parameter_declaration_repeat1 = 44,
  aux_sym_argument_list_repeat1 = 45,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_return] = "return",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_fn] = "fn",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_let_statement] = "let_statement",
  [sym_return_statement] = "return_statement",
  [sym_expression_statement] = "expression_statement",
  [sym__expression] = "_expression",
  [sym_prefix_expression] = "prefix_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter_declaration] = "parameter_declaration",
  [sym_block_statement] = "block_statement",
  [sym_function_literal] = "function_literal",
  [sym_call_expression] = "call_expression",
  [sym_argument_list] = "argument_list",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_parameter_declaration_repeat1] = "parameter_declaration_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_fn] = anon_sym_fn,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_let_statement] = sym_let_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_expression_statement] = sym_expression_statement,
  [sym__expression] = sym__expression,
  [sym_prefix_expression] = sym_prefix_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter_declaration] = sym_parameter_declaration,
  [sym_block_statement] = sym_block_statement,
  [sym_function_literal] = sym_function_literal,
  [sym_call_expression] = sym_call_expression,
  [sym_argument_list] = sym_argument_list,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_parameter_declaration_repeat1] = aux_sym_parameter_declaration_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_let_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_prefix_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_block_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_function_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_arguments = 1,
  field_body = 2,
  field_function = 3,
  field_left = 4,
  field_name = 5,
  field_operand = 6,
  field_operator = 7,
  field_parameters = 8,
  field_right = 9,
  field_value = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_function] = "function",
  [field_left] = "left",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_right] = "right",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 3},
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 2},
  [9] = {.index = 15, .length = 1},
  [10] = {.index = 16, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_value, 1},
  [1] =
    {field_operand, 1},
    {field_operator, 0},
  [3] =
    {field_arguments, 1},
    {field_function, 0},
  [5] =
    {field_name, 0},
  [6] =
    {field_body, 2},
    {field_parameters, 1},
  [8] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [11] =
    {field_name, 1},
    {field_value, 3},
  [13] =
    {field_name, 0},
    {field_name, 1, .inherited = true},
  [15] =
    {field_name, 1},
  [16] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ';') ADVANCE(6);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '>') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '{') ADVANCE(26);
      if (lookahead == '}') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(21);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ';') ADVANCE(6);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '=') ADVANCE(3);
      if (lookahead == '>') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '}') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_let);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(21);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_return);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(22);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(17);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_true);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_false);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(58),
    [sym__statement] = STATE(18),
    [sym_let_statement] = STATE(35),
    [sym_return_statement] = STATE(35),
    [sym_expression_statement] = STATE(35),
    [sym__expression] = STATE(20),
    [sym_prefix_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_function_literal] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_parenthesized_expression] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_return] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_fn] = ACTIONS(13),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_identifier] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
  },
  [2] = {
    [sym_argument_list] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_EQ_EQ] = ACTIONS(19),
    [anon_sym_BANG_EQ] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(19),
    [anon_sym_fn] = ACTIONS(21),
    [sym_true] = ACTIONS(21),
    [sym_false] = ACTIONS(21),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(19),
  },
  [3] = {
    [sym_argument_list] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(19),
    [anon_sym_EQ_EQ] = ACTIONS(19),
    [anon_sym_BANG_EQ] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(19),
    [anon_sym_fn] = ACTIONS(21),
    [sym_true] = ACTIONS(21),
    [sym_false] = ACTIONS(21),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(19),
  },
  [4] = {
    [sym_argument_list] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_LT_EQ] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(19),
    [anon_sym_EQ_EQ] = ACTIONS(19),
    [anon_sym_BANG_EQ] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(19),
    [anon_sym_fn] = ACTIONS(21),
    [sym_true] = ACTIONS(21),
    [sym_false] = ACTIONS(21),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(19),
  },
  [5] = {
    [sym_argument_list] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_let] = ACTIONS(33),
    [anon_sym_return] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(33),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_LT_EQ] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_GT_EQ] = ACTIONS(31),
    [anon_sym_EQ_EQ] = ACTIONS(31),
    [anon_sym_BANG_EQ] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(31),
    [anon_sym_fn] = ACTIONS(33),
    [sym_true] = ACTIONS(33),
    [sym_false] = ACTIONS(33),
    [sym_identifier] = ACTIONS(33),
    [sym_number] = ACTIONS(31),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_let] = ACTIONS(37),
    [anon_sym_return] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_BANG] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(35),
    [anon_sym_LT_EQ] = ACTIONS(35),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_GT_EQ] = ACTIONS(35),
    [anon_sym_EQ_EQ] = ACTIONS(35),
    [anon_sym_BANG_EQ] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(35),
    [anon_sym_fn] = ACTIONS(37),
    [sym_true] = ACTIONS(37),
    [sym_false] = ACTIONS(37),
    [sym_identifier] = ACTIONS(37),
    [sym_number] = ACTIONS(35),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_let] = ACTIONS(41),
    [anon_sym_return] = ACTIONS(41),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_BANG] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_LT_EQ] = ACTIONS(39),
    [anon_sym_LT] = ACTIONS(41),
    [anon_sym_GT] = ACTIONS(41),
    [anon_sym_GT_EQ] = ACTIONS(39),
    [anon_sym_EQ_EQ] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(39),
    [anon_sym_fn] = ACTIONS(41),
    [sym_true] = ACTIONS(41),
    [sym_false] = ACTIONS(41),
    [sym_identifier] = ACTIONS(41),
    [sym_number] = ACTIONS(39),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(45),
    [anon_sym_return] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_BANG] = ACTIONS(45),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(43),
    [anon_sym_LT_EQ] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(45),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_GT_EQ] = ACTIONS(43),
    [anon_sym_EQ_EQ] = ACTIONS(43),
    [anon_sym_BANG_EQ] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_fn] = ACTIONS(45),
    [sym_true] = ACTIONS(45),
    [sym_false] = ACTIONS(45),
    [sym_identifier] = ACTIONS(45),
    [sym_number] = ACTIONS(43),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_let] = ACTIONS(49),
    [anon_sym_return] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_LT_EQ] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_GT_EQ] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(47),
    [anon_sym_BANG_EQ] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_fn] = ACTIONS(49),
    [sym_true] = ACTIONS(49),
    [sym_false] = ACTIONS(49),
    [sym_identifier] = ACTIONS(49),
    [sym_number] = ACTIONS(47),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_return] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_SLASH] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_fn] = ACTIONS(53),
    [sym_true] = ACTIONS(53),
    [sym_false] = ACTIONS(53),
    [sym_identifier] = ACTIONS(53),
    [sym_number] = ACTIONS(51),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_SEMI] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(57),
    [anon_sym_return] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(55),
    [anon_sym_DASH] = ACTIONS(55),
    [anon_sym_BANG] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_SLASH] = ACTIONS(55),
    [anon_sym_LT_EQ] = ACTIONS(55),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_GT_EQ] = ACTIONS(55),
    [anon_sym_EQ_EQ] = ACTIONS(55),
    [anon_sym_BANG_EQ] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_COMMA] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(55),
    [anon_sym_fn] = ACTIONS(57),
    [sym_true] = ACTIONS(57),
    [sym_false] = ACTIONS(57),
    [sym_identifier] = ACTIONS(57),
    [sym_number] = ACTIONS(55),
  },
  [12] = {
    [sym__statement] = STATE(12),
    [sym_let_statement] = STATE(35),
    [sym_return_statement] = STATE(35),
    [sym_expression_statement] = STATE(35),
    [sym__expression] = STATE(20),
    [sym_prefix_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_function_literal] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_parenthesized_expression] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_let] = ACTIONS(61),
    [anon_sym_return] = ACTIONS(64),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(70),
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_fn] = ACTIONS(73),
    [sym_true] = ACTIONS(76),
    [sym_false] = ACTIONS(76),
    [sym_identifier] = ACTIONS(76),
    [sym_number] = ACTIONS(79),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_SEMI] = ACTIONS(82),
    [anon_sym_let] = ACTIONS(84),
    [anon_sym_return] = ACTIONS(84),
    [anon_sym_PLUS] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(82),
    [anon_sym_BANG] = ACTIONS(84),
    [anon_sym_STAR] = ACTIONS(82),
    [anon_sym_SLASH] = ACTIONS(82),
    [anon_sym_LT_EQ] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(84),
    [anon_sym_GT] = ACTIONS(84),
    [anon_sym_GT_EQ] = ACTIONS(82),
    [anon_sym_EQ_EQ] = ACTIONS(82),
    [anon_sym_BANG_EQ] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(82),
    [anon_sym_COMMA] = ACTIONS(82),
    [anon_sym_RPAREN] = ACTIONS(82),
    [anon_sym_RBRACE] = ACTIONS(82),
    [anon_sym_fn] = ACTIONS(84),
    [sym_true] = ACTIONS(84),
    [sym_false] = ACTIONS(84),
    [sym_identifier] = ACTIONS(84),
    [sym_number] = ACTIONS(82),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [anon_sym_SEMI] = ACTIONS(86),
    [anon_sym_let] = ACTIONS(88),
    [anon_sym_return] = ACTIONS(88),
    [anon_sym_PLUS] = ACTIONS(86),
    [anon_sym_DASH] = ACTIONS(86),
    [anon_sym_BANG] = ACTIONS(88),
    [anon_sym_STAR] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(86),
    [anon_sym_LT_EQ] = ACTIONS(86),
    [anon_sym_LT] = ACTIONS(88),
    [anon_sym_GT] = ACTIONS(88),
    [anon_sym_GT_EQ] = ACTIONS(86),
    [anon_sym_EQ_EQ] = ACTIONS(86),
    [anon_sym_BANG_EQ] = ACTIONS(86),
    [anon_sym_LPAREN] = ACTIONS(86),
    [anon_sym_COMMA] = ACTIONS(86),
    [anon_sym_RPAREN] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(86),
    [anon_sym_fn] = ACTIONS(88),
    [sym_true] = ACTIONS(88),
    [sym_false] = ACTIONS(88),
    [sym_identifier] = ACTIONS(88),
    [sym_number] = ACTIONS(86),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_SEMI] = ACTIONS(90),
    [anon_sym_let] = ACTIONS(92),
    [anon_sym_return] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(90),
    [anon_sym_DASH] = ACTIONS(90),
    [anon_sym_BANG] = ACTIONS(92),
    [anon_sym_STAR] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(90),
    [anon_sym_LT_EQ] = ACTIONS(90),
    [anon_sym_LT] = ACTIONS(92),
    [anon_sym_GT] = ACTIONS(92),
    [anon_sym_GT_EQ] = ACTIONS(90),
    [anon_sym_EQ_EQ] = ACTIONS(90),
    [anon_sym_BANG_EQ] = ACTIONS(90),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_COMMA] = ACTIONS(90),
    [anon_sym_RPAREN] = ACTIONS(90),
    [anon_sym_RBRACE] = ACTIONS(90),
    [anon_sym_fn] = ACTIONS(92),
    [sym_true] = ACTIONS(92),
    [sym_false] = ACTIONS(92),
    [sym_identifier] = ACTIONS(92),
    [sym_number] = ACTIONS(90),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(5), 1,
      anon_sym_let,
    ACTIONS(7), 1,
      anon_sym_return,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_fn,
    ACTIONS(17), 1,
      sym_number,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(15), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(35), 3,
      sym_let_statement,
      sym_return_statement,
      sym_expression_statement,
    STATE(20), 6,
      sym__expression,
      sym_prefix_expression,
      sym_binary_expression,
      sym_function_literal,
      sym_call_expression,
      sym_parenthesized_expression,
  [46] = 8,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_argument_list,
    ACTIONS(25), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(100), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(23), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(96), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(98), 7,
      anon_sym_let,
      anon_sym_return,
      anon_sym_BANG,
      anon_sym_fn,
      sym_true,
      sym_false,
      sym_identifier,
  [86] = 11,
    ACTIONS(5), 1,
      anon_sym_let,
    ACTIONS(7), 1,
      anon_sym_return,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_fn,
    ACTIONS(17), 1,
      sym_number,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    STATE(12), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(15), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(35), 3,
      sym_let_statement,
      sym_return_statement,
      sym_expression_statement,
    STATE(20), 6,
      sym__expression,
      sym_prefix_expression,
      sym_binary_expression,
      sym_function_literal,
      sym_call_expression,
      sym_parenthesized_expression,
  [132] = 8,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_argument_list,
    ACTIONS(25), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(100), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(23), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(104), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(106), 7,
      anon_sym_let,
      anon_sym_return,
      anon_sym_BANG,
      anon_sym_fn,
      sym_true,
      sym_false,
      sym_identifier,
  [172] = 8,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_argument_list,
    ACTIONS(25), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(100), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(23), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(108), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(110), 7,
      anon_sym_let,
      anon_sym_return,
      anon_sym_BANG,
      anon_sym_fn,
      sym_true,
      sym_false,
      sym_identifier,
  [212] = 11,
    ACTIONS(5), 1,
      anon_sym_let,
    ACTIONS(7), 1,
      anon_sym_return,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_fn,
    ACTIONS(17), 1,
      sym_number,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    STATE(16), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(15), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(35), 3,
      sym_let_statement,
      sym_return_statement,
      sym_expression_statement,
    STATE(20), 6,
      sym__expression,
      sym_prefix_expression,
      sym_binary_expression,
      sym_function_literal,
      sym_call_expression,
      sym_parenthesized_expression,
  [258] = 7,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_fn,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    ACTIONS(118), 1,
      sym_number,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(116), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(33), 6,
      sym__expression,
      sym_prefix_expression,
      sym_binary_expression,
      sym_function_literal,
      sym_call_expression,
      sym_parenthesized_expression,
  [289] = 7,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_fn,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
    ACTIONS(124), 1,
      sym_number,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(122), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(34), 6,
      sym__expression,
      sym_prefix_expression,
      sym_binary_expression,
      sym_function_literal,
      sym_call_expression,
      sym_parenthesized_expression,
  [320] = 7,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_fn,
    ACTIONS(124), 1,
      sym_number,
    ACTIONS(126), 1,
      anon_sym_RPAREN,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(122), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(34), 6,
      sym__expression,
      sym_prefix_expression,
      sym_binary_expression,
      sym_function_literal,
      sym_call_expression,
      sym_parenthesized_expression,
  [351] = 6,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_fn,
    ACTIONS(130), 1,
      sym_number,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(128), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(4), 6,
      sym__expression,
      sym_prefix_expression,
      sym_binary_expression,
      sym_function_literal,
      sym_call_expression,
      sym_parenthesized_expression,
  [379] = 6,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_fn,
    ACTIONS(134), 1,
      sym_number,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(132), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(3), 6,
      sym__expression,
      sym_prefix_expression,
      sym_binary_expression,
      sym_function_literal,
      sym_call_expression,
      sym_parenthesized_expression,
  [407] = 6,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_fn,
    ACTIONS(138), 1,
      sym_number,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(136), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(2), 6,
      sym__expression,
      sym_prefix_expression,
      sym_binary_expression,
      sym_function_literal,
      sym_call_expression,
      sym_parenthesized_expression,
  [435] = 6,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_fn,
    ACTIONS(124), 1,
      sym_number,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(122), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(34), 6,
      sym__expression,
      sym_prefix_expression,
      sym_binary_expression,
      sym_function_literal,
      sym_call_expression,
      sym_parenthesized_expression,
  [463] = 6,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_fn,
    ACTIONS(142), 1,
      sym_number,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(140), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(19), 6,
      sym__expression,
      sym_prefix_expression,
      sym_binary_expression,
      sym_function_literal,
      sym_call_expression,
      sym_parenthesized_expression,
  [491] = 6,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_fn,
    ACTIONS(146), 1,
      sym_number,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(144), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(36), 6,
      sym__expression,
      sym_prefix_expression,
      sym_binary_expression,
      sym_function_literal,
      sym_call_expression,
      sym_parenthesized_expression,
  [519] = 6,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_fn,
    ACTIONS(150), 1,
      sym_number,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(148), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(5), 6,
      sym__expression,
      sym_prefix_expression,
      sym_binary_expression,
      sym_function_literal,
      sym_call_expression,
      sym_parenthesized_expression,
  [547] = 6,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_fn,
    ACTIONS(154), 1,
      sym_number,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(152), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(17), 6,
      sym__expression,
      sym_prefix_expression,
      sym_binary_expression,
      sym_function_literal,
      sym_call_expression,
      sym_parenthesized_expression,
  [575] = 9,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym_argument_list,
    STATE(46), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(25), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(100), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(23), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [609] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_argument_list,
    ACTIONS(25), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(100), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(160), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(23), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [638] = 3,
    ACTIONS(164), 1,
      anon_sym_SEMI,
    ACTIONS(166), 6,
      anon_sym_let,
      anon_sym_return,
      anon_sym_fn,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(162), 7,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      sym_number,
  [659] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym_argument_list,
    ACTIONS(25), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(100), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(23), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [687] = 2,
    ACTIONS(172), 6,
      anon_sym_let,
      anon_sym_return,
      anon_sym_fn,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(170), 7,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      sym_number,
  [705] = 3,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      aux_sym_parameter_declaration_repeat1,
  [715] = 2,
    STATE(38), 1,
      aux_sym_parameter_declaration_repeat1,
    ACTIONS(179), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [723] = 3,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym_argument_list_repeat1,
  [733] = 3,
    ACTIONS(184), 1,
      anon_sym_RPAREN,
    ACTIONS(186), 1,
      sym_identifier,
    STATE(43), 1,
      sym_parameter_declaration,
  [743] = 3,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_parameter_list_repeat1,
  [753] = 3,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      aux_sym_parameter_list_repeat1,
  [763] = 2,
    STATE(39), 1,
      aux_sym_parameter_declaration_repeat1,
    ACTIONS(194), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [771] = 3,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_parameter_list_repeat1,
  [781] = 3,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym_argument_list_repeat1,
  [791] = 1,
    ACTIONS(203), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [796] = 2,
    ACTIONS(186), 1,
      sym_identifier,
    STATE(49), 1,
      sym_parameter_declaration,
  [803] = 1,
    ACTIONS(199), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [808] = 2,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      sym_block_statement,
  [815] = 2,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym_parameter_list,
  [822] = 1,
    ACTIONS(209), 1,
      anon_sym_LBRACE,
  [826] = 1,
    ACTIONS(211), 1,
      sym_identifier,
  [830] = 1,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
  [834] = 1,
    ACTIONS(215), 1,
      sym_identifier,
  [838] = 1,
    ACTIONS(217), 1,
      anon_sym_EQ,
  [842] = 1,
    ACTIONS(219), 1,
      anon_sym_LBRACE,
  [846] = 1,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 46,
  [SMALL_STATE(18)] = 86,
  [SMALL_STATE(19)] = 132,
  [SMALL_STATE(20)] = 172,
  [SMALL_STATE(21)] = 212,
  [SMALL_STATE(22)] = 258,
  [SMALL_STATE(23)] = 289,
  [SMALL_STATE(24)] = 320,
  [SMALL_STATE(25)] = 351,
  [SMALL_STATE(26)] = 379,
  [SMALL_STATE(27)] = 407,
  [SMALL_STATE(28)] = 435,
  [SMALL_STATE(29)] = 463,
  [SMALL_STATE(30)] = 491,
  [SMALL_STATE(31)] = 519,
  [SMALL_STATE(32)] = 547,
  [SMALL_STATE(33)] = 575,
  [SMALL_STATE(34)] = 609,
  [SMALL_STATE(35)] = 638,
  [SMALL_STATE(36)] = 659,
  [SMALL_STATE(37)] = 687,
  [SMALL_STATE(38)] = 705,
  [SMALL_STATE(39)] = 715,
  [SMALL_STATE(40)] = 723,
  [SMALL_STATE(41)] = 733,
  [SMALL_STATE(42)] = 743,
  [SMALL_STATE(43)] = 753,
  [SMALL_STATE(44)] = 763,
  [SMALL_STATE(45)] = 771,
  [SMALL_STATE(46)] = 781,
  [SMALL_STATE(47)] = 791,
  [SMALL_STATE(48)] = 796,
  [SMALL_STATE(49)] = 803,
  [SMALL_STATE(50)] = 808,
  [SMALL_STATE(51)] = 815,
  [SMALL_STATE(52)] = 822,
  [SMALL_STATE(53)] = 826,
  [SMALL_STATE(54)] = 830,
  [SMALL_STATE(55)] = 834,
  [SMALL_STATE(56)] = 838,
  [SMALL_STATE(57)] = 842,
  [SMALL_STATE(58)] = 846,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 6),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 6),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_expression, 2, .production_id = 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix_expression, 2, .production_id = 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 5),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_literal, 3, .production_id = 5),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_literal, 3, .production_id = 5),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, .production_id = 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2, .production_id = 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, .production_id = 7),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 4, .production_id = 7),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_declaration_repeat1, 2, .production_id = 10), SHIFT_REPEAT(53),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_declaration_repeat1, 2, .production_id = 10),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 2, .production_id = 8),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(28),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 1, .production_id = 4),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(48),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_declaration_repeat1, 2, .production_id = 9),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [221] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_monkey(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
