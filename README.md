# Lab 3 · A typed about-me

**Week 03 · Types & variables**  
**Theme:** Pick a type, give it a first value, print the name  
**Type:** Lesson week


## Demo video (required)

Paste a link to a short video of you running this assignment (tool + code + run).
Work without a working video link is incomplete.

**Your demo:** _[my link](https://youtu.be/mMH7ZiTmERI)_


## Scenario
This week we picked types on purpose. Write a short about-me from five typed variables plus one `const`. Every box gets a first value on the same line you declare it. The labeled lines come from those names, not leftover quotes.

## Goals
- Declare and initialize: `name` (string), `age` (int), `height_m` (double), `initial` (char), `student` (bool)
- One `const` (for example `CURRENT_YEAR`)
- Print labeled lines from the variable names — not a raw dump, not a sentence you typed by hand
- Push + short demo video + Canvas

## Starter
Use `main.cpp`. Put your name in the file-top comment. Fill the boxes on the same line you declare them.

## Environment
VS 2022 · **GitHub Codespaces** · Replit · library machines

## Procedure
1. Open the starter. Keep `CURRENT_YEAR` (or rename it to something that should not change)
2. Declare and initialize every required box. Type, name, equals, first value, semicolon
3. Print labeled output with `cout` and the variable names. `bool` printing `1` or `0` is fine this week
4. Build. If a type error appears, read it — the box’s rule is the lesson
5. Change one value, rebuild, prove the output changed
6. Commit, push, short demo, Canvas

## Sample output
```
=== About me ===
Name: Herberth Sanchez-Gomez
Age: 24
Height (m): 1.72
Initial: S
Student: 1
Year: 2026
```

## Definition of done
- Compiles with zero errors
- Every required box is declared, initialized on the same line, and printed
- One `const` is used
- Repo + short demo + Canvas

## Rubric (100)
| Criterion | Pts |
|-----------|----:|
| Runs correctly on a supported path | 40 |
| Meets prompt requirements | 30 |
| Clear labeled output from the names | 15 |
| GitHub + short demo video | 15 |

## Scope fence
One file. No loops, extra functions, or pointers. Do not use `string` for a number just to dodge a type. You do not need `sizeof` or bits printed — we talked about bytes so you know why a type has a size, not so you measure it this week.

## Tips
- An empty box can print leftover memory. Give every box a first value
- `std::string` needs `#include <string>`
- `'A'` is a char. `"A"` is a string. Mixing those quotes is the error
- Putting text in an `int` is a type mismatch. Change the type or change the value

## Help (`/ring`)
After a real try, include: goal · what you tried · exact error · screenshot/repo · OS + tool.

## Getting started

1. Fork this repo on GitHub.
2. Clone your fork.
3. Compile and run:

```bash
g++ -std=c++17 -o program main.cpp && ./program
```

On Windows (Visual Studio), open `main.cpp` and use **Local Windows Debugger**.
4. Record a short demo that shows your tool, your code, and a real run.
5. Paste the video link in the **Demo video** section above.
6. Submit your fork URL on Canvas.
