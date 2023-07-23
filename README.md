# tree-sitter-properties

<a href="https://github.com/AndroidIDEOfficial/AndroidIDE"><img src="https://androidide.com/github/img/androidide.php?part&for-the-badge"/></a><br><br>
Tree Sitter Grammar for `.properties` file, based on the format
specified [here](https://en.wikipedia.org/wiki/.properties).

## Limitations

- Does not support escape sequences in property names.
- Escape sequences at the end of the line are not recognized.
- Only `=` and `:` are supported as property key-value separators.

## License

```
tree-sitter-properties is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

tree-sitter-properties is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU General Public License
along with android-tree-sitter.  If not, see <https://www.gnu.org/licenses/>.
```
