/*
 * Copyright (c) 2023.
 *
 * This file is part of tree-sitter-properties.
 *
 * tree-sitter-properties is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * tree-sitter-properties is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with android-tree-sitter.  If not, see <https://www.gnu.org/licenses/>.
 */

module.exports = grammar({
    name: 'properties',
    rules: {
        properties: $ => repeat(
            choice($.comment, $.property)
        ),

        comment: () => token(seq(
            choice('#', '!'),
            /[^\n]*/
        )),

        property: $ => seq(
            field('key', $.property_name),
            field('separator', $.sep),
            field('value', $.property_value)
        ),

        property_name: () => /[^:=\s\t\f\r\n]+/,

        sep: () => choice(
            '=',
            ':'
        ),

        property_value: $ => choice(
            $._string_value,
            $._continued_line
        ),

        _string_value: $ => seq(
            repeat1($._string_fragment),
            optional($._continued_line),
        ),

        _string_fragment: $ => choice(
            /\S[^\\\r\n]+/,
            $._escape_sequence,
        ),

        _escape_sequence: $ => seq(
            '\\',
            choice(
                /[\\bfnrt]/,
                /[0-7]{1,3}/,
                /x[0-9a-fA-F]{2}/,
                /u[0-9a-fA-F]{4}/,
                /u{[0-9a-fA-F]+}/
            ),
        ),

        _continued_line: $ => seq(
            $.continuation,
            choice($._string_value, $._continued_line)
        ),

        continuation: $ => seq(
            field('separator', '\\'),
            $._new_line
        ),

        _new_line: () => token(seq(optional('\r'), '\n')),
    },
});
