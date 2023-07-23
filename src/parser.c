#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum {
  sym_comment = 1,
  sym_property_name = 2,
  anon_sym_EQ = 3,
  anon_sym_COLON = 4,
  aux_sym__string_fragment_token1 = 5,
  anon_sym_BSLASH = 6,
  aux_sym__escape_sequence_token1 = 7,
  aux_sym__escape_sequence_token2 = 8,
  aux_sym__escape_sequence_token3 = 9,
  aux_sym__escape_sequence_token4 = 10,
  aux_sym__escape_sequence_token5 = 11,
  sym__new_line = 12,
  sym_properties = 13,
  sym_property = 14,
  sym_sep = 15,
  sym_property_value = 16,
  sym__string_value = 17,
  sym__string_fragment = 18,
  sym__escape_sequence = 19,
  sym__continued_line = 20,
  sym_continuation = 21,
  aux_sym_properties_repeat1 = 22,
  aux_sym__string_value_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_property_name] = "property_name",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON] = ":",
  [aux_sym__string_fragment_token1] = "_string_fragment_token1",
  [anon_sym_BSLASH] = "\\",
  [aux_sym__escape_sequence_token1] = "_escape_sequence_token1",
  [aux_sym__escape_sequence_token2] = "_escape_sequence_token2",
  [aux_sym__escape_sequence_token3] = "_escape_sequence_token3",
  [aux_sym__escape_sequence_token4] = "_escape_sequence_token4",
  [aux_sym__escape_sequence_token5] = "_escape_sequence_token5",
  [sym__new_line] = "_new_line",
  [sym_properties] = "properties",
  [sym_property] = "property",
  [sym_sep] = "sep",
  [sym_property_value] = "property_value",
  [sym__string_value] = "_string_value",
  [sym__string_fragment] = "_string_fragment",
  [sym__escape_sequence] = "_escape_sequence",
  [sym__continued_line] = "_continued_line",
  [sym_continuation] = "continuation",
  [aux_sym_properties_repeat1] = "properties_repeat1",
  [aux_sym__string_value_repeat1] = "_string_value_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym_property_name] = sym_property_name,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym__string_fragment_token1] = aux_sym__string_fragment_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym__escape_sequence_token1] = aux_sym__escape_sequence_token1,
  [aux_sym__escape_sequence_token2] = aux_sym__escape_sequence_token2,
  [aux_sym__escape_sequence_token3] = aux_sym__escape_sequence_token3,
  [aux_sym__escape_sequence_token4] = aux_sym__escape_sequence_token4,
  [aux_sym__escape_sequence_token5] = aux_sym__escape_sequence_token5,
  [sym__new_line] = sym__new_line,
  [sym_properties] = sym_properties,
  [sym_property] = sym_property,
  [sym_sep] = sym_sep,
  [sym_property_value] = sym_property_value,
  [sym__string_value] = sym__string_value,
  [sym__string_fragment] = sym__string_fragment,
  [sym__escape_sequence] = sym__escape_sequence,
  [sym__continued_line] = sym__continued_line,
  [sym_continuation] = sym_continuation,
  [aux_sym_properties_repeat1] = aux_sym_properties_repeat1,
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
  [sym_property_name] = {
    .visible = true,
    .named = true,
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
  [aux_sym__escape_sequence_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__escape_sequence_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__escape_sequence_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__escape_sequence_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__escape_sequence_token5] = {
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
  [sym__escape_sequence] = {
    .visible = false,
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
  [aux_sym__string_value_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_key = 1,
  field_separator = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
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
    {field_separator, 0},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(18);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(21);
      if (lookahead == 'x') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\f') ADVANCE(29);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(4);
      if (lookahead == 'x') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(39);
      END_STATE();
    case 2:
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == 'u') ADVANCE(4);
      if (lookahead == 'x') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(39);
      END_STATE();
    case 4:
      if (lookahead == '{') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == '}') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(5);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(5);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
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
          lookahead != '\\') ADVANCE(32);
      END_STATE();
    case 13:
      if (eof) ADVANCE(15);
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0 &&
          lookahead != '\f' &&
          lookahead != ':' &&
          lookahead != '=') ADVANCE(29);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '\f' ||
          lookahead == ':' ||
          lookahead == '=') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == ':' ||
          lookahead == '=') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r' ||
          lookahead == '\\') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ':' ||
          lookahead == '=') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == ':' ||
          lookahead == '=') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == '{') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '=') ADVANCE(29);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == '}') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '=') ADVANCE(29);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_property_name);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '=') ADVANCE(29);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_property_name);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '=') ADVANCE(29);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_property_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '=') ADVANCE(29);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_property_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '=') ADVANCE(29);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_property_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '=') ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_property_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '=') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '=') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__string_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == ':' ||
          lookahead == '=') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(20);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '=') ADVANCE(29);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(32);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__escape_sequence_token1);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__escape_sequence_token2);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__escape_sequence_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(37);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym__escape_sequence_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(38);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym__escape_sequence_token3);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym__escape_sequence_token4);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym__escape_sequence_token5);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__new_line);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 13},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_property_name] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym__escape_sequence_token1] = ACTIONS(1),
    [aux_sym__escape_sequence_token2] = ACTIONS(1),
    [aux_sym__escape_sequence_token3] = ACTIONS(1),
    [aux_sym__escape_sequence_token4] = ACTIONS(1),
    [aux_sym__escape_sequence_token5] = ACTIONS(1),
  },
  [1] = {
    [sym_properties] = STATE(18),
    [sym_property] = STATE(7),
    [aux_sym_properties_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_property_name] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(11), 1,
      sym_property_name,
    ACTIONS(13), 1,
      aux_sym__string_fragment_token1,
    ACTIONS(15), 1,
      anon_sym_BSLASH,
    STATE(4), 1,
      sym_continuation,
    STATE(15), 1,
      sym__continued_line,
    ACTIONS(9), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(5), 3,
      sym__string_fragment,
      sym__escape_sequence,
      aux_sym__string_value_repeat1,
  [25] = 6,
    ACTIONS(15), 1,
      anon_sym_BSLASH,
    ACTIONS(17), 1,
      aux_sym__string_fragment_token1,
    STATE(4), 1,
      sym_continuation,
    STATE(12), 1,
      sym_property_value,
    STATE(13), 2,
      sym__string_value,
      sym__continued_line,
    STATE(2), 3,
      sym__string_fragment,
      sym__escape_sequence,
      aux_sym__string_value_repeat1,
  [47] = 5,
    ACTIONS(15), 1,
      anon_sym_BSLASH,
    ACTIONS(17), 1,
      aux_sym__string_fragment_token1,
    STATE(4), 1,
      sym_continuation,
    STATE(14), 2,
      sym__string_value,
      sym__continued_line,
    STATE(2), 3,
      sym__string_fragment,
      sym__escape_sequence,
      aux_sym__string_value_repeat1,
  [66] = 5,
    ACTIONS(21), 1,
      sym_property_name,
    ACTIONS(23), 1,
      aux_sym__string_fragment_token1,
    ACTIONS(26), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(5), 3,
      sym__string_fragment,
      sym__escape_sequence,
      aux_sym__string_value_repeat1,
  [85] = 2,
    ACTIONS(31), 1,
      sym__new_line,
    ACTIONS(29), 5,
      aux_sym__escape_sequence_token1,
      aux_sym__escape_sequence_token2,
      aux_sym__escape_sequence_token3,
      aux_sym__escape_sequence_token4,
      aux_sym__escape_sequence_token5,
  [96] = 4,
    ACTIONS(7), 1,
      sym_property_name,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      sym_comment,
    STATE(8), 2,
      sym_property,
      aux_sym_properties_repeat1,
  [110] = 4,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(42), 1,
      sym_property_name,
    STATE(8), 2,
      sym_property,
      aux_sym_properties_repeat1,
  [124] = 2,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(47), 3,
      sym_property_name,
      aux_sym__string_fragment_token1,
      anon_sym_BSLASH,
  [134] = 1,
    ACTIONS(49), 5,
      aux_sym__escape_sequence_token1,
      aux_sym__escape_sequence_token2,
      aux_sym__escape_sequence_token3,
      aux_sym__escape_sequence_token4,
      aux_sym__escape_sequence_token5,
  [142] = 2,
    STATE(3), 1,
      sym_sep,
    ACTIONS(51), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [150] = 2,
    ACTIONS(55), 1,
      sym_property_name,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      sym_comment,
  [158] = 2,
    ACTIONS(59), 1,
      sym_property_name,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      sym_comment,
  [166] = 2,
    ACTIONS(63), 1,
      sym_property_name,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      sym_comment,
  [174] = 2,
    ACTIONS(67), 1,
      sym_property_name,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      sym_comment,
  [182] = 2,
    ACTIONS(69), 1,
      aux_sym__string_fragment_token1,
    ACTIONS(71), 1,
      anon_sym_BSLASH,
  [189] = 2,
    ACTIONS(73), 1,
      aux_sym__string_fragment_token1,
    ACTIONS(75), 1,
      anon_sym_BSLASH,
  [196] = 1,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 47,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 85,
  [SMALL_STATE(7)] = 96,
  [SMALL_STATE(8)] = 110,
  [SMALL_STATE(9)] = 124,
  [SMALL_STATE(10)] = 134,
  [SMALL_STATE(11)] = 142,
  [SMALL_STATE(12)] = 150,
  [SMALL_STATE(13)] = 158,
  [SMALL_STATE(14)] = 166,
  [SMALL_STATE(15)] = 174,
  [SMALL_STATE(16)] = 182,
  [SMALL_STATE(17)] = 189,
  [SMALL_STATE(18)] = 196,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_value, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_value, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_value_repeat1, 2),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_value_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_value_repeat1, 2), SHIFT_REPEAT(5),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_value_repeat1, 2), SHIFT_REPEAT(10),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_properties_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_properties_repeat1, 2), SHIFT_REPEAT(8),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_properties_repeat1, 2), SHIFT_REPEAT(11),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_sequence, 2),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_sequence, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, .production_id = 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 3, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_value, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__continued_line, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__continued_line, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_value, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_value, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sep, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sep, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2, .production_id = 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 2, .production_id = 2),
  [77] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
