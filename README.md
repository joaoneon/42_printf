<h1 align="center">
  42_printf
</h1>
<p align="center>
  <img src="https://github.com/joaoneon/42_printf/assets/6489188/e0f404d3-1438-4f30-a6db-92553e3a21d1">
</p>
<h3 align="left">
About the project:
</h3>
<p>
This repository contains the entire codebase for the ft_printf project, encompassing both the mandatory section and a portion of the bonus section. To build the code into a program named libft.a, you can utilize the provided Makefile.
</p>
 <h3 align="left">
    Technology used:
  </h3>
   <table>
       <td align="center">
            <img src="https://skillicons.dev/icons?i=c" width="65px" alt="C icon" /><br>
            <sub>
                <b>
                    <pre>C language</pre>
                </b>
            </sub>
        </td>
  </table>
 <h3 align=>
  Mandatory Part  
</h3>
  <p align="left">
Re-code the printf() function, from the libc. The function must be able to handle the following conversions: c, s, p, d, i, u, x, X, and %.
  </p>
  <table align="left">
  <tr>
    <td>Conversion</td>
    <td>Description</td>
  </tr>
  <tr>
    <td>c</td>
    <td>Output a character</td>
  </tr>
    <tr>
    <td>s</td>
    <td>Output a string</td>
  </tr>
    <tr>
    <td>p</td>
    <td>Output a pointer in hexadecimal format</td>
  </tr>
    <tr>
    <td>d</td>
    <td>Output a number in decimal format</td>
  </tr>
    <tr>
    <td>i</td>
    <td>Output an integer</td>
  </tr>
      <tr>
    <td>u</td>
    <td>Output an unsigned int</td>
  </tr>
        <tr>
    <td>x</td>
    <td>Output a number in lowercase hexadecimal format</td>
  </tr>
       <tr>
    <td>X</td>
    <td>Output a number in uppercase hexadecimal format</td>
  </tr>
         <tr>
    <td>%</td>
    <td>Output the "%" character</td>
  </tr>
  </table>

<h3 align="left">
  Bonus
</h3>
<p align="left">
Re-implement certain flags of the original printf function.
</p>
 <table align="left">
  <tr>
    <td>Conversion</td>
    <td>Description</td>
    <td>Conversions used</td>
  </tr>
  <tr>
    <td>#</td>
    <td>Include '0x' or '0X' before the conversion when displaying it</td>
    <td>x and X</td>
  </tr>
    <tr>
    <td>' '</td>
    <td>Prefix a space ' ' before positive numbers when displaying them</td>
    <td>d and i</td>
  </tr>
    <tr>
    <td>+</td>
    <td>Prepend a plus sign '+' before positive numbers when displaying them.</td>
    <td>d and i</td>
  </tr>
 </table>

   <h3 align="left">
   Final score  
</h3>
<p align="left">
  <img src="https://github.com/joaoneon/42_printf/assets/6489188/3f594533-bfaa-46b9-8273-ca51b0521756">
</p>

 <h3 align="left">
  Instructions to use  
</h3>
<p>
  In order to utilize this project, you must initially clone the repository onto your local machine by employing a terminal:
  </p>
  <ul>
  <li>
  - $> git clone git@github.com:joaoneon/42_printf.git [folder]
  </ul>
  </li>
  
  <p>
  Once you have cloned the project into your local repository, you can execute various commands listed in the Makefile.
  </p>
  <ul>
  <li>
  - $> By executing the command <b>"make all"</b> or simply <b>"make"</b>, you can compile the project.
  </ul>
  </li>
    <ul>
  <li>
  - $> To compile the project, you can use the command <b>"make bonus"</b> in the terminal.
  </ul>
  </li>
    <ul>
  <li>
  - $> To delete the object files created during compilation, you can use the command <b>"make clean"</b>.
  </ul>
  </li>
    <ul>
  <li>
  - $> To execute the clean command and delete the libftprintf.a library file, you can use the command <b>"make fclean"</b>.
  </ul>
  </li>
    <ul>
  <li>
  - $>  The command <b>"make re"</b> executes the "fclean" command followed by the "all" command. It cleans the project by deleting object files and the libftprintf.a library, and then recompiles the entire project.
  </ul>
  </li>
  <p>
    To utilize ft_printf in your projects, you need to include its header file.
  </p>
    <ul>
  <li>
  - $> #include "ft_printf.h"
  </ul>
  </li>
    <p>
    
To compile your projects that use libft, you need to include the necessary flags.
  </p>
    <ul>
  <li>
  - $> ... -lftprintf -L [path/to/libftprintf.a] -I [path/to/ft_printf.h]
  </ul>
  </li>
  
