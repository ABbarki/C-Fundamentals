# 💻 C Fundamentals

> **Goal:** By the end of this guide, you should be able to write small C programs *without copying tutorials*. ✨

---

## 📑 Table of Contents

| # | Topic |
|---|-------|
| 1 | [`main()` and Program Structure](#1️⃣-main-and-program-structure) |
| 2 | [Variables and Data Types](#2️⃣-variables-and-data-types) |
| 3 | [`printf()`](#3️⃣-printf) |
| 4 | [`scanf()`](#4️⃣-scanf) |
| 5 | [Operators](#5️⃣-operators) |
| 6 | [`if / else`](#6️⃣-if--else) |
| 7 | [`else if`](#7️⃣-else-if) |
| 8 | [Loops](#8️⃣-loops) |

---

## 1️⃣ `main()` and Program Structure

A C program is made of different parts. Each part has a specific job. 🧩

### `#include`

`#include` is used to include a **library** in your program — a library contains tools and functions you can use.

```c
#include <stdio.h>
```

`stdio.h` gives us functions such as `printf()` and `scanf()`.

> 💡 **Think of `#include` as:** *"Get the tools I need."*

### `main()`

`main()` is the **starting point** of a C program.

```c
int main()
```

> 💡 **Think of `main()` as:** *"Start the program here."*

### `{ }`

Curly brackets `{ }` define a **block of code** — everything between `{` and `}` belongs to `main()`.

```c
int main()
{
    // code goes here
}
```

> 💡 **Think of `{ }` as:** *"This is where the code lives."*

### Statements

A **statement** is an instruction given to the computer.

```c
printf("Hello");        // → Do this.
int age = 17;           // → Create 'age' and store 17 in it.
```

### `return 0`

```c
return 0;   // The program finished successfully ✅
```

The `0` normally means there was no error.

### `;`

The semicolon `;` marks the **end of a statement** — like a full stop `.` in English.

```c
printf("Hello");
int age = 17;
return 0;
```

### 🧪 Complete Example

```c
#include <stdio.h>

int main()
{
    printf("Hello");

    return 0;
}
```

**How it flows:**

| Part | Meaning |
|------|---------|
| `#include <stdio.h>` | Get the tools we need 🛠️ |
| `int main()` | Start the program here 🚀 |
| `{` | Start the code block |
| `printf("Hello");` | Print "Hello" |
| `return 0;` | Finished successfully ✅ |
| `}` | End the code block |

### 🧠 Easy Way to Remember

| Syntax | Meaning |
|--------|---------|
| `#include` | Get tools 🛠️ |
| `main()` | Start here 🚀 |
| `{ }` | Code block |
| Statement | Instruction |
| `return 0` | Finished successfully ✅ |
| `;` | End of instruction |

---

## 2️⃣ Variables and Data Types

A **variable** is a place in the computer's memory where we store a value. 🗄️

```c
int age = 17;
```

* `int` → the type of data
* `age` → the name of the variable
* `=` → assigns the value
* `17` → the value stored
* `;` → ends the statement

> 💡 Think of a variable like a **box with a name**:

```text
age
┌────┐
│ 17 │
└────┘
```

### 📦 Declaring a Variable

```c
int age;        // declare (no value yet)
age = 17;       // assign later

int age = 17;   // declare + initialize at the same time ✅
```

### 🏷️ Data Types

A **data type** tells C what kind of value a variable will store.

| Type | Stores | Example |
|------|--------|---------|
| `int` | Whole numbers | `int age = 17;` |
| `float` | Decimal numbers | `float height = 1.74;` |
| `double` | More precise decimals | `double pi = 3.1415926535;` |
| `char` | One single character | `char grade = 'A';` |
| `void` | No value | used with functions |

> ⚠️ A `char` stores **one character**, not a whole word (that comes later with **strings**).

### 🔄 Changing a Variable

```c
int age = 17;
age = 18;      // age → 18 (same box, new value)
```

### ✍️ Naming Rules

✅ **Valid:** `age`, `student_age`, `score1`
❌ **Invalid:** `1age` (starts with number), `student age` (spaces)

* Can contain letters, numbers, and `_`
* Cannot start with a number
* Cannot contain spaces
* Cannot be a C keyword

### 🔒 Constants

```c
const int DAYS = 7;
DAYS = 10;      // ❌ not allowed
```

> **variable** → value can change 🔄 &nbsp;&nbsp;|&nbsp;&nbsp; **constant** → value stays the same 🔒

### 🧪 Example Program

```c
#include <stdio.h>

int main()
{
    int age = 17;
    float height = 1.74;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}
```

**Output:**
```text
Age: 17
Height: 1.74
Grade: A
```

### 🧠 Easy Way to Remember

```text
int     → whole number
float   → decimal number
double  → more precise decimal number
char    → one character
void    → no value
```

**Pattern:** `data_type variable_name = value;`

> 📖 Read `int age = 17;` as: *"Create an integer variable called age and store 17 in it."*

---

## 3️⃣ `printf()`

`printf()` is used to **display information on the screen**. 🖥️➡️👤

```c
#include <stdio.h>
```

### 📝 Printing Text

```c
printf("Hello");            // → Hello
printf("Hello, world!");    // → Hello, world!
```

The text must be inside **double quotes** `" "`.

> ⚠️ By default, `printf()` does **not** move to a new line.

### ⬇️ `\n` — New Line

```c
printf("Hello\n");
printf("World");
```

**Output:**
```text
Hello
World
```

### 🔢 Format Specifiers

A format specifier tells `printf()` what type of data to display.

| Specifier | Type | Example Output |
|-----------|------|----------------|
| `%d` | `int` | `17` |
| `%f` | `float` | `1.740000` |
| `%.2f` | `float` (2 decimals) | `1.74` |
| `%c` | `char` | `A` |
| `%s` | string | `Hello` |

### 🔗 Text + Variables Together

```c
int age = 17;
printf("I am %d years old.", age);        // → I am 17 years old.

float height = 1.74;
printf("My height is %.2f meters.", height);  // → My height is 1.74 meters.
```

### 🔢 Multiple Variables

```c
int age = 17;
float height = 1.74;
printf("Age: %d, Height: %.2f", age, height);
// → Age: 17, Height: 1.74
```

> ⚠️ **Order matters!** First `%d` → `age`, second `%.2f` → `height`.

### 🧪 Complete Example

```c
#include <stdio.h>

int main()
{
    int age = 17;
    float height = 1.74;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}
```

### 🧠 Easy Way to Remember

> **`printf()` → print something on the screen** 🖨️

```text
%d → int      %f → float
%c → char     %s → string
\n → new line
```

---

## 4️⃣ `scanf()`

`scanf()` is used to **get input from the user**. 👤➡️🖥️

| Function | Direction | Role |
|----------|-----------|------|
| `printf()` | Computer → User | OUTPUT 📤 |
| `scanf()` | User → Computer | INPUT 📥 |

### ❓ Why Do We Use `&`?

```c
scanf("%d", &age);
             ↑
     where to store it (memory location)
```

The `&` tells C **where the variable is stored in memory**, so `scanf()` knows where to put the input. (You'll understand this fully with **pointers**!)

### 🔢 With `int`

```c
int age;
scanf("%d", &age);
```

### 🌊 With `float`

```c
float height;
scanf("%f", &height);
```

### 🔤 With `char`

```c
char grade;
scanf(" %c", &grade);   // ⚠️ note the SPACE before %c
```

> 💡 The space helps `scanf()` ignore leftover whitespace (like the Enter key).

### 🔢 Multiple Values

```c
int age;
float height;
scanf("%d %f", &age, &height);
```

**User enters:**
```text
17 1.74
```
→ `age = 17`, `height = 1.74`

### 🧪 Complete Example

```c
#include <stdio.h>

int main()
{
    int age;
    float height;
    char grade;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height: ");
    scanf("%f", &height);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("\nAge: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}
```

### 🧠 Easy Way to Remember

**Pattern:** `scanf("format", &variable);`

```c
scanf("%d", &age);
scanf("%f", &height);
scanf(" %c", &grade);
```

> 📤 `printf()` → give info **to** the user &nbsp;|&nbsp; 📥 `scanf()` → take info **from** the user

---

## 5️⃣ Operators

An **operator** is a symbol that tells C to perform an operation on one or more values. ⚙️

```c
int result = 10 + 5;    // + is an operator → result = 15
```

### ➕ 1. Arithmetic Operators

| Operator | Meaning | Example | Result |
|----------|---------|---------|--------|
| `+` | Addition | `10 + 5` | `15` |
| `-` | Subtraction | `10 - 5` | `5` |
| `*` | Multiplication | `10 * 5` | `50` |
| `/` | Division | `10 / 5` | `2` |
| `%` | Remainder | `10 % 3` | `1` |

> ⚠️ Integer division drops the decimal: `5 / 2` → `2`
> ✅ For decimals: `5.0 / 2.0` → `2.5`

`%` is great for **even/odd** checks:

```c
if (number % 2 == 0)
{
    printf("Even");
}
```

### 📥 2. Assignment Operators

| Operator | Meaning | Equivalent |
|----------|---------|------------|
| `=` | assign | `age = 17;` |
| `+=` | add & store | `age += 1;` → `age = age + 1;` |
| `-=` | subtract & store | `age -= 1;` |
| `*=` | multiply & store | `number *= 2;` |
| `/=` | divide & store | `number /= 2;` |

> ⚠️ `=` puts a value **into** a variable — it does NOT mean "equals" in math.

### ⬆️⬇️ 3. Increment & Decrement

| Operator | Meaning | Example | Result |
|----------|---------|---------|--------|
| `++` | add 1 | `age++;` | `17 → 18` |
| `--` | subtract 1 | `age--;` | `17 → 16` |

### ⚖️ 4. Comparison Operators

| Operator | Meaning |
|----------|---------|
| `==` | Equal to |
| `!=` | Not equal to |
| `>` | Greater than |
| `<` | Less than |
| `>=` | Greater than or equal to |
| `<=` | Less than or equal to |

```c
if (age >= 18)
{
    printf("Adult");
}
```

### 🔗 5. Logical Operators

| Operator | Name | Rule |
|----------|------|------|
| `&&` | AND | Both must be true |
| `\|\|` | OR | At least one must be true |
| `!` | NOT | Reverses the condition |

```c
age >= 18 && age <= 30    // between 18 and 30
age < 18 || age > 60      // outside 18–60
!(age == 18)              // not 18
```

### 🥇 6. Operator Precedence

```c
int result = 2 + 3 * 4;     // * first → 2 + 12 = 14
int result = (2 + 3) * 4;   // ( ) first → 5 * 4 = 20
```

> 💡 Parentheses = **"Do this first."**

### 🧪 Complete Example

```c
#include <stdio.h>

int main()
{
    int a = 10;
    int b = 3;

    printf("Sum: %d\n", a + b);
    printf("Difference: %d\n", a - b);
    printf("Product: %d\n", a * b);
    printf("Quotient: %d\n", a / b);
    printf("Remainder: %d\n", a % b);

    return 0;
}
```

**Output:**
```text
Sum: 13
Difference: 7
Product: 30
Quotient: 3
Remainder: 1
```

### 🧠 Easy Way to Remember

```text
+  → calculate     =  → store      == → compare
++ → add 1         -- → subtract 1
&& → AND           || → OR         !  → NOT
```

---

## 6️⃣ `if / else`

`if` and `else` are used to make **decisions** in a C program. 🚦

```text
IF something is true  → do this
ELSE                  → do something else
```

### 🟢 Basic `if`

```c
int age = 20;

if (age >= 18)
{
    printf("Adult");    // 20 >= 18 is TRUE → prints "Adult"
}
```

If the condition is false and there's no `else` — **nothing happens**.

### 🟢🔴 `if / else`

```c
int age = 15;

if (age >= 18)
{
    printf("Adult");
}
else
{
    printf("Minor");    // 15 >= 18 is FALSE → prints "Minor"
}
```

### ⚠️ CRITICAL: `=` vs `==`

| Symbol | Meaning | Example |
|--------|---------|---------|
| `=` | **assign** a value | `age = 18;` |
| `==` | **compare** values | `if (age == 18)` ✅ |

❌ **Never write:** `if (age = 18)` when you want to *compare*!

### 🔗 Multiple Conditions

```c
// AND — both must be true
if (age >= 18 && age <= 30)

// OR — at least one true
if (age < 18 || age > 60)

// NOT — reverses
if (!(age == 18))
```

### ⌨️ With `scanf()`

```c
#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are an adult.");
    }
    else
    {
        printf("You are a minor.");
    }

    return 0;
}
```

### 🏠 Nested `if`

```c
int age = 20;
int hasID = 1;

if (age >= 18)
{
    if (hasID == 1)     // checked only if first condition is true
    {
        printf("You can enter.");
    }
}
```

### 🧪 Complete Example

```c
#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("Positive");
    }
    else if (number < 0)
    {
        printf("Negative");
    }
    else
    {
        printf("Zero");
    }

    return 0;
}
```

### 🧠 Easy Way to Remember

```text
if      → check a condition
else if → check another condition
else    → everything else
```

> 💡 **`if / else` = make a decision.**

---

## 7️⃣ `else if`

Use `else if` when you have **more than two possible conditions**. 🔀

### 🏗️ Basic Structure

```c
if (condition1)
{
    // code if condition1 is true
}
else if (condition2)
{
    // code if condition2 is true
}
else
{
    // code if none are true
}
```

> ⬇️ C checks conditions **from top to bottom**. As soon as one is true, it runs that block and **skips the rest**.

### 🧒 Example: Ages

```c
int age = 20;

if (age < 13)
{
    printf("Child");
}
else if (age < 18)
{
    printf("Teenager");
}
else
{
    printf("Adult");    // ← this one runs ✅
}
```

### 🎓 Example: Grades

```c
int grade = 85;

if (grade >= 90)       printf("A");
else if (grade >= 80)  printf("B");    // ← 85 >= 80 TRUE → prints "B" ✅
else if (grade >= 70)  printf("C");
else if (grade >= 60)  printf("D");
else                   printf("F");
```

> ⚠️ After finding `85 >= 80`, C **stops checking** the remaining conditions.

### ⚖️ `else if` vs Multiple `if`

**With `else if`** — only **one** block runs:

```c
if (grade >= 80)
    printf("Good");
else if (grade >= 60)
    printf("Pass");
```

**With separate `if`s** — both can run:

```c
if (grade >= 80)
    printf("Good");

if (grade >= 60)      // ✅ both conditions true → BOTH print
    printf("Pass");
```

### 🧠 Easy Way to Remember

> **`else if` = "If the first condition wasn't true, check this one."**

```text
if      → Check this
else if → If not, check this
else if → If not, check this
else    → If nothing worked, do this
```

---

## 8️⃣ Loops

A **loop** repeats a piece of code **multiple times** without writing it again. 🔁

Instead of:

```c
printf("Hello\n");
printf("Hello\n");
printf("Hello\n");
```

Just write:

```c
for (int i = 0; i < 5; i++)
{
    printf("Hello\n");
}
```

C has three main loops:

```text
for  •  while  •  do while
```

### 🔁 1. `for` Loop

Best when you know **how many times** to repeat.

```c
for (initialization; condition; update)
{
    // code to repeat
}
```

```c
for (int i = 0; i < 5; i++)
{
    printf("Hello\n");
}
```

| Part | Role |
|------|------|
| `int i = 0` | **initialization** — start |
| `i < 5` | **condition** — keep going while true |
| `i++` | **update** — after each repetition |

**Trace:** `i=0 → print`, `i=1 → print`, ..., `i=4 → print`, `i=5 → stop` 🛑

Print numbers 1–5:

```c
for (int i = 1; i <= 5; i++)
{
    printf("%d\n", i);
}
```

### 🔄 2. `while` Loop

Repeats **while a condition is true**.

```c
int i = 1;

while (i <= 5)
{
    printf("%d\n", i);
    i++;            // ⚠️ without this → INFINITE LOOP! ♾️
}
```

> ⚠️ You must make sure the condition eventually becomes **false**!

### 🔂 3. `do while` Loop

Runs **at least once**, then checks the condition.

```c
int i = 1;

do
{
    printf("%d\n", i);
    i++;
}
while (i <= 5);
```

**The key difference:**

| Loop | When is condition checked? |
|------|---------------------------|
| `while` | **Before** the code runs (may run 0 times) |
| `do while` | **After** the code runs (always runs ≥ 1 time) |

```c
int i = 10;

while (i < 5)  { printf("Hello"); }   // prints NOTHING
do { printf("Hello"); } while (i < 5);  // prints "Hello" ONCE
```

### 🛑 `break` — Stop the Loop

```c
for (int i = 1; i <= 10; i++)
{
    if (i == 5)
    {
        break;          // stop immediately!
    }
    printf("%d\n", i);   // prints 1 2 3 4
}
```

### ⏭️ `continue` — Skip This Iteration

```c
for (int i = 1; i <= 5; i++)
{
    if (i == 3)
    {
        continue;       // skip 3!
    }
    printf("%d\n", i);   // prints 1 2 4 5
}
```

> 💡 `break` → stop everything 🛑 &nbsp;|&nbsp; `continue` → skip one ⏭️

### 🏘️ Nested Loops

A loop inside another loop — the inner loop runs completely for every outer iteration.

```c
for (int i = 1; i <= 3; i++)
{
    for (int j = 1; j <= 3; j++)
    {
        printf("%d %d\n", i, j);
    }
}
```

Useful for: tables, grids, patterns, 2D arrays.

### 🧪 Example: Multiplication Table

```c
#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
```

**Output (input = 5):**
```text
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
...
5 x 10 = 50
```

### 🤔 When to Use Each Loop?

| Loop | Use when... |
|------|-------------|
| `for` | You know **how many times** to repeat |
| `while` | Repeat **while a condition is true** |
| `do while` | Code must run **at least once** |

### 🧠 Easy Way to Remember

```text
for       → repeat a known number of times 🔢
while     → repeat while condition is true ♾️
do while  → run once, then check condition 🔂
```

> 💡 **A loop = repeat code without writing it again and again.**

---

## 🎓 Final Cheat Sheet

```text
#include   → get tools        main()     → start here
int/float/char/double → data types
printf()   → OUTPUT 📤       scanf()    → INPUT 📥
+ - * / %  → arithmetic      == != > < >= <= → compare
&& || !    → logic           ++ --      → add/subtract 1
if/else    → decisions 🚦    for/while/do while → loops 🔁
break      → stop loop 🛑    continue   → skip one ⏭️
```

---

> 📝 *Note: topics like `switch`, functions, arrays, and strings will build on everything above — master these fundamentals first!*
