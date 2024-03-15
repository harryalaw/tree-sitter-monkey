#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 70
#define LARGE_STATE_COUNT 25
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 13

enum {
  anon_sym_SEMI = 1,
  anon_sym_let = 2,
  anon_sym_EQ = 3,
  anon_sym_return = 4,
  anon_sym_if = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_else = 8,
  anon_sym_PLUS = 9,
  anon_sym_DASH = 10,
  anon_sym_BANG = 11,
  anon_sym_STAR = 12,
  anon_sym_SLASH = 13,
  anon_sym_LT_EQ = 14,
  anon_sym_LT = 15,
  anon_sym_GT = 16,
  anon_sym_GT_EQ = 17,
  anon_sym_EQ_EQ = 18,
  anon_sym_BANG_EQ = 19,
  anon_sym_COMMA = 20,
  anon_sym_LBRACE = 21,
  anon_sym_RBRACE = 22,
  anon_sym_fn = 23,
  sym_true = 24,
  sym_false = 25,
  sym_identifier = 26,
  sym_number = 27,
  anon_sym_DQUOTE = 28,
  sym_source_file = 29,
  sym__statement = 30,
  sym_let_statement = 31,
  sym_return_statement = 32,
  sym_expression_statement = 33,
  sym__expression = 34,
  sym_if_expression = 35,
  sym_prefix_expression = 36,
  sym_binary_expression = 37,
  sym_parameter_list = 38,
  sym_parameter_declaration = 39,
  sym_block_statement = 40,
  sym_function_literal = 41,
  sym_call_expression = 42,
  sym_argument_list = 43,
  sym_parenthesized_expression = 44,
  aux_sym_source_file_repeat1 = 45,
  aux_sym_parameter_list_repeat1 = 46,
  aux_sym_parameter_declaration_repeat1 = 47,
  aux_sym_argument_list_repeat1 = 48,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_return] = "return",
  [anon_sym_if] = "if",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_else] = "else",
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
  [anon_sym_COMMA] = ",",
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
  [sym_if_expression] = "if_expression",
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
  [anon_sym_if] = anon_sym_if,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_else] = anon_sym_else,
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
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym_if_expression] = sym_if_expression,
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
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
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
  [anon_sym_COMMA] = {
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
  [sym_if_expression] = {
    .visible = true,
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
  field_alternative = 1,
  field_arguments = 2,
  field_body = 3,
  field_condition = 4,
  field_consequence = 5,
  field_function = 6,
  field_left = 7,
  field_name = 8,
  field_operand = 9,
  field_operator = 10,
  field_parameters = 11,
  field_right = 12,
  field_value = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
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
  [9] = {.index = 15, .length = 2},
  [10] = {.index = 17, .length = 1},
  [11] = {.index = 18, .length = 2},
  [12] = {.index = 20, .length = 3},
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
    {field_condition, 2},
    {field_consequence, 4},
  [17] =
    {field_name, 1},
  [18] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [20] =
    {field_alternative, 6},
    {field_condition, 2},
    {field_consequence, 4},
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
  [16] = 9,
  [17] = 8,
  [18] = 18,
  [19] = 19,
  [20] = 18,
  [21] = 21,
  [22] = 22,
  [23] = 15,
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
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == ',') ADVANCE(28);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '>') ADVANCE(24);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '}') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(26);
      END_STATE();
    case 4:
      if (eof) ADVANCE(6);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == ',') ADVANCE(28);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == '=') ADVANCE(3);
      if (lookahead == '>') ADVANCE(24);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == '}') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == ',') ADVANCE(28);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == '=') ADVANCE(3);
      if (lookahead == '>') ADVANCE(24);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == '}') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_let);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(26);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_return);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_if);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_else);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(27);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(22);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_true);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_false);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'n') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
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
    [anon_sym_COMMA] = ACTIONS(1),
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
    [sym_source_file] = STATE(68),
    [sym__statement] = STATE(13),
    [sym_let_statement] = STATE(40),
    [sym_return_statement] = STATE(40),
    [sym_expression_statement] = STATE(40),
    [sym__expression] = STATE(27),
    [sym_if_expression] = STATE(27),
    [sym_prefix_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_function_literal] = STATE(27),
    [sym_call_expression] = STATE(27),
    [sym_parenthesized_expression] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_return] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_identifier] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
  },
  [2] = {
    [sym_argument_list] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_let] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(21),
    [anon_sym_fn] = ACTIONS(23),
    [sym_true] = ACTIONS(23),
    [sym_false] = ACTIONS(23),
    [sym_identifier] = ACTIONS(23),
    [sym_number] = ACTIONS(21),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_SEMI] = ACTIONS(27),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym_return] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(27),
    [anon_sym_else] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(27),
    [anon_sym_BANG_EQ] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_fn] = ACTIONS(29),
    [sym_true] = ACTIONS(29),
    [sym_false] = ACTIONS(29),
    [sym_identifier] = ACTIONS(29),
    [sym_number] = ACTIONS(27),
  },
  [4] = {
    [sym_argument_list] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_let] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_LT_EQ] = ACTIONS(39),
    [anon_sym_LT] = ACTIONS(41),
    [anon_sym_GT] = ACTIONS(41),
    [anon_sym_GT_EQ] = ACTIONS(39),
    [anon_sym_EQ_EQ] = ACTIONS(33),
    [anon_sym_BANG_EQ] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(33),
    [anon_sym_fn] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(33),
  },
  [5] = {
    [sym_argument_list] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_let] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_LT_EQ] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_GT] = ACTIONS(35),
    [anon_sym_GT_EQ] = ACTIONS(33),
    [anon_sym_EQ_EQ] = ACTIONS(33),
    [anon_sym_BANG_EQ] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(33),
    [anon_sym_fn] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(33),
  },
  [6] = {
    [sym_argument_list] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_let] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_SLASH] = ACTIONS(33),
    [anon_sym_LT_EQ] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_GT] = ACTIONS(35),
    [anon_sym_GT_EQ] = ACTIONS(33),
    [anon_sym_EQ_EQ] = ACTIONS(33),
    [anon_sym_BANG_EQ] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(33),
    [anon_sym_fn] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(33),
  },
  [7] = {
    [sym__statement] = STATE(7),
    [sym_let_statement] = STATE(40),
    [sym_return_statement] = STATE(40),
    [sym_expression_statement] = STATE(40),
    [sym__expression] = STATE(27),
    [sym_if_expression] = STATE(27),
    [sym_prefix_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_function_literal] = STATE(27),
    [sym_call_expression] = STATE(27),
    [sym_parenthesized_expression] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(45),
    [anon_sym_return] = ACTIONS(48),
    [anon_sym_if] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_BANG] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_fn] = ACTIONS(60),
    [sym_true] = ACTIONS(63),
    [sym_false] = ACTIONS(63),
    [sym_identifier] = ACTIONS(63),
    [sym_number] = ACTIONS(66),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_SEMI] = ACTIONS(69),
    [anon_sym_let] = ACTIONS(71),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(69),
    [anon_sym_else] = ACTIONS(71),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_LT_EQ] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(71),
    [anon_sym_GT] = ACTIONS(71),
    [anon_sym_GT_EQ] = ACTIONS(69),
    [anon_sym_EQ_EQ] = ACTIONS(69),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(69),
    [anon_sym_fn] = ACTIONS(71),
    [sym_true] = ACTIONS(71),
    [sym_false] = ACTIONS(71),
    [sym_identifier] = ACTIONS(71),
    [sym_number] = ACTIONS(69),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(73),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_BANG] = ACTIONS(75),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(73),
    [anon_sym_LT_EQ] = ACTIONS(73),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_GT_EQ] = ACTIONS(73),
    [anon_sym_EQ_EQ] = ACTIONS(73),
    [anon_sym_BANG_EQ] = ACTIONS(73),
    [anon_sym_COMMA] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [sym_true] = ACTIONS(75),
    [sym_false] = ACTIONS(75),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(73),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(77),
    [anon_sym_let] = ACTIONS(79),
    [anon_sym_return] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_BANG] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(77),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_LT_EQ] = ACTIONS(77),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_GT_EQ] = ACTIONS(77),
    [anon_sym_EQ_EQ] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(77),
    [anon_sym_COMMA] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_fn] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
    [sym_number] = ACTIONS(77),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_let] = ACTIONS(83),
    [anon_sym_return] = ACTIONS(83),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(83),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(81),
    [anon_sym_LT] = ACTIONS(83),
    [anon_sym_GT] = ACTIONS(83),
    [anon_sym_GT_EQ] = ACTIONS(81),
    [anon_sym_EQ_EQ] = ACTIONS(81),
    [anon_sym_BANG_EQ] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_fn] = ACTIONS(83),
    [sym_true] = ACTIONS(83),
    [sym_false] = ACTIONS(83),
    [sym_identifier] = ACTIONS(83),
    [sym_number] = ACTIONS(81),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_let] = ACTIONS(87),
    [anon_sym_return] = ACTIONS(87),
    [anon_sym_if] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(87),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_LT_EQ] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_GT_EQ] = ACTIONS(85),
    [anon_sym_EQ_EQ] = ACTIONS(85),
    [anon_sym_BANG_EQ] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_fn] = ACTIONS(87),
    [sym_true] = ACTIONS(87),
    [sym_false] = ACTIONS(87),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(85),
  },
  [13] = {
    [sym__statement] = STATE(7),
    [sym_let_statement] = STATE(40),
    [sym_return_statement] = STATE(40),
    [sym_expression_statement] = STATE(40),
    [sym__expression] = STATE(27),
    [sym_if_expression] = STATE(27),
    [sym_prefix_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_function_literal] = STATE(27),
    [sym_call_expression] = STATE(27),
    [sym_parenthesized_expression] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_return] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_identifier] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_SEMI] = ACTIONS(91),
    [anon_sym_let] = ACTIONS(93),
    [anon_sym_return] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_PLUS] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(91),
    [anon_sym_BANG] = ACTIONS(93),
    [anon_sym_STAR] = ACTIONS(91),
    [anon_sym_SLASH] = ACTIONS(91),
    [anon_sym_LT_EQ] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_EQ] = ACTIONS(91),
    [anon_sym_EQ_EQ] = ACTIONS(91),
    [anon_sym_BANG_EQ] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_fn] = ACTIONS(93),
    [sym_true] = ACTIONS(93),
    [sym_false] = ACTIONS(93),
    [sym_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(91),
  },
  [15] = {
    [sym__statement] = STATE(7),
    [sym_let_statement] = STATE(40),
    [sym_return_statement] = STATE(40),
    [sym_expression_statement] = STATE(40),
    [sym__expression] = STATE(27),
    [sym_if_expression] = STATE(27),
    [sym_prefix_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_function_literal] = STATE(27),
    [sym_call_expression] = STATE(27),
    [sym_parenthesized_expression] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(7),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_return] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_fn] = ACTIONS(15),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_identifier] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(73),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_BANG] = ACTIONS(75),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(73),
    [anon_sym_LT_EQ] = ACTIONS(73),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_GT_EQ] = ACTIONS(73),
    [anon_sym_EQ_EQ] = ACTIONS(73),
    [anon_sym_BANG_EQ] = ACTIONS(73),
    [anon_sym_COMMA] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [sym_true] = ACTIONS(75),
    [sym_false] = ACTIONS(75),
    [sym_identifier] = ACTIONS(75),
    [sym_number] = ACTIONS(73),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_SEMI] = ACTIONS(69),
    [anon_sym_let] = ACTIONS(71),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_LT_EQ] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(71),
    [anon_sym_GT] = ACTIONS(71),
    [anon_sym_GT_EQ] = ACTIONS(69),
    [anon_sym_EQ_EQ] = ACTIONS(69),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(69),
    [anon_sym_fn] = ACTIONS(71),
    [sym_true] = ACTIONS(71),
    [sym_false] = ACTIONS(71),
    [sym_identifier] = ACTIONS(71),
    [sym_number] = ACTIONS(69),
  },
  [18] = {
    [sym__statement] = STATE(23),
    [sym_let_statement] = STATE(40),
    [sym_return_statement] = STATE(40),
    [sym_expression_statement] = STATE(40),
    [sym__expression] = STATE(27),
    [sym_if_expression] = STATE(27),
    [sym_prefix_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_function_literal] = STATE(27),
    [sym_call_expression] = STATE(27),
    [sym_parenthesized_expression] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(23),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_return] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_fn] = ACTIONS(15),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_identifier] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_SEMI] = ACTIONS(99),
    [anon_sym_let] = ACTIONS(101),
    [anon_sym_return] = ACTIONS(101),
    [anon_sym_if] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_DASH] = ACTIONS(99),
    [anon_sym_BANG] = ACTIONS(101),
    [anon_sym_STAR] = ACTIONS(99),
    [anon_sym_SLASH] = ACTIONS(99),
    [anon_sym_LT_EQ] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_EQ] = ACTIONS(99),
    [anon_sym_EQ_EQ] = ACTIONS(99),
    [anon_sym_BANG_EQ] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(99),
    [anon_sym_fn] = ACTIONS(101),
    [sym_true] = ACTIONS(101),
    [sym_false] = ACTIONS(101),
    [sym_identifier] = ACTIONS(101),
    [sym_number] = ACTIONS(99),
  },
  [20] = {
    [sym__statement] = STATE(15),
    [sym_let_statement] = STATE(40),
    [sym_return_statement] = STATE(40),
    [sym_expression_statement] = STATE(40),
    [sym__expression] = STATE(27),
    [sym_if_expression] = STATE(27),
    [sym_prefix_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_function_literal] = STATE(27),
    [sym_call_expression] = STATE(27),
    [sym_parenthesized_expression] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(15),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_return] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(103),
    [anon_sym_fn] = ACTIONS(15),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_identifier] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_SEMI] = ACTIONS(105),
    [anon_sym_let] = ACTIONS(107),
    [anon_sym_return] = ACTIONS(107),
    [anon_sym_if] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_STAR] = ACTIONS(105),
    [anon_sym_SLASH] = ACTIONS(105),
    [anon_sym_LT_EQ] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_EQ] = ACTIONS(105),
    [anon_sym_EQ_EQ] = ACTIONS(105),
    [anon_sym_BANG_EQ] = ACTIONS(105),
    [anon_sym_COMMA] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_fn] = ACTIONS(107),
    [sym_true] = ACTIONS(107),
    [sym_false] = ACTIONS(107),
    [sym_identifier] = ACTIONS(107),
    [sym_number] = ACTIONS(105),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [anon_sym_SEMI] = ACTIONS(109),
    [anon_sym_let] = ACTIONS(111),
    [anon_sym_return] = ACTIONS(111),
    [anon_sym_if] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(111),
    [anon_sym_STAR] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_LT_EQ] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(111),
    [anon_sym_GT] = ACTIONS(111),
    [anon_sym_GT_EQ] = ACTIONS(109),
    [anon_sym_EQ_EQ] = ACTIONS(109),
    [anon_sym_BANG_EQ] = ACTIONS(109),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_fn] = ACTIONS(111),
    [sym_true] = ACTIONS(111),
    [sym_false] = ACTIONS(111),
    [sym_identifier] = ACTIONS(111),
    [sym_number] = ACTIONS(109),
  },
  [23] = {
    [sym__statement] = STATE(7),
    [sym_let_statement] = STATE(40),
    [sym_return_statement] = STATE(40),
    [sym_expression_statement] = STATE(40),
    [sym__expression] = STATE(27),
    [sym_if_expression] = STATE(27),
    [sym_prefix_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym_function_literal] = STATE(27),
    [sym_call_expression] = STATE(27),
    [sym_parenthesized_expression] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(7),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_return] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_fn] = ACTIONS(15),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_identifier] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [anon_sym_SEMI] = ACTIONS(115),
    [anon_sym_let] = ACTIONS(117),
    [anon_sym_return] = ACTIONS(117),
    [anon_sym_if] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(115),
    [anon_sym_BANG] = ACTIONS(117),
    [anon_sym_STAR] = ACTIONS(115),
    [anon_sym_SLASH] = ACTIONS(115),
    [anon_sym_LT_EQ] = ACTIONS(115),
    [anon_sym_LT] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(115),
    [anon_sym_EQ_EQ] = ACTIONS(115),
    [anon_sym_BANG_EQ] = ACTIONS(115),
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_fn] = ACTIONS(117),
    [sym_true] = ACTIONS(117),
    [sym_false] = ACTIONS(117),
    [sym_identifier] = ACTIONS(117),
    [sym_number] = ACTIONS(115),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_argument_list,
    ACTIONS(39), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(41), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(37), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(119), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(121), 8,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_BANG,
      anon_sym_fn,
      sym_true,
      sym_false,
      sym_identifier,
  [41] = 8,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_argument_list,
    ACTIONS(39), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(41), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(37), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(125), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(127), 8,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_BANG,
      anon_sym_fn,
      sym_true,
      sym_false,
      sym_identifier,
  [82] = 8,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_argument_list,
    ACTIONS(39), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(41), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(37), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(129), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(131), 8,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_BANG,
      anon_sym_fn,
      sym_true,
      sym_false,
      sym_identifier,
  [123] = 8,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_fn,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    ACTIONS(137), 1,
      sym_number,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(135), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(43), 7,
      sym__expression,
      sym_if_expression,
      sym_prefix_expression,
      sym_binary_expression,
      sym_function_literal,
      sym_call_expression,
      sym_parenthesized_expression,
  [158] = 8,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_fn,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    ACTIONS(143), 1,
      sym_number,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(141), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(41), 7,
      sym__expression,
      sym_if_expression,
      sym_prefix_expression,
      sym_binary_expression,
      sym_function_literal,
      sym_call_expression,
      sym_parenthesized_expression,
  [193] = 8,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_fn,
    ACTIONS(137), 1,
      sym_number,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(135), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(43), 7,
      sym__expression,
      sym_if_expression,
      sym_prefix_expression,
      sym_binary_expression,
      sym_function_literal,
      sym_call_expression,
      sym_parenthesized_expression,
  [228] = 7,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_fn,
    ACTIONS(149), 1,
      sym_number,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(147), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(4), 7,
      sym__expression,
      sym_if_expression,
      sym_prefix_expression,
      sym_binary_expression,
      sym_function_literal,
      sym_call_expression,
      sym_parenthesized_expression,
  [260] = 7,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_fn,
    ACTIONS(153), 1,
      sym_number,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(151), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(25), 7,
      sym__expression,
      sym_if_expression,
      sym_prefix_expression,
      sym_binary_expression,
      sym_function_literal,
      sym_call_expression,
      sym_parenthesized_expression,
  [292] = 7,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_fn,
    ACTIONS(157), 1,
      sym_number,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(155), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(26), 7,
      sym__expression,
      sym_if_expression,
      sym_prefix_expression,
      sym_binary_expression,
      sym_function_literal,
      sym_call_expression,
      sym_parenthesized_expression,
  [324] = 7,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_fn,
    ACTIONS(161), 1,
      sym_number,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(159), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(5), 7,
      sym__expression,
      sym_if_expression,
      sym_prefix_expression,
      sym_binary_expression,
      sym_function_literal,
      sym_call_expression,
      sym_parenthesized_expression,
  [356] = 7,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_fn,
    ACTIONS(165), 1,
      sym_number,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(163), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(6), 7,
      sym__expression,
      sym_if_expression,
      sym_prefix_expression,
      sym_binary_expression,
      sym_function_literal,
      sym_call_expression,
      sym_parenthesized_expression,
  [388] = 7,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_fn,
    ACTIONS(169), 1,
      sym_number,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(167), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(2), 7,
      sym__expression,
      sym_if_expression,
      sym_prefix_expression,
      sym_binary_expression,
      sym_function_literal,
      sym_call_expression,
      sym_parenthesized_expression,
  [420] = 7,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_fn,
    ACTIONS(173), 1,
      sym_number,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(171), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(44), 7,
      sym__expression,
      sym_if_expression,
      sym_prefix_expression,
      sym_binary_expression,
      sym_function_literal,
      sym_call_expression,
      sym_parenthesized_expression,
  [452] = 7,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_fn,
    ACTIONS(137), 1,
      sym_number,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(135), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(43), 7,
      sym__expression,
      sym_if_expression,
      sym_prefix_expression,
      sym_binary_expression,
      sym_function_literal,
      sym_call_expression,
      sym_parenthesized_expression,
  [484] = 7,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_fn,
    ACTIONS(177), 1,
      sym_number,
    ACTIONS(13), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(175), 3,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(45), 7,
      sym__expression,
      sym_if_expression,
      sym_prefix_expression,
      sym_binary_expression,
      sym_function_literal,
      sym_call_expression,
      sym_parenthesized_expression,
  [516] = 3,
    ACTIONS(181), 1,
      anon_sym_SEMI,
    ACTIONS(179), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(183), 7,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_fn,
      sym_true,
      sym_false,
      sym_identifier,
  [538] = 9,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      sym_argument_list,
    STATE(50), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(39), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(41), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(37), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [572] = 2,
    ACTIONS(189), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_RBRACE,
      sym_number,
    ACTIONS(191), 7,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_fn,
      sym_true,
      sym_false,
      sym_identifier,
  [591] = 7,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_argument_list,
    ACTIONS(39), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(41), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(193), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(37), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [620] = 7,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_argument_list,
    ACTIONS(39), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(41), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(37), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [648] = 7,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_argument_list,
    ACTIONS(39), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(41), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(37), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [676] = 3,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(52), 1,
      sym_parameter_declaration,
  [686] = 3,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym_parameter_list_repeat1,
  [696] = 2,
    STATE(53), 1,
      aux_sym_parameter_declaration_repeat1,
    ACTIONS(208), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [704] = 2,
    STATE(48), 1,
      aux_sym_parameter_declaration_repeat1,
    ACTIONS(210), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [712] = 3,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_argument_list_repeat1,
  [722] = 3,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_argument_list_repeat1,
  [732] = 3,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym_parameter_list_repeat1,
  [742] = 3,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_parameter_declaration_repeat1,
  [752] = 3,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(226), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_parameter_list_repeat1,
  [762] = 1,
    ACTIONS(228), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [767] = 2,
    ACTIONS(230), 1,
      anon_sym_LBRACE,
    STATE(3), 1,
      sym_block_statement,
  [774] = 1,
    ACTIONS(203), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [779] = 2,
    ACTIONS(232), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_block_statement,
  [786] = 2,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(57), 1,
      sym_parameter_declaration,
  [793] = 2,
    ACTIONS(232), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_block_statement,
  [800] = 2,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym_parameter_list,
  [807] = 1,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
  [811] = 1,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
  [815] = 1,
    ACTIONS(240), 1,
      sym_identifier,
  [819] = 1,
    ACTIONS(242), 1,
      sym_identifier,
  [823] = 1,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
  [827] = 1,
    ACTIONS(246), 1,
      anon_sym_EQ,
  [831] = 1,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
  [835] = 1,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(25)] = 0,
  [SMALL_STATE(26)] = 41,
  [SMALL_STATE(27)] = 82,
  [SMALL_STATE(28)] = 123,
  [SMALL_STATE(29)] = 158,
  [SMALL_STATE(30)] = 193,
  [SMALL_STATE(31)] = 228,
  [SMALL_STATE(32)] = 260,
  [SMALL_STATE(33)] = 292,
  [SMALL_STATE(34)] = 324,
  [SMALL_STATE(35)] = 356,
  [SMALL_STATE(36)] = 388,
  [SMALL_STATE(37)] = 420,
  [SMALL_STATE(38)] = 452,
  [SMALL_STATE(39)] = 484,
  [SMALL_STATE(40)] = 516,
  [SMALL_STATE(41)] = 538,
  [SMALL_STATE(42)] = 572,
  [SMALL_STATE(43)] = 591,
  [SMALL_STATE(44)] = 620,
  [SMALL_STATE(45)] = 648,
  [SMALL_STATE(46)] = 676,
  [SMALL_STATE(47)] = 686,
  [SMALL_STATE(48)] = 696,
  [SMALL_STATE(49)] = 704,
  [SMALL_STATE(50)] = 712,
  [SMALL_STATE(51)] = 722,
  [SMALL_STATE(52)] = 732,
  [SMALL_STATE(53)] = 742,
  [SMALL_STATE(54)] = 752,
  [SMALL_STATE(55)] = 762,
  [SMALL_STATE(56)] = 767,
  [SMALL_STATE(57)] = 774,
  [SMALL_STATE(58)] = 779,
  [SMALL_STATE(59)] = 786,
  [SMALL_STATE(60)] = 793,
  [SMALL_STATE(61)] = 800,
  [SMALL_STATE(62)] = 807,
  [SMALL_STATE(63)] = 811,
  [SMALL_STATE(64)] = 815,
  [SMALL_STATE(65)] = 819,
  [SMALL_STATE(66)] = 823,
  [SMALL_STATE(67)] = 827,
  [SMALL_STATE(68)] = 831,
  [SMALL_STATE(69)] = 835,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_expression, 2, .production_id = 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix_expression, 2, .production_id = 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 5, .production_id = 9),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 5, .production_id = 9),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 6),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 6),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_literal, 3, .production_id = 5),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_literal, 3, .production_id = 5),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 7, .production_id = 12),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 7, .production_id = 12),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 5),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, .production_id = 7),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 4, .production_id = 7),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, .production_id = 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2, .production_id = 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(59),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 2, .production_id = 8),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 1, .production_id = 4),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(38),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_declaration_repeat1, 2, .production_id = 11),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_declaration_repeat1, 2, .production_id = 11), SHIFT_REPEAT(65),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_declaration_repeat1, 2, .production_id = 10),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [248] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
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
