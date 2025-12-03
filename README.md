# 🏆 AlgoArena-C

[![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)](https://en.wikipedia.org/wiki/C_(programming_language))
[![GitHub](https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white)](https://github.com)
[![Educational](https://img.shields.io/badge/Educational-Project-green?style=for-the-badge)](https://github.com)

> 🎓 **Educational Project** | 🧩 **Algorithmic Challenges** | 🏅 **Competitive Programming**

AlgoArena-C is an interactive competitive programming platform built entirely in C. It challenges students to solve algorithmic problems, compare their solutions with peers, and climb the leaderboard through efficient problem-solving. The platform features engaging challenges ranging from number puzzles to pathfinding algorithms, designed to develop computational thinking and programming proficiency.

## 📸 Visual Showcase

*Coming soon - Screenshots will showcase the challenge interface, leaderboard system, and solution comparison features.*

## ✨ Key Features

- 🎯 **Diverse Algorithmic Challenges** – Seven unique programming challenges covering different algorithmic concepts, from basic operations to complex pathfinding and optimization problems.

- 🧠 **"Le Compte est Bon" Challenge** – Find a target number using six given numbers and basic arithmetic operations (+, -, ×, ÷), minimizing the number of operations used.

- 🔐 **Mastermind Algorithm** – Crack a secret number sequence in minimum attempts using intelligent guessing strategies and feedback analysis.

- 🤖 **Robot Maze Navigation** – Program a robot to find the shortest path through a grid-based maze using pathfinding algorithms (N, S, E, O movements).

- 🎲 **"Tri Ultime" Sorting Challenge** – Sort arrays with specific constraints while optimizing for comparison and swap operations.

- 📊 **Performance Tracking & Scoring System** – Automatically evaluates solutions based on multiple criteria: correctness, efficiency, execution time, and code quality.

- 🏆 **Dynamic Leaderboard** – Real-time ranking system that tracks student performance across all challenges, fostering healthy competition.

- 👤 **User Interface** – Interactive console-based interface where students can attempt challenges, submit solutions, and view their progress.

## 🛠️ Tech Stack

| Technology | Purpose | Badge |
|------------|---------|-------|
| **C Language** | Core programming language for all challenges | ![C](https://img.shields.io/badge/C-00599C?style=flat-square&logo=c&logoColor=white) |
| **GitHub** | Version control and collaboration | ![GitHub](https://img.shields.io/badge/GitHub-100000?style=flat-square&logo=github&logoColor=white) |
| **File I/O** | Data persistence for scores and leaderboards | ![File](https://img.shields.io/badge/File_I/O-gray?style=flat-square) |

## 🌟 Try It Out!

Ready to test your algorithmic skills? Clone the repository and start solving challenges!

### 🔧 Setup Instructions

#### Prerequisites
- GCC compiler (or any C compiler)
- Git
- Terminal/Command Prompt

#### Installation Steps

1. **Clone the repository**
   ```bash
   git clone https://github.com/yourusername/AlgoArena-C.git
   cd AlgoArena-C
   ```

2. **Compile the project**
   ```bash
   # Compile all challenge modules
   gcc -o algoarena main.c challenges/*.c -lm
   
   # Or use the provided Makefile
   make
   ```

3. **Run the application**
   ```bash
   ./algoarena
   ```

4. **Start solving challenges!**
   - Register or login with your username
   - Select a challenge from the main menu
   - Read the problem statement carefully
   - Write your solution
   - Submit and see your score!

The platform will track your progress and update the leaderboard automatically! 🎉

---

> 💡 **Pro Tip**: Start with Challenge 1 ("Le Compte est Bon") to understand the platform mechanics, then progressively tackle more complex problems!

## 📁 Project Structure

```
🏆 AlgoArena-C/
├── 🚀 main.c                          # Main application entry point
├── 📋 Makefile                        # Build configuration
├── 📄 README.md                       # Project documentation
│
├── 🧩 challenges/                     # Challenge implementations
│   ├── 🎯 challenge1_compte_bon.c     # "Le Compte est Bon" logic
│   ├── 🔐 challenge2_mastermind.c     # Mastermind algorithm
│   ├── 🤖 challenge3_robot_maze.c     # Robot pathfinding
│   ├── 🎲 challenge4_tri_ultime.c     # Advanced sorting
│   ├── 📊 challenge5_score_system.c   # Scoring and ranking
│   ├── 🏆 challenge6_leaderboard.c    # Leaderboard management
│   └── 👤 challenge7_user_interface.c # User interaction system
│
├── 📚 include/                        # Header files
│   ├── challenges.h                   # Challenge function declarations
│   ├── scoring.h                      # Scoring system definitions
│   └── utils.h                        # Utility functions
│
├── 💾 data/                           # Data storage
│   ├── users.txt                      # User registration data
│   ├── scores.txt                     # Challenge scores
│   └── leaderboard.txt                # Ranking information
│
└── 📖 docs/                           # Documentation
    ├── challenge_specifications.md    # Detailed problem statements
    ├── scoring_guide.md               # How scoring works
    └── contribution_guide.md          # For contributors
```

### 📂 Directory Breakdown

| **Component** | **Purpose** | **Key Files** |
|---------------|-------------|---------------|
| **🚀 Core Application** | Main program logic and initialization | `main.c`, `Makefile` |
| **🧩 Challenges** | Individual challenge implementations | `challenges/*.c` |
| **📚 Headers** | Function declarations and data structures | `include/*.h` |
| **💾 Data Storage** | Persistent user data and scores | `data/*.txt` |
| **📖 Documentation** | Comprehensive guides and specifications | `docs/*.md` |

### 🔄 Workflow Overview

1. **User Registration/Login** → Authenticates student and loads profile
2. **Challenge Selection** → Presents available algorithmic challenges
3. **Problem Solving** → Student writes and submits solution code
4. **Automatic Evaluation** → System tests solution against test cases
5. **Score Calculation** → Evaluates based on correctness, efficiency, and code quality
6. **Leaderboard Update** → Updates rankings in real-time

## 🎯 Challenge Overview

### 📝 Challenge 1: "Le Compte est Bon"
**Objective**: Find a target number using six given numbers and arithmetic operations (+, -, ×, ÷).

**Input**: 6 numbers and 1 target
**Output**: Valid sequence of operations
**Example**: With [2, 3, 5, 7, 10, 25] and target 125 → "25×5=125"

**Scoring Criteria**:
- Correctness of result
- Number of operations used (fewer is better)
- Valid operations only

---

### 🔐 Challenge 2: "Mastermind Algorithmique"
**Objective**: Guess a secret number sequence in minimum attempts.

**Mechanics**: After each guess, system provides feedback on correct digits
**Strategy**: Use intelligent elimination and pattern recognition
**Goal**: Minimize number of attempts

---

### 🤖 Challenge 3: "Course de Robots"
**Objective**: Find the shortest path in a grid-based maze.

**Input**: Maze grid with walls
**Output**: Sequence of movements (N, S, E, O)
**Visualization**: Display the path taken

---

### 🎲 Challenge 4: "Tri Ultime"
**Objective**: Sort an array with specific constraints and optimization goals.

**Variants**: Tri with limited operations, counting swaps/comparisons
**Measure**: Compare exchange count against optimal solution

---

### 📊 Challenge 5: "Système de Score et Classement"
**Objective**: Implement or understand the scoring algorithm.

**Scoring Formula**: Considers difficulty, attempts, time, and code efficiency
**Use Case**: Calculate challenge points for leaderboard

---

### 🏆 Challenge 6+7: User System & Interface
**Objective**: Build robust user management and interactive interface.

**Features**:
- User registration and authentication
- Save/load user progress
- Display personalized statistics
- Interactive menu navigation
- Real-time score updates

## 🚀 Skills Developed

This project provides hands-on experience with:

- 💻 **C Programming Mastery** – Deep understanding of C syntax, data structures, and memory management
- 🧠 **Algorithm Design** – Implementing search, sorting, pathfinding, and optimization algorithms
- 📊 **Data Structures** – Working with arrays, linked lists, and file-based storage
- 🔍 **Problem Decomposition** – Breaking complex problems into manageable functions
- 🎯 **Performance Optimization** – Writing efficient code with minimal time/space complexity
- 💾 **File I/O Operations** – Persistent data storage and retrieval systems
- 🏗️ **Modular Programming** – Creating reusable, maintainable code modules
- 🧪 **Testing & Debugging** – Systematic approach to finding and fixing bugs
- 📈 **Scoring Algorithms** – Designing fair evaluation systems with multiple criteria

## 🤝 Support & Contribution

We welcome contributions from students and educators! This project thrives on community collaboration.

### 🌟 Ways to Get Involved

- **⭐ Star this repository** if you find it valuable for learning
- **🐛 Report bugs** by opening an issue with detailed reproduction steps
- **💡 Suggest new challenges** or improvements to existing ones
- **🔀 Submit pull requests** with new features or bug fixes
- **📖 Improve documentation** – help others understand the code better
- **🎓 Share your solutions** – discuss different approaches to challenges
- **🗣️ Spread the word** – recommend to fellow students learning C

### 📬 Get in Touch

- **GitHub Issues**: For bug reports and feature requests
- **Discussions**: For questions, algorithm discussions, and learning experiences
- **Educational Use**: Teachers/professors using this for coursework – we'd love feedback!

---

> 🎓 **Academic Project Notice**
> 
> This is a **non-commercial educational project** developed for a C Programming class. The platform is designed to:
> - 📚 Enhance algorithmic thinking skills
> - 💪 Build proficiency in C programming
> - 🏆 Foster healthy academic competition
> - 🤝 Encourage collaborative learning
>
> Built with 💻 for academic excellence and skill development.

---

## 🎯 Learning Outcomes

By completing this project, students will demonstrate:

✅ **Algorithmic Proficiency** – Ability to design and implement efficient algorithms  
✅ **C Language Mastery** – Strong command of C syntax, pointers, and memory management  
✅ **Problem-Solving Skills** – Systematic approach to breaking down complex challenges  
✅ **Code Quality** – Writing clean, documented, and maintainable code  
✅ **Performance Awareness** – Understanding time/space complexity trade-offs  
✅ **Debugging Expertise** – Identifying and resolving programming errors effectively

## 🙏 Acknowledgments

This project wouldn't exist without the foundational work of:

**💻 Dennis Ritchie & Brian Kernighan** – For creating the C programming language that powers system-level development worldwide.

**🎓 Educational Community** – For fostering algorithmic thinking and competitive programming culture.

**📚 Open Source Movement** – For making programming knowledge accessible to all learners.

**🏫 Our C Programming Instructor** – For designing challenging problems that push our boundaries.

**👥 Fellow Students** – For collaboration, testing, and valuable feedback during development.

Every algorithm implemented, every bug fixed, and every challenge solved builds upon the legacy of computer science pioneers. Thank you for inspiring the next generation of programmers! 🚀

---

## 📝 Deliverables

As per project requirements:

- ✅ **GitHub Repository** – Complete source code with version control
- ✅ **Documentation** – Comprehensive README.md with setup instructions
- ✅ **Google Classroom Submission** – Repository link submitted on time

---

**Made with ❤️ for learning C programming and algorithmic problem-solving**
