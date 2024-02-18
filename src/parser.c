#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum {
  sym_comment = 1,
  aux_sym_property_name_token1 = 2,
  anon_sym_EQ = 3,
  anon_sym_COLON = 4,
  aux_sym__string_fragment_token1 = 5,
  anon_sym_BSLASH = 6,
  aux_sym_escape_sequence_token1 = 7,
  aux_sym_escape_sequence_token2 = 8,
  aux_sym_escape_sequence_token3 = 9,
  aux_sym_escape_sequence_token4 = 10,
  aux_sym_escape_sequence_token5 = 11,
  sym__new_line = 12,
  sym_properties = 13,
  sym_property = 14,
  sym_property_name = 15,
  sym_sep = 16,
  sym_property_value = 17,
  sym__string_value = 18,
  sym__string_fragment = 19,
  sym_escape_sequence = 20,
  sym__continued_line = 21,
  sym_continuation = 22,
  aux_sym_properties_repeat1 = 23,
  aux_sym_property_name_repeat1 = 24,
  aux_sym__string_value_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [aux_sym_property_name_token1] = "property_name_token1",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON] = ":",
  [aux_sym__string_fragment_token1] = "_string_fragment_token1",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_escape_sequence_token1] = "escape_sequence_token1",
  [aux_sym_escape_sequence_token2] = "escape_sequence_token2",
  [aux_sym_escape_sequence_token3] = "escape_sequence_token3",
  [aux_sym_escape_sequence_token4] = "escape_sequence_token4",
  [aux_sym_escape_sequence_token5] = "escape_sequence_token5",
  [sym__new_line] = "_new_line",
  [sym_properties] = "properties",
  [sym_property] = "property",
  [sym_property_name] = "property_name",
  [sym_sep] = "sep",
  [sym_property_value] = "property_value",
  [sym__string_value] = "_string_value",
  [sym__string_fragment] = "_string_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [sym__continued_line] = "_continued_line",
  [sym_continuation] = "continuation",
  [aux_sym_properties_repeat1] = "properties_repeat1",
  [aux_sym_property_name_repeat1] = "property_name_repeat1",
  [aux_sym__string_value_repeat1] = "_string_value_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [aux_sym_property_name_token1] = aux_sym_property_name_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym__string_fragment_token1] = aux_sym__string_fragment_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_escape_sequence_token1] = aux_sym_escape_sequence_token1,
  [aux_sym_escape_sequence_token2] = aux_sym_escape_sequence_token2,
  [aux_sym_escape_sequence_token3] = aux_sym_escape_sequence_token3,
  [aux_sym_escape_sequence_token4] = aux_sym_escape_sequence_token4,
  [aux_sym_escape_sequence_token5] = aux_sym_escape_sequence_token5,
  [sym__new_line] = sym__new_line,
  [sym_properties] = sym_properties,
  [sym_property] = sym_property,
  [sym_property_name] = sym_property_name,
  [sym_sep] = sym_sep,
  [sym_property_value] = sym_property_value,
  [sym__string_value] = sym__string_value,
  [sym__string_fragment] = sym__string_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym__continued_line] = sym__continued_line,
  [sym_continuation] = sym_continuation,
  [aux_sym_properties_repeat1] = aux_sym_properties_repeat1,
  [aux_sym_property_name_repeat1] = aux_sym_property_name_repeat1,
  [aux_sym__string_value_repeat1] = aux_sym__string_value_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_property_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_escape_sequence_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_escape_sequence_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_escape_sequence_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_escape_sequence_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_escape_sequence_token5] = {
    .visible = false,
    .named = false,
  },
  [sym__new_line] = {
    .visible = false,
    .named = true,
  },
  [sym_properties] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_property_name] = {
    .visible = true,
    .named = true,
  },
  [sym_sep] = {
    .visible = true,
    .named = true,
  },
  [sym_property_value] = {
    .visible = true,
    .named = true,
  },
  [sym__string_value] = {
    .visible = false,
    .named = true,
  },
  [sym__string_fragment] = {
    .visible = false,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__continued_line] = {
    .visible = false,
    .named = true,
  },
  [sym_continuation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_properties_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_property_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_value_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_key = 1,
  field_operator = 2,
  field_separator = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_operator] = "operator",
  [field_separator] = "separator",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_separator, 1},
    {field_value, 2},
  [3] =
    {field_operator, 0},
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
  [12] = 11,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(19);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == 'u') ADVANCE(2);
      if (lookahead == 'x') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(35);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(2);
      if (lookahead == 'x') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == '{') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == '}') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(2);
      if (lookahead == 'x') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(28);
      END_STATE();
    case 13:
      if (eof) ADVANCE(17);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 14:
      if (eof) ADVANCE(17);
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(19);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(14)
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 15:
      if (eof) ADVANCE(17);
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(15)
      if (lookahead == ':' ||
          lookahead == '=') ADVANCE(12);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r' ||
          lookahead == '\\') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_property_name_token1);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_property_name_token1);
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':' &&
          lookahead != '=') ADVANCE(20);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_property_name_token1);
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':' &&
          lookahead != '=') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_property_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(28);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym__string_fragment_token1);
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym__string_fragment_token1);
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == ':' ||
          lookahead == '=') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(23);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym__string_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(33);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(34);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token4);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token5);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__new_line);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(32);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 14},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 15},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_escape_sequence_token2] = ACTIONS(1),
    [aux_sym_escape_sequence_token3] = ACTIONS(1),
    [aux_sym_escape_sequence_token4] = ACTIONS(1),
    [aux_sym_escape_sequence_token5] = ACTIONS(1),
  },
  [1] = {
    [sym_properties] = STATE(22),
    [sym_property] = STATE(5),
    [sym_property_name] = STATE(15),
    [sym_escape_sequence] = STATE(8),
    [aux_sym_properties_repeat1] = STATE(5),
    [aux_sym_property_name_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [aux_sym_property_name_token1] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__string_fragment_token1,
    ACTIONS(17), 1,
      anon_sym_BSLASH,
    STATE(6), 1,
      sym_continuation,
    STATE(16), 1,
      sym_property_value,
    STATE(17), 2,
      sym__string_value,
      sym__continued_line,
    STATE(3), 3,
      sym__string_fragment,
      sym_escape_sequence,
      aux_sym__string_value_repeat1,
  [25] = 7,
    ACTIONS(17), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      aux_sym__string_fragment_token1,
    STATE(6), 1,
      sym_continuation,
    STATE(19), 1,
      sym__continued_line,
    ACTIONS(21), 2,
      sym_comment,
      aux_sym_property_name_token1,
    STATE(7), 3,
      sym__string_fragment,
      sym_escape_sequence,
      aux_sym__string_value_repeat1,
  [50] = 7,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(30), 1,
      aux_sym_property_name_token1,
    ACTIONS(33), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      sym_property_name,
    STATE(4), 2,
      sym_property,
      aux_sym_properties_repeat1,
    STATE(8), 2,
      sym_escape_sequence,
      aux_sym_property_name_repeat1,
  [74] = 7,
    ACTIONS(9), 1,
      aux_sym_property_name_token1,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      sym_comment,
    STATE(15), 1,
      sym_property_name,
    STATE(4), 2,
      sym_property,
      aux_sym_properties_repeat1,
    STATE(8), 2,
      sym_escape_sequence,
      aux_sym_property_name_repeat1,
  [98] = 6,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym__string_fragment_token1,
    ACTIONS(17), 1,
      anon_sym_BSLASH,
    STATE(6), 1,
      sym_continuation,
    STATE(18), 2,
      sym__string_value,
      sym__continued_line,
    STATE(3), 3,
      sym__string_fragment,
      sym_escape_sequence,
      aux_sym__string_value_repeat1,
  [120] = 5,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      aux_sym__string_fragment_token1,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    ACTIONS(42), 2,
      sym_comment,
      aux_sym_property_name_token1,
    STATE(7), 3,
      sym__string_fragment,
      sym_escape_sequence,
      aux_sym__string_value_repeat1,
  [139] = 5,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(50), 1,
      aux_sym_property_name_token1,
    ACTIONS(52), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    STATE(9), 2,
      sym_escape_sequence,
      aux_sym_property_name_repeat1,
  [157] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(54), 1,
      aux_sym_property_name_token1,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(57), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    STATE(9), 2,
      sym_escape_sequence,
      aux_sym_property_name_repeat1,
  [175] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(64), 1,
      sym__new_line,
    ACTIONS(62), 5,
      aux_sym_escape_sequence_token1,
      aux_sym_escape_sequence_token2,
      aux_sym_escape_sequence_token3,
      aux_sym_escape_sequence_token4,
      aux_sym_escape_sequence_token5,
  [189] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(66), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(68), 4,
      aux_sym_escape_sequence_token2,
      aux_sym_escape_sequence_token3,
      aux_sym_escape_sequence_token4,
      aux_sym_escape_sequence_token5,
  [202] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(70), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(62), 4,
      aux_sym_escape_sequence_token2,
      aux_sym_escape_sequence_token3,
      aux_sym_escape_sequence_token4,
      aux_sym_escape_sequence_token5,
  [215] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(72), 4,
      aux_sym_property_name_token1,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_BSLASH,
  [225] = 2,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 4,
      sym_comment,
      aux_sym_property_name_token1,
      aux_sym__string_fragment_token1,
      anon_sym_BSLASH,
  [235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(2), 1,
      sym_sep,
    ACTIONS(76), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [246] = 2,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 3,
      sym_comment,
      aux_sym_property_name_token1,
      anon_sym_BSLASH,
  [255] = 2,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 3,
      sym_comment,
      aux_sym_property_name_token1,
      anon_sym_BSLASH,
  [264] = 2,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 3,
      sym_comment,
      aux_sym_property_name_token1,
      anon_sym_BSLASH,
  [273] = 2,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 3,
      sym_comment,
      aux_sym_property_name_token1,
      anon_sym_BSLASH,
  [282] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(94), 2,
      aux_sym__string_fragment_token1,
      anon_sym_BSLASH,
  [290] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(96), 2,
      aux_sym__string_fragment_token1,
      anon_sym_BSLASH,
  [298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 74,
  [SMALL_STATE(6)] = 98,
  [SMALL_STATE(7)] = 120,
  [SMALL_STATE(8)] = 139,
  [SMALL_STATE(9)] = 157,
  [SMALL_STATE(10)] = 175,
  [SMALL_STATE(11)] = 189,
  [SMALL_STATE(12)] = 202,
  [SMALL_STATE(13)] = 215,
  [SMALL_STATE(14)] = 225,
  [SMALL_STATE(15)] = 235,
  [SMALL_STATE(16)] = 246,
  [SMALL_STATE(17)] = 255,
  [SMALL_STATE(18)] = 264,
  [SMALL_STATE(19)] = 273,
  [SMALL_STATE(20)] = 282,
  [SMALL_STATE(21)] = 290,
  [SMALL_STATE(22)] = 298,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_value, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_value, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_properties_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_properties_repeat1, 2), SHIFT_REPEAT(4),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_properties_repeat1, 2), SHIFT_REPEAT(8),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_properties_repeat1, 2), SHIFT_REPEAT(11),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties, 1),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_value_repeat1, 2),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_value_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_value_repeat1, 2), SHIFT_REPEAT(7),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_value_repeat1, 2), SHIFT_REPEAT(12),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_name, 1),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_property_name_repeat1, 2), SHIFT_REPEAT(9),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_name_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_property_name_repeat1, 2), SHIFT_REPEAT(11),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, .production_id = 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 3, .production_id = 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_value, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__continued_line, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__continued_line, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_value, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_value, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sep, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 2, .production_id = 2),
  [98] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_properties(void) {
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
