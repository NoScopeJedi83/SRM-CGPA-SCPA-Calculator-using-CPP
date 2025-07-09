# 🎓 SGPA & CGPA Calculator – SRM Format (C++)

This project is a command-line based **SGPA and CGPA calculator** tailored for SRM University's grading system. It allows users to calculate:
- **SGPA** based on subject grades and credits in a semester
- **CGPA** based on SGPAs and credit distribution across semesters

> 📌 Built using C++ for performance and portability  
> 🧮 Follows SRM grade-to-point mapping standard  
> 🧠 Modular structure and user-friendly CLI interaction

---

## 📚 SRM Grade-to-Point Mapping

| Grade | Grade Point |
|-------|-------------|
| O     | 10          |
| A+    | 9           |
| A     | 8           |
| B+    | 7           |
| B     | 6           |
| C     | 5           |
| P     | 4           |
| F/AB  | 0           |

---

## ⚙️ Features

- 📘 **SGPA Calculator**: Enter grades and credits for a semester  
- 📊 **CGPA Calculator**: Enter SGPA + credits for multiple semesters  
- 🧮 Grade input as letter grades (O, A+, B+, etc.), mapped internally  
- 🖥️ Fully terminal-compatible (no emoji, no Unicode issues)  
- 📦 Lightweight C++ program, no external dependencies  

---

## 🚀 How to Run

### 🛠️ Compile the program

```bash
g++ sgpa_cgpa_calculator.cpp -o calculator
```

### ▶️ Run it
```bash
./calculator
```

### 🧪 Example Usage
```
SRM SGPA & CGPA Calculator

Choose an option:
1. Calculate SGPA for a semester
2. Calculate CGPA from SGPAs
0. Exit
Enter choice: 1

Enter number of subjects in this semester: 3

Subject 1:
Letter Grade (O, A+, A, etc.): O
Credits: 4

Subject 2:
Letter Grade (O, A+, A, etc.): A+
Credits: 3

Subject 3:
Letter Grade (O, A+, A, etc.): B
Credits: 3

SGPA for this semester: 8.90
```

## 📸 Outputs

<p align="center"> <img src="
SGPA_CGPA_Calculator/outputs/sgpa_example.png" alt="SGPA Output" width="48%"> <img src="
SGPA_CGPA_Calculator/outputs/cgpa_example.png" alt="CGPA Output" width="48%"> </p>

These screenshots demonstrate sample runs of SGPA and CGPA calculations using SRM's grading scheme.

## 📂 Project Structure

```
SGPA_CGPA_Calculator/
├── sgpa_cgpa_calculator.cpp    # Main C++ source file
├── outputs/
│   ├── sgpa_example.png
│   └── cgpa_example.png
README.md                       # This documentation file
```
## 📌 Notes

Input validation is handled for grades and credits.

Case-insensitive grade entry is supported (e.g., a+, B+, etc.).

Outputs are precision-limited to two decimal places using iomanip.

## 🙌 Contribution

Feel free to fork the repo and suggest enhancements:

Add file input/output

Include semester-wise breakdown logs

Build a GUI with Qt or export to HTML

📬 Contact
For feedback or improvements, reach out at:
atharvgro2003@gmail.com


